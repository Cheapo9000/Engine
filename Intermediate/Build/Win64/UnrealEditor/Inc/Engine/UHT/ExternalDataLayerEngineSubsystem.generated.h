// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerEngineSubsystem.h"

#ifdef ENGINE_ExternalDataLayerEngineSubsystem_generated_h
#error "ExternalDataLayerEngineSubsystem.generated.h already included, missing '#pragma once' in ExternalDataLayerEngineSubsystem.h"
#endif
#define ENGINE_ExternalDataLayerEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalDataLayerEngineSubsystem ****************************************
struct Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalDataLayerEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalDataLayerEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UExternalDataLayerEngineSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExternalDataLayerEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalDataLayerEngineSubsystem(UExternalDataLayerEngineSubsystem&&) = delete; \
	UExternalDataLayerEngineSubsystem(const UExternalDataLayerEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExternalDataLayerEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExternalDataLayerEngineSubsystem) \
	ENGINE_API virtual ~UExternalDataLayerEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalDataLayerEngineSubsystem;

// ********** End Class UExternalDataLayerEngineSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
