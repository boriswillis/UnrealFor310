// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#pragma once
#include "HandEngineMappingEnum.generated.h"

UENUM(BlueprintType)
enum class EHandEngineMapping : uint8 {
	Root = 0		UMETA(DisplayName = "root"),
	Pelvis			UMETA(DisplayName = "pelvis"),
	Spine_01		UMETA(DisplayName = "spine_01"),
	Spine_02		UMETA(DisplayName = "spine_02"),
	Spine_03		UMETA(DisplayName = "spine_03"),
	Spine_04		UMETA(DisplayName = "spine_04"),
	Neck_01			UMETA(DisplayName = "neck_01"),
	Head			UMETA(DisplayName = "head"),
	Clavicle_r		UMETA(DisplayName = "clavicle_r"),
	Upperarm_r		UMETA(DisplayName = "upperarm_r"),
	Lowerarm_r		UMETA(DisplayName = "lowerarm_r"),
	Hand_r			UMETA(DisplayName = "hand_r"),
	Clavicle_l		UMETA(DisplayName = "clavicle_l"),
	Upperarm_l		UMETA(DisplayName = "upperarm_l"),
	Lowerarm_l		UMETA(DisplayName = "lowerarm_l"),
	Hand_l			UMETA(DisplayName = "hand_l"),
	Thigh_r		    UMETA(DisplayName = "thigh_r"),
	Calf_r			UMETA(DisplayName = "calf_r"),
	Foot_r			UMETA(DisplayName = "foot_r"),
	Ball_r			UMETA(DisplayName = "ball_r"),
	Thigh_l		    UMETA(DisplayName = "thigh_l"),
	Calf_l		    UMETA(DisplayName = "calf_l"),
	Foot_l			UMETA(DisplayName = "foot_l"),
	Ball_l			UMETA(DisplayName = "ball_l"),
	Prop1			UMETA(DisplayName = "Prop1"),
	Prop2			UMETA(DisplayName = "Prop2"),
	Prop3			UMETA(DisplayName = "Prop3"),
	Prop4			UMETA(DisplayName = "Prop4"),
	LeftWrist		UMETA(DisplayName = "LeftWrist"),
	Thumb_01_l		UMETA(DisplayName = "thumb_01_l"),
	Thumb_02_l		UMETA(DisplayName = "thumb_02_l"),
	Thumb_03_l		UMETA(DisplayName = "thumb_03_l"),
	Index_00_l		UMETA(DisplayName = "index_00_l"),
	Index_01_l		UMETA(DisplayName = "index_01_l"),
	Index_02_l		UMETA(DisplayName = "index_02_l"),
	Index_03_l		UMETA(DisplayName = "index_03_l"),
	Middle_00_l		UMETA(DisplayName = "middle_00_l"),
	Middle_01_l		UMETA(DisplayName = "middle_01_l"),
	Middle_02_l		UMETA(DisplayName = "middle_02_l"),
	Middle_03_l		UMETA(DisplayName = "middle_03_l"),
	Ring_00_l	    UMETA(DisplayName = "ring_00_l"),
	Ring_01_l		UMETA(DisplayName = "ring_01_l"),
	Ring_02_l		UMETA(DisplayName = "ring_02_l"),
	Ring_03_l		UMETA(DisplayName = "ring_03_l"),
	Pinky_00_l   	UMETA(DisplayName = "pinky_00_l"),
	Pinky_01_l		UMETA(DisplayName = "pinky_01_l"),
	Pinky_02_l	    UMETA(DisplayName = "pinky_02_l"),
	Pinky_03_l		UMETA(DisplayName = "pinky_03_l"),
	RightWrist		UMETA(DisplayName = "RightWrist"),
	Thumb_01_r		UMETA(DisplayName = "thumb_01_r"),
	Thumb_02_r		UMETA(DisplayName = "thumb_02_r"),
	Thumb_03_r		UMETA(DisplayName = "thumb_03_r"),
	Index_00_r		UMETA(DisplayName = "index_00_r"),
	Index_01_r		UMETA(DisplayName = "index_01_r"),
	Index_02_r		UMETA(DisplayName = "index_02_r"),
	Index_03_r		UMETA(DisplayName = "index_03_r"),
	Middle_00_r		UMETA(DisplayName = "middle_00_r"),
	Middle_01_r		UMETA(DisplayName = "middle_01_r"),
	Middle_02_r		UMETA(DisplayName = "middle_02_r"),
	Middle_03_r		UMETA(DisplayName = "middle_03_r"),
	Ring_00_r	    UMETA(DisplayName = "ring_00_r"),
	Ring_01_r		UMETA(DisplayName = "ring_01_r"),
	Ring_02_r		UMETA(DisplayName = "ring_02_r"),
	Ring_03_r		UMETA(DisplayName = "ring_03_r"),
	Pinky_00_r   	UMETA(DisplayName = "pinky_00_r"),
	Pinky_01_r		UMETA(DisplayName = "pinky_01_r"),
	Pinky_02_r	    UMETA(DisplayName = "pinky_02_r"),
	Pinky_03_r		UMETA(DisplayName = "pinky_03_r"),

	Count


						
						 

						




};



UENUM()
enum class EHandEngineRetargetNamingConvention : uint8 {
	// Default bone map used in Unreal engine and Metahuman
	Default = 0		UMETA( DisplayName = "Unreal/Metahuman" ),
	// Use custom Blueprint callback to compute bone names
	Custom   		UMETA( DisplayName = "Custom" ),
	// Use Maya bone name convention
	Maya			UMETA( DisplayName = "Maya" ),
	// Use HandEngine bone name convention
	XSens			UMETA( DisplayName = "Xsens" ),
	// Manually set bone naming map in "Remapping Assets: table
	Manual			UMETA( DisplayName = "Manual" )
};