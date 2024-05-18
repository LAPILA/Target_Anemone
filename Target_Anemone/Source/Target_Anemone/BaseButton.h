// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "ButtonTarget.h"
#include "BaseButton.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TARGET_ANEMONE_API ABaseButton : public ATriggerBox
{
	GENERATED_BODY()

public:

protected:
	
private:

public:
	UPROPERTY(EditAnywhere)
	bool alive = false; //버튼 작동 여부

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target;
	//버튼과 상호작용하는 타켓 설정
	UFUNCTION(BlueprintCallable)
	void SetTarget(AButtonTarget* NewTarget);

	//버튼과 상호작용하는 타켓의 액션스타트
	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction();


	
};
