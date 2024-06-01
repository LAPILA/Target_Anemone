// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "ButtonTarget.h"
#include "MultyBaseButton.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TARGET_ANEMONE_API AMultyBaseButton : public ATriggerBox
{
	GENERATED_BODY()

public:

protected:

private:

public:
	UPROPERTY(EditAnywhere)
	bool alive = false; //버튼 작동 여부

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target1;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target2;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target3;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target4;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target5;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target6;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target7;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target8;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target9;

	UPROPERTY(EditAnywhere)
	AButtonTarget* Target10;

	//버튼과 상호작용하는 타켓 설정
	UFUNCTION(BlueprintCallable)
	void MultySetTarget(AButtonTarget* NewTarget1, AButtonTarget* NewTarget2, AButtonTarget* NewTarget3, AButtonTarget* NewTarget4, AButtonTarget* NewTarget5, AButtonTarget* NewTarget6, AButtonTarget* NewTarget7, AButtonTarget* NewTarget8, AButtonTarget* NewTarget9, AButtonTarget* NewTarget10);

	//버튼과 상호작용하는 타켓의 액션스타트
	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction1();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction2();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction3();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction4();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction5();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction6();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction7();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction8();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction9();

	UFUNCTION(BlueprintCallable)
	AButtonTarget* StartTargetAction10();
	
};
