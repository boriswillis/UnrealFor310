// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Input/Reply.h"
#include "Types/SlateEnums.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SEditableTextBox;

class SHandEngineLiveLink_LLSourceFactory : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FOnOkClicked, FIPv4Endpoint);

	SLATE_BEGIN_ARGS(SHandEngineLiveLink_LLSourceFactory) {}
	SLATE_EVENT(FOnOkClicked, OnOkClicked)
		SLATE_END_ARGS()

		void Construct(const FArguments& Args);

private:

	void OnEndpointAddressChanged(const FText& NewValue, ETextCommit::Type);
	void OnEndpointPortChanged(const FText& NewValue, ETextCommit::Type);

	FReply OnOkClicked();

	TWeakPtr<SEditableTextBox> EditabledText_Address;
	TWeakPtr<SEditableTextBox> EditabledText_Port;
	FOnOkClicked OkClicked;
	
};