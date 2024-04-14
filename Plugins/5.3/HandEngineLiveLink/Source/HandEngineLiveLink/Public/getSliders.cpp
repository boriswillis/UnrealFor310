// Fill out your copyright notice in the Description page of Project Settings.


#include "getSliders.h"


void UgetSliders::getSliders(FSubjectFrameHandle DataResult, Fsliders& sliders)
{
    FSubjectMetadata Metadata;

    DataResult.GetSubjectMetadata(Metadata);
    TMap<FName,FString> metadata = Metadata.StringMetadata;

	
	

	sliders.ThumbBend1 = FCString::Atof(*metadata["thumb Bend1"]);
	sliders.ThumbBend2 = FCString::Atof(*metadata["thumb Bend2"]);
	sliders.ThumbSplay = FCString::Atof(*metadata["thumb splay"]);

	sliders.IndexBend1 = FCString::Atof(*metadata["index Bend1"]);
	sliders.IndexBend2 = FCString::Atof(*metadata["index Bend2"]);

	sliders.MiddleBend1 = FCString::Atof(*metadata["middle Bend1"]);
	sliders.MiddleBend2 = FCString::Atof(*metadata["middle Bend2"]);

	sliders.RingBend1 = FCString::Atof(*metadata["ring Bend1"]);
	sliders.RingBend2 = FCString::Atof(*metadata["ring Bend2"]);

	sliders.PinkyBend1 = FCString::Atof(*metadata["pinky Bend1"]);
	sliders.PinkyBend2 = FCString::Atof(*metadata["pinky Bend2"]);

	sliders.GlobalSplay = FCString::Atof(*metadata["global splay"]);


    

}