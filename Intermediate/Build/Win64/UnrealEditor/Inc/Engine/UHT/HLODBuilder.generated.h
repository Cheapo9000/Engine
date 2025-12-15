// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODBuilder.h"

#ifdef ENGINE_HLODBuilder_generated_h
#error "HLODBuilder.generated.h already included, missing '#pragma once' in HLODBuilder.h"
#endif
#define ENGINE_HLODBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHLODBuilderSettings *****************************************************
struct Z_Construct_UClass_UHLODBuilderSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUHLODBuilderSettings(); \
	friend struct ::Z_Construct_UClass_UHLODBuilderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHLODBuilderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODBuilderSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHLODBuilderSettings_NoRegister) \
	DECLARE_SERIALIZER(UHLODBuilderSettings)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODBuilderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODBuilderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODBuilderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODBuilderSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODBuilderSettings(UHLODBuilderSettings&&) = delete; \
	UHLODBuilderSettings(const UHLODBuilderSettings&) = delete; \
	ENGINE_API virtual ~UHLODBuilderSettings();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODBuilderSettings;

// ********** End Class UHLODBuilderSettings *******************************************************

// ********** Begin ScriptStruct FHLODBuildInputReferencedAssets ***********************************
struct Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHLODBuildInputReferencedAssets;
// ********** End ScriptStruct FHLODBuildInputReferencedAssets *************************************

// ********** Begin ScriptStruct FHLODBuildInputStats **********************************************
struct Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHLODBuildInputStats;
// ********** End ScriptStruct FHLODBuildInputStats ************************************************

// ********** Begin Class UHLODBuilder *************************************************************
struct Z_Construct_UClass_UHLODBuilder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUHLODBuilder(); \
	friend struct ::Z_Construct_UClass_UHLODBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHLODBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHLODBuilder_NoRegister) \
	DECLARE_SERIALIZER(UHLODBuilder) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODBuilder(UHLODBuilder&&) = delete; \
	UHLODBuilder(const UHLODBuilder&) = delete; \
	ENGINE_API virtual ~UHLODBuilder();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_110_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_113_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODBuilder;

// ********** End Class UHLODBuilder ***************************************************************

// ********** Begin Class UNullHLODBuilder *********************************************************
struct Z_Construct_UClass_UNullHLODBuilder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNullHLODBuilder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_217_INCLASS \
private: \
	static void StaticRegisterNativesUNullHLODBuilder(); \
	friend struct ::Z_Construct_UClass_UNullHLODBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNullHLODBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UNullHLODBuilder, UHLODBuilder, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNullHLODBuilder_NoRegister) \
	DECLARE_SERIALIZER(UNullHLODBuilder)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_217_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNullHLODBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullHLODBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNullHLODBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullHLODBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNullHLODBuilder(UNullHLODBuilder&&) = delete; \
	UNullHLODBuilder(const UNullHLODBuilder&) = delete; \
	ENGINE_API virtual ~UNullHLODBuilder();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_214_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_217_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNullHLODBuilder;

// ********** End Class UNullHLODBuilder ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
