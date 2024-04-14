// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#ifndef SEGMENTINFORMATION_H
#define SEGMENTINFORMATION_H

#include "Containers/Array.h"
#include "UObject/NameTypes.h"

namespace SegmentInformation
{
	const TArray<int32> parentIndex = { -1, 0, 1, 2, 3, 4, 5, 6, 5, 8, 9, 10, 5, 12, 13, 14, 1, 16, 17, 18, 1, 20, 21, 22, 0, 0, 0, 0,
															14, 28, 29, 30, 28, 32, 33, 34, 28, 36, 37, 38, 28, 40, 41, 42, 28, 44, 45, 46,		//left hand
															10, 48, 49, 50, 48, 52, 53, 54, 48, 56, 57, 58, 48, 60, 61, 62, 48, 64, 65, 66 };	//right hand

	const TArray<FName> SegmentBoneNames = {
											FName("Root"),
											FName("Pelvis"),
											FName("Spine_01"),
											FName("Spine_02"),
											FName("Spine_03"),
											FName("Spine_04"),
											FName("Neck_01"),
											FName("Head"),
											FName("Clavicle_r"),
											FName("Upperarm_r"),
											FName("Lowerarm_r"),
											FName("Hand_r"),
											FName("Clavicle_l"),
											FName("Upperarm_l"),
											FName("Lowerarm_l"),
											FName("Hand_l"),
											FName("Thigh_r"),
											FName("Calf_r"),
											FName("Foot_r"),
											FName("Ball_r"),
											FName("Thigh_l"),
											FName("Calf_l"),
											FName("Foot_l"),
											FName("Ball_l"),
											FName("Prop1"),
											FName("Prop2"),
											FName("Prop3"),
											FName("Prop4"),
											FName("LeftWrist"),
											FName("Thumb_01_l"),
											FName("Thumb_02_l"),
											FName("Thumb_03_l"),
											FName("Index_00_l"),
											FName("Index_01_l"),
											FName("Index_02_l"),
											FName("Index_03_l"),
											FName("Middle_00_l"),
											FName("Middle_01_l"),
											FName("Middle_02_l"),
											FName("Middle_03_l"),
											FName("Ring_00_l"),
											FName("Ring_01_l"),
											FName("Ring_02_l"),
											FName("Ring_03_l"),
											FName("Pinky_00_l"),
											FName("Pinky_01_l"),
											FName("Pinky_02_l"),
											FName("Pinky_03_l"),
											FName("RightWrist"),
											FName("Thumb_01_r"),
											FName("Thumb_02_r"),
											FName("Thumb_03_r"),
											FName("Index_00_r"),
											FName("Index_01_r"),
											FName("Index_02_r"),
											FName("Index_03_r"),
											FName("Middle_00_r"),
											FName("Middle_01_r"),
											FName("Middle_02_r"),
											FName("Middle_03_r"),
											FName("Ring_00_r"),
											FName("Ring_01_r"),
											FName("Ring_02_r"),
											FName("Ring_03_r"),
											FName("Pinky_00_r"),
											FName("Pinky_01_r"),
											FName("Pinky_02_r"),
											FName("Pinky_03_r"),


	};
};

#endif
