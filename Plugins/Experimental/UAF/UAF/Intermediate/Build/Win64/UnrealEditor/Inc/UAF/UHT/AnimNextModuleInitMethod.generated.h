// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/AnimNextModuleInitMethod.h"

#ifdef UAF_AnimNextModuleInitMethod_generated_h
#error "AnimNextModuleInitMethod.generated.h already included, missing '#pragma once' in AnimNextModuleInitMethod.h"
#endif
#define UAF_AnimNextModuleInitMethod_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Module_AnimNextModuleInitMethod_h

// ********** Begin Enum EAnimNextModuleInitMethod *************************************************
#define FOREACH_ENUM_EANIMNEXTMODULEINITMETHOD(op) \
	op(EAnimNextModuleInitMethod::None) \
	op(EAnimNextModuleInitMethod::InitializeAndPause) \
	op(EAnimNextModuleInitMethod::InitializeAndPauseInEditor) \
	op(EAnimNextModuleInitMethod::InitializeAndRun) 

enum class EAnimNextModuleInitMethod : uint8;
template<> struct TIsUEnumClass<EAnimNextModuleInitMethod> { enum { Value = true }; };
template<> UAF_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextModuleInitMethod>();
// ********** End Enum EAnimNextModuleInitMethod ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
