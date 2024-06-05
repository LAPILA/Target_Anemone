// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ButtonTarget.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TARGET_ANEMONE_API AButtonTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AButtonTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	AButtonTarget* SecondTarget;

	UFUNCTION(BlueprintCallable)
	bool TargetAction();

	UFUNCTION(BlueprintCallable)
	void SetTarget(AButtonTarget* SecondNewTarget);

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction();

};
