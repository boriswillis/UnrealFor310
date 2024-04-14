// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
#include "HandEngineLiveLink_LLSourceFactory.h"
#include "HandEngineLiveLink_LLSource.h"
#include "SHandEngineLiveLink_LLSourceFactory.h"

#define LOCTEXT_NAMESPACE "JSONLiveLinkSourceFactory"

FText UHandEngineLiveLink_LLSourceFactory::GetSourceDisplayName() const
{
	//Returns a localized string for the source name
	return LOCTEXT("SourceDisplayName", "HandEngine");
}

FText UHandEngineLiveLink_LLSourceFactory::GetSourceTooltip() const
{
	// Returns a localized string for the source UI tooltip
	return LOCTEXT("SourceTooltip", "Creates a connection to a Hand Engine");
}

TSharedPtr<SWidget> UHandEngineLiveLink_LLSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	return SNew(SHandEngineLiveLink_LLSourceFactory)
		.OnOkClicked(SHandEngineLiveLink_LLSourceFactory::FOnOkClicked::CreateUObject(this, &UHandEngineLiveLink_LLSourceFactory::OnOkClicked, InOnLiveLinkSourceCreated));
}

TSharedPtr<ILiveLinkSource> UHandEngineLiveLink_LLSourceFactory::CreateSource(const FString& InConnectionString) const
{
	FIPv4Endpoint DeviceEndPoint;
	if (!FIPv4Endpoint::Parse(InConnectionString, DeviceEndPoint))
	{
		return TSharedPtr<ILiveLinkSource>();
	}

	return MakeShared<FHandEngineLiveLink_LLSource>(DeviceEndPoint);
}

void UHandEngineLiveLink_LLSourceFactory::OnOkClicked(FIPv4Endpoint InEndpoint, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	InOnLiveLinkSourceCreated.ExecuteIfBound(MakeShared<FHandEngineLiveLink_LLSource>(InEndpoint), InEndpoint.ToString());
}

#undef LOCTEXT_NAMESPACE