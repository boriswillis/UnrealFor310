// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Roles/LiveLinkAnimationBlueprintStructs.h"
#include "getSliders.generated.h"

/**
 * 
 */

USTRUCT(BluePrintType)
struct Fsliders
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float ThumbBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float ThumbBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float ThumbSplay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float IndexBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float IndexBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float MiddleBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float MiddleBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float RingBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float RingBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float PinkyBend1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float PinkyBend2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Hand Sliders")
	float GlobalSplay;

	
};



UCLASS()
class UgetSliders : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "getSliders", Keywords = "getSliders get Sliders HandEngine Hand Engine"), Category = HandEngine)
		static void getSliders(const FSubjectFrameHandle DataResult, Fsliders& sliders);




	

};
