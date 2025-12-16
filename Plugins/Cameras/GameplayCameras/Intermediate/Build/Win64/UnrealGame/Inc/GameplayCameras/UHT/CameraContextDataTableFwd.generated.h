// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraContextDataTableFwd.h"

#ifdef GAMEPLAYCAMERAS_CameraContextDataTableFwd_generated_h
#error "CameraContextDataTableFwd.generated.h already included, missing '#pragma once' in CameraContextDataTableFwd.h"
#endif
#define GAMEPLAYCAMERAS_CameraContextDataTableFwd_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraContextDataID **********************************************
struct Z_Construct_UScriptStruct_FCameraContextDataID_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableFwd_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraContextDataID_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraContextDataID;
// ********** End ScriptStruct FCameraContextDataID ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableFwd_h

// ********** Begin Enum ECameraContextDataType ****************************************************
#define FOREACH_ENUM_ECAMERACONTEXTDATATYPE(op) \
	op(ECameraContextDataType::Name) \
	op(ECameraContextDataType::String) \
	op(ECameraContextDataType::Enum) \
	op(ECameraContextDataType::Struct) \
	op(ECameraContextDataType::Object) \
	op(ECameraContextDataType::Class) \
	op(ECameraContextDataType::Count) 

enum class ECameraContextDataType;
template<> struct TIsUEnumClass<ECameraContextDataType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraContextDataType>();
// ********** End Enum ECameraContextDataType ******************************************************

// ********** Begin Enum ECameraContextDataContainerType *******************************************
#define FOREACH_ENUM_ECAMERACONTEXTDATACONTAINERTYPE(op) \
	op(ECameraContextDataContainerType::None) \
	op(ECameraContextDataContainerType::Array) 

enum class ECameraContextDataContainerType;
template<> struct TIsUEnumClass<ECameraContextDataContainerType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraContextDataContainerType>();
// ********** End Enum ECameraContextDataContainerType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
