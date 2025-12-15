// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSettings.h"

#ifdef DATAFLOWCORE_DataflowSettings_generated_h
#error "DataflowSettings.generated.h already included, missing '#pragma once' in DataflowSettings.h"
#endif
#define DATAFLOWCORE_DataflowSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNodeColors *******************************************************
struct Z_Construct_UScriptStruct_FNodeColors_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodeColors_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct();


struct FNodeColors;
// ********** End ScriptStruct FNodeColors *********************************************************

// ********** Begin ScriptStruct FPinSettings ******************************************************
struct Z_Construct_UScriptStruct_FPinSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPinSettings_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct();


struct FPinSettings;
// ********** End ScriptStruct FPinSettings ********************************************************

// ********** Begin ScriptStruct FTransformLevelColors *********************************************
struct Z_Construct_UScriptStruct_FTransformLevelColors_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformLevelColors_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct();


struct FTransformLevelColors;
// ********** End ScriptStruct FTransformLevelColors ***********************************************

// ********** Begin Class UDataflowSettings ********************************************************
struct Z_Construct_UClass_UDataflowSettings_Statics;
DATAFLOWCORE_API UClass* Z_Construct_UClass_UDataflowSettings_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowSettings(); \
	friend struct ::Z_Construct_UClass_UDataflowSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWCORE_API UClass* ::Z_Construct_UClass_UDataflowSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowCore"), Z_Construct_UClass_UDataflowSettings_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWCORE_API UDataflowSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWCORE_API, UDataflowSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSettings(UDataflowSettings&&) = delete; \
	UDataflowSettings(const UDataflowSettings&) = delete; \
	DATAFLOWCORE_API virtual ~UDataflowSettings();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_49_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_52_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSettings;

// ********** End Class UDataflowSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
