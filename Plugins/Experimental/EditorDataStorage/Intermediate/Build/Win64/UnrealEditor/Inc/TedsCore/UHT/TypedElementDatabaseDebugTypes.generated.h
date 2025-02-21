// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/TypedElementDatabaseDebugTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSCORE_TypedElementDatabaseDebugTypes_generated_h
#error "TypedElementDatabaseDebugTypes.generated.h already included, missing '#pragma once' in TypedElementDatabaseDebugTypes.h"
#endif
#define TEDSCORE_TypedElementDatabaseDebugTypes_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Debug_TypedElementDatabaseDebugTypes_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTestDynamicColumn_Statics; \
	TEDSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


template<> TEDSCORE_API UScriptStruct* StaticStruct<struct FTestDynamicColumn>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Debug_TypedElementDatabaseDebugTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTestDynamicTag_Statics; \
	TEDSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


template<> TEDSCORE_API UScriptStruct* StaticStruct<struct FTestDynamicTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Debug_TypedElementDatabaseDebugTypes_h


#define FOREACH_ENUM_ETEDSDEBUGENUM(op) \
	op(ETedsDebugEnum::Red) \
	op(ETedsDebugEnum::Blue) \
	op(ETedsDebugEnum::Green) \
	op(ETedsDebugEnum::Yellow) \
	op(ETedsDebugEnum::Black) \
	op(ETedsDebugEnum::Pink) \
	op(ETedsDebugEnum::Orange) \
	op(ETedsDebugEnum::Purple) 

enum class ETedsDebugEnum : int8;
template<> struct TIsUEnumClass<ETedsDebugEnum> { enum { Value = true }; };
template<> TEDSCORE_API UEnum* StaticEnum<ETedsDebugEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
