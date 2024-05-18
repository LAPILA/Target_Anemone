// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseButton.h"

void ABaseButton::SetTarget(AButtonTarget* NewTarget)
{
	Target = NewTarget;
}

AButtonTarget* ABaseButton::StartTargetAction()
{
	if (Target == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target->TargetAction();

	return Target;
}