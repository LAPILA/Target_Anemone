// Fill out your copyright notice in the Description page of Project Settings.


#include "MultyBaseButton.h"

void AMultyBaseButton::MultySetTarget(AButtonTarget* NewTarget1, AButtonTarget* NewTarget2, AButtonTarget* NewTarget3,
	AButtonTarget* NewTarget4, AButtonTarget* NewTarget5, AButtonTarget* NewTarget6,
	AButtonTarget* NewTarget7, AButtonTarget* NewTarget8, AButtonTarget* NewTarget9, AButtonTarget* NewTarget10)
{
	Target1 = NewTarget1;
	Target2 = NewTarget2;
	Target3 = NewTarget3;
	Target4 = NewTarget4;
	Target5 = NewTarget5;
	Target6 = NewTarget6;
	Target7 = NewTarget7;
	Target8 = NewTarget8;
	Target9 = NewTarget9;
	Target10 = NewTarget10;
}

AButtonTarget* AMultyBaseButton::StartTargetAction1() {
	if (Target1 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target1->TargetAction();

	return Target1;
}

AButtonTarget* AMultyBaseButton::StartTargetAction2() {
	if (Target2 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target2->TargetAction();

	return Target2;
}

AButtonTarget* AMultyBaseButton::StartTargetAction3() {
	if (Target3 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target3->TargetAction();

	return Target3;
}

AButtonTarget* AMultyBaseButton::StartTargetAction4() {
	if (Target4 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target4->TargetAction();

	return Target4;
}

AButtonTarget* AMultyBaseButton::StartTargetAction5() {
	if (Target5 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target5->TargetAction();

	return Target5;
}

AButtonTarget* AMultyBaseButton::StartTargetAction6() {
	if (Target6 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target6->TargetAction();

	return Target6;
}

AButtonTarget* AMultyBaseButton::StartTargetAction7() {
	if (Target7 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target7->TargetAction();

	return Target7;
}

AButtonTarget* AMultyBaseButton::StartTargetAction8() {
	if (Target8 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target8->TargetAction();

	return Target8;
}

AButtonTarget* AMultyBaseButton::StartTargetAction9() {
	if (Target9 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target9->TargetAction();

	return Target9;
}

AButtonTarget* AMultyBaseButton::StartTargetAction10() {
	if (Target10 == nullptr)
	{
		return nullptr;
		UE_LOG(LogTemp, Display, TEXT("타켓 미지정"))
	}
	Target10->TargetAction();

	return Target10;
}

