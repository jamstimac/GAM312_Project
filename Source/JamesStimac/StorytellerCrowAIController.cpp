// Fill out your copyright notice in the Description page of Project Settings.


#include "StorytellerCrowAIController.h"
#include "Kismet/GameplayStatics.h"
#include "JamesStimacCharacter.h"


/* base FVectors for character location checks*/
// If player moves past x value of post move to waypoint 1
const float MoveAICheck1X = 1105.f;

// to move from waypoint 1 to 2 check if player has moved past these locations

const float MoveAICheck2X = -300.f;
const float MoveAICheck2Y = 2000.f;



void AStorytellerCrowAIController::BeginPlay()
{
	Super::BeginPlay();

	// if world != nullptr
	if (GetWorld())
	{

		// get all waypoints
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
		uint8 i = 0;
		for (auto waypoint : Waypoints)
		{
			i++;
			GEngine->AddOnScreenDebugMessage(i+5, 5.f, FColor::Green, FString::Printf(TEXT("Waypoints = %.2f x %.2f y %.2f z"), waypoint->GetActorLocation().X, waypoint->GetActorLocation().Y, waypoint->GetActorLocation().Z));
		}
		GEngine->AddOnScreenDebugMessage(4, 5.f, FColor::Yellow, FString::Printf(TEXT("Total waypoints %i"), i));
	}

	// set bools for movement checks
	bHasNotMovedYet = true;
	bCanMoveToWPOne = true;
	bCanMoveToWPTwo = true;
	bReturnedToStart = false;
		

	OurCurrentWaypoint = Waypoints[0];
	GetNextWaypoint(OurCurrentWaypoint);
}


void AStorytellerCrowAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// if Character X and/or Y values are "past" AI movement checks, try to move to next waypoint
	if (GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		FVector MyCharacterLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
		GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::Yellow, FString::Printf(TEXT("current actor location %.2f x %.2f y %.2f z"), MyCharacterLocation.X, MyCharacterLocation.Y, MyCharacterLocation.Z));
		if (bCanMoveToWPOne || bCanMoveToWPTwo) {

			if ((MyCharacterLocation.X - MoveAICheck1X) <= 0.f)
			{
				GetNextWaypoint(OurCurrentWaypoint);
				
			}
			// if Character X & Y values are "past" AI movement check for waypoint 2
			else if (((MyCharacterLocation.X - MoveAICheck2X) <= 0.f) && ((MyCharacterLocation.Y - MoveAICheck2Y) <= 0.f))
			{
				GetNextWaypoint(OurCurrentWaypoint);
				
			}
		}
		// FIXME:: will call immediately once both bools are set, need a sort of timer or some action to happen in between
		else if (!bReturnedToStart)
		{
			GetNextWaypoint(OurCurrentWaypoint);
			
		}
	}

}

// Get the next waypoint for AI movement if player moves to new location
// Uses OurCurrentWaypoint a protected global variable
// sets global bools to iterate array properly
ATargetPoint* AStorytellerCrowAIController::GetNextWaypoint(AActor* CurrentWaypoint)
{
	// index used to assure for loop does not go out of bounds
	uint8 index = 0;
	

	// loop over each waypoint
	for (auto waypoint : Waypoints)
	{
		// if waypoint is not nullptr or index is less than three
		if (waypoint && index <=2 && !bHasNotMovedYet)
		{
			// return index 1 waypoint if have not moved there and are not at that waypoint
			if ((waypoint != CurrentWaypoint) && (index == 1) && (bCanMoveToWPOne))
			{
				// set so cannot return to waypoint 1
				bCanMoveToWPOne = false;
				OurCurrentWaypoint = Waypoints[1];
				
				// set next waypoint [[index 1]]
				ReturnedTargetPoint = Cast<ATargetPoint>(Waypoints[index]);
				GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, FString::Printf(TEXT("Moving to waypoint 2")));
				break;

			}
			// return index 2 waypoint if have not moved there and are not at that waypoint 
			if ((waypoint != CurrentWaypoint) && (index == 2) && (bCanMoveToWPTwo))
			{
				// set so cannot return to waypoint 2
				bCanMoveToWPTwo = false;
				OurCurrentWaypoint = Waypoints[2];

				// set next waypoint [[index 2]]
				ReturnedTargetPoint = Cast<ATargetPoint>(Waypoints[index]);
				GEngine->AddOnScreenDebugMessage(11, 5.f, FColor::Red, FString::Printf(TEXT("Moving to waypoint 3")));
				break;
			}

			index++;
		} 
		else
		{
			// set returned to start as true so that we leave do while loop
			if (bHasNotMovedYet) 
			{
				bHasNotMovedYet = false;
			}
			else
			{
				bReturnedToStart = true;
			}

			OurCurrentWaypoint = Waypoints[0];

			// set first waypoint if no other waypoints exist of if crow hasn't moved yet
			ReturnedTargetPoint = Cast<ATargetPoint>(Waypoints[0]);
			GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, FString::Printf(TEXT("Moving to waypoint 1")));

			bReturnedToStart = true;
			OurCurrentWaypoint = Waypoints[3];

			// set first waypoint if no other waypoints exist
			ReturnedTargetPoint = Cast<ATargetPoint>(Waypoints[0]);
			break;

		}// end nested nullptr check if

	} // end for loop
	 
	// return next waypoint target
	return ReturnedTargetPoint;
	
}

// Move AI to next waypoint
void AStorytellerCrowAIController::GoToNextWaypoint(ATargetPoint* NextWaypoint)
{
	// move actor to next location
	MoveToActor(NextWaypoint);
}

