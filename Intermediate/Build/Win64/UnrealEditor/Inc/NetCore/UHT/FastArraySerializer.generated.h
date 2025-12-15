// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Serialization/FastArraySerializer.h"

#ifdef NETCORE_FastArraySerializer_generated_h
#error "FastArraySerializer.generated.h already included, missing '#pragma once' in FastArraySerializer.h"
#endif
#define NETCORE_FastArraySerializer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFastArraySerializerItem ******************************************
struct Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics;
#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_300_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics; \
	NETCORE_API static class UScriptStruct* StaticStruct();


struct FFastArraySerializerItem;
// ********** End ScriptStruct FFastArraySerializerItem ********************************************

// ********** Begin ScriptStruct FFastArraySerializer **********************************************
struct Z_Construct_UScriptStruct_FFastArraySerializer_Statics;
#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_410_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFastArraySerializer_Statics; \
	NETCORE_API static class UScriptStruct* StaticStruct();


struct FFastArraySerializer;
// ********** End ScriptStruct FFastArraySerializer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h

// ********** Begin Enum EFastArraySerializerDeltaFlags ********************************************
#define FOREACH_ENUM_EFASTARRAYSERIALIZERDELTAFLAGS(op) \
	op(EFastArraySerializerDeltaFlags::None) \
	op(EFastArraySerializerDeltaFlags::HasBeenSerialized) \
	op(EFastArraySerializerDeltaFlags::HasDeltaBeenRequested) \
	op(EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization) 

enum class EFastArraySerializerDeltaFlags : uint8;
template<> struct TIsUEnumClass<EFastArraySerializerDeltaFlags> { enum { Value = true }; };
template<> NETCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFastArraySerializerDeltaFlags>();
// ********** End Enum EFastArraySerializerDeltaFlags **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
