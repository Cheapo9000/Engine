// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelStreamingPersistenceSettings.h"

#ifdef LEVELSTREAMINGPERSISTENCE_LevelStreamingPersistenceSettings_generated_h
#error "LevelStreamingPersistenceSettings.generated.h already included, missing '#pragma once' in LevelStreamingPersistenceSettings.h"
#endif
#define LEVELSTREAMINGPERSISTENCE_LevelStreamingPersistenceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelStreamingPersistentProperty *********************************
struct Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics;
#define FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLevelStreamingPersistentProperty;
// ********** End ScriptStruct FLevelStreamingPersistentProperty ***********************************

// ********** Begin Class ULevelStreamingPersistenceSettings ***************************************
struct Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics;
LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistenceSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingPersistenceSettings(); \
	friend struct ::Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSTREAMINGPERSISTENCE_API UClass* ::Z_Construct_UClass_ULevelStreamingPersistenceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreamingPersistenceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelStreamingPersistence"), Z_Construct_UClass_ULevelStreamingPersistenceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreamingPersistenceSettings)


#define FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingPersistenceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreamingPersistenceSettings(ULevelStreamingPersistenceSettings&&) = delete; \
	ULevelStreamingPersistenceSettings(const ULevelStreamingPersistenceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingPersistenceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingPersistenceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingPersistenceSettings) \
	NO_API virtual ~ULevelStreamingPersistenceSettings();


#define FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreamingPersistenceSettings;

// ********** End Class ULevelStreamingPersistenceSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
