// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ILiveLinkSource.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HandEngineLiveLinkBPLibrary.generated.h"


UCLASS()
class UHandEngineLiveLinkBPLibrary : public UBlueprintFunctionLibrary
{

		GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "HandEngine LiveLink")
	static void CreateHandEngineLiveLinkSource(FLiveLinkSourceHandle& handle);

};
