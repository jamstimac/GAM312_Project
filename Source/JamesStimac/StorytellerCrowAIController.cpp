// Fill out your copyright notice in the Description page of Project Settings.


#include "StorytellerCrowAIController.h"
#include "Kismet/GameplayStatics.h"

/* base FVectors for character location checks*/
// If player moves past x value of post move to waypoint 1
const float MoveAICheck1X = 1105.f;

// to move from waypoint 1 to 2 check if player has moved past these locations
const float MoveAICheck2X = -70.f;
const float MoveAICheck2Y = 1180.f;


void AStorytellerCrowAIController::BeginPlay()
{
	Super::BeginPlay();

	// if world != nullptr
	if (GetWorld())
	{
		// get all wayspoints
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	}

	// set bools for movement checks
	bCanMoveToWPOne = true;
	bCanMoveToWPTwo = true;
	bReturnedToStart = false;

	// set current waypoint to first and move there
	OurCurrentWaypoint = Waypoints[0];
	MoveToActor(Cast<ATargetPoint>(OurCurrentWaypoint));

}

void AStorytellerCrowAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// if Character X and/or Y values are "past" AI movement checks, try to move to next waypoint
	do
	{
		// get updated character world location
		FVector MyCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

		if ((MyCharacter.X - MoveAICheck1X) <= 0.f)
		{
			GoToNextWaypoint(GetNextWaypoint(OurCurrentWaypoint));
		}
		// if Character X & Y values are "past" AI movement check for waypoint 2
		else if (((MyCharacter.X - MoveAICheck2X) <= 0.f) && ((MyCharacter.Y - MoveAICheck2Y) <= 0.f))
		{
			GoToNextWaypoint(GetNextWaypoint(OurCurrentWaypoint));
		}
		
		// FIXME:: will call immediately once both bools are set, need a sort of timer or some action to happen in between
		if (!bCanMoveToWPOne && !bCanMoveToWPTwo)
		{
			GoToNextWaypoint(GetNextWaypoint(OurCurrentWaypoint));
		}
		
	} while ((bCanMoveToWPOne || bCanMoveToWPTwo) && !bReturnedToStart); 
	// until [we cannot move to a new waypoint and we are back at start] iterate do while loop
	
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
		if (waypoint || index <= 2)
		{
			// return index 1 waypoint if have not moved there and are not at that waypoint
			if ((waypoint != CurrentWaypoint) && (index == 1) && (bCanMoveToWPOne))
			{
				// set so cannot return to waypoint 1
				bCanMoveToWPOne = false;
				OurCurrentWaypoint = Waypoints[1];
				
				// set next waypoint [[index 1]]
				ReturnedTargetPoint = Cast<ATargetPoint>(Waypoints[index]);
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
				break;
			}

			index++;
		} 
		else
		{
			// set returned to start as true so that we leave do while loop
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

