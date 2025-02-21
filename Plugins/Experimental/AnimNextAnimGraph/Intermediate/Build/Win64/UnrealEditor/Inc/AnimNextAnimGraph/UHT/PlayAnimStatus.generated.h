// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayAnim/PlayAnimStatus.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTANIMGRAPH_PlayAnimStatus_generated_h
#error "PlayAnimStatus.generated.h already included, missing '#pragma once' in PlayAnimStatus.h"
#endif
#define ANIMNEXTANIMGRAPH_PlayAnimStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Public_PlayAnim_PlayAnimStatus_h


#define FOREACH_ENUM_EANIMNEXTPLAYANIMSTATUS(op) \
	op(EAnimNextPlayAnimStatus::None) \
	op(EAnimNextPlayAnimStatus::Pending) \
	op(EAnimNextPlayAnimStatus::Playing) \
	op(EAnimNextPlayAnimStatus::Completed) \
	op(EAnimNextPlayAnimStatus::Expired) \
	op(EAnimNextPlayAnimStatus::Interrupted) \
	op(EAnimNextPlayAnimStatus::BlendingOut) 

enum class EAnimNextPlayAnimStatus : uint8;
template<> struct TIsUEnumClass<EAnimNextPlayAnimStatus> { enum { Value = true }; };
template<> ANIMNEXTANIMGRAPH_API UEnum* StaticEnum<EAnimNextPlayAnimStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
