// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonTarget.h"

// Sets default values
AButtonTarget::AButtonTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AButtonTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AButtonTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AButtonTarget::TargetAction()
{
	


	return true;
}

void AButtonTarget::SetTarget(AButtonTarget* SecondNewTarget)
{
	SecondTarget = SecondNewTarget;
}

AButtonTarget* AButtonTarget::StartTargetAction()
{
	if (SecondTarget == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	SecondTarget->TargetAction();

	return SecondTarget;
}
