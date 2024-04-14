// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HandEngine_SDK_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UHandEngine_SDK_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HandEngine")
		int32 PerformerID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_ThumbBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_ThumbBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_ThumbSplay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_IndexBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_IndexBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_MiddleBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_MiddleBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_RingBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_RingBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_PinkyBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_PinkyBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Left Hand Sliders")
		float L_GlobalSplay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_ThumbBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_ThumbBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_ThumbSplay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_IndexBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_IndexBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_MiddleBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_MiddleBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_RingBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_RingBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_PinkyBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_PinkyBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Right Hand Sliders")
		float R_GlobalSplay;
	
};
