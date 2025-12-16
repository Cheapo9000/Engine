// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACLImpl.h"

#ifdef ACLPLUGIN_ACLImpl_generated_h
#error "ACLImpl.generated.h already included, missing '#pragma once' in ACLImpl.h"
#endif
#define ACLPLUGIN_ACLImpl_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h

// ********** Begin Enum ACLRotationFormat *********************************************************
#define FOREACH_ENUM_ACLROTATIONFORMAT(op) \
	op(ACLRF_Quat_128) \
	op(ACLRF_QuatDropW_96) \
	op(ACLRF_QuatDropW_Variable) 

enum ACLRotationFormat : int;
template<> ACLPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ACLRotationFormat>();
// ********** End Enum ACLRotationFormat ***********************************************************

// ********** Begin Enum ACLVectorFormat ***********************************************************
#define FOREACH_ENUM_ACLVECTORFORMAT(op) \
	op(ACLVF_Vector3_96) \
	op(ACLVF_Vector3_Variable) 

enum ACLVectorFormat : int;
template<> ACLPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ACLVectorFormat>();
// ********** End Enum ACLVectorFormat *************************************************************

// ********** Begin Enum ACLCompressionLevel *******************************************************
#define FOREACH_ENUM_ACLCOMPRESSIONLEVEL(op) \
	op(ACLCL_Lowest) \
	op(ACLCL_Low) \
	op(ACLCL_Medium) \
	op(ACLCL_High) \
	op(ACLCL_Highest) \
	op(ACLCL_Automatic) 

enum ACLCompressionLevel : int;
template<> ACLPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ACLCompressionLevel>();
// ********** End Enum ACLCompressionLevel *********************************************************

// ********** Begin Enum ACLPhantomTrackMode *******************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ACLPHANTOMTRACKMODE(op) \
	op(ACLPhantomTrackMode::Ignore) \
	op(ACLPhantomTrackMode::Strip) \
	op(ACLPhantomTrackMode::Warn) 

enum class ACLPhantomTrackMode : uint8;
template<> struct TIsUEnumClass<ACLPhantomTrackMode> { enum { Value = true }; };
template<> ACLPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ACLPhantomTrackMode>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum ACLPhantomTrackMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
