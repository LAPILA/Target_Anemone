// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingTile.generated.h"

UCLASS()
class TARGET_ANEMONE_API AMovingTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector VectorSpeed = FVector(1, 0, 0);
	
	UPROPERTY(EditAnywhere)
	float XSpeed;

	UPROPERTY(EditAnywhere)
	float YSpeed;

	UPROPERTY(EditAnywhere)
	float ZSpeed;

	FVector StartLocation;

	UPROPERTY(EditAnywhere)
	float MovedDistance = -1;

	bool PauseState = false;

	UPROPERTY(EditAnywhere)
	float PauseTime;

	float Pausing = 0;

	UPROPERTY(EditAnywhere)
	FRotator RotationVelocity;
};
