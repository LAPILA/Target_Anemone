// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingTile.h"

// Sets default values
AMovingTile::AMovingTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMovingTile::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
	VectorSpeed = FVector(XSpeed, YSpeed, ZSpeed);
}

// Called every frame
void AMovingTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	AddActorLocalRotation(RotationVelocity * DeltaTime);

	if (PauseState) {
		Pausing += DeltaTime;
		if (Pausing > PauseTime) {
			PauseState = false;
			Pausing = 0;
		}
	}
	else{
		CurrentLocation = CurrentLocation + (VectorSpeed * DeltaTime);

		SetActorLocation(CurrentLocation);

		float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

		if (DistanceMoved > MovedDistance) {
			FVector MoveDirection = VectorSpeed.GetSafeNormal(); // 방향
			StartLocation = StartLocation + MoveDirection * MovedDistance;
			SetActorLocation(StartLocation);
			VectorSpeed = -VectorSpeed;
			PauseState = true;
		}
	}

}

