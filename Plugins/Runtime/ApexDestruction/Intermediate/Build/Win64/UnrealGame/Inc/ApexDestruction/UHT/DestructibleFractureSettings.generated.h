// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleFractureSettings.h"

#ifdef APEXDESTRUCTION_DestructibleFractureSettings_generated_h
#error "DestructibleFractureSettings.generated.h already included, missing '#pragma once' in DestructibleFractureSettings.h"
#endif
#define APEXDESTRUCTION_DestructibleFractureSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFractureMaterial *************************************************
struct Z_Construct_UScriptStruct_FFractureMaterial_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFractureMaterial_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FFractureMaterial;
// ********** End ScriptStruct FFractureMaterial ***************************************************

// ********** Begin ScriptStruct FDestructibleChunkParameters **************************************
struct Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleChunkParameters;
// ********** End ScriptStruct FDestructibleChunkParameters ****************************************

// ********** Begin Class UDestructibleFractureSettings ********************************************
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleFractureSettings, APEXDESTRUCTION_API)


struct Z_Construct_UClass_UDestructibleFractureSettings_Statics;
APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleFractureSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleFractureSettings(); \
	friend struct ::Z_Construct_UClass_UDestructibleFractureSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APEXDESTRUCTION_API UClass* ::Z_Construct_UClass_UDestructibleFractureSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDestructibleFractureSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ApexDestruction"), Z_Construct_UClass_UDestructibleFractureSettings_NoRegister) \
	DECLARE_SERIALIZER(UDestructibleFractureSettings) \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTION_API UDestructibleFractureSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleFractureSettings) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleFractureSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDestructibleFractureSettings(UDestructibleFractureSettings&&) = delete; \
	UDestructibleFractureSettings(const UDestructibleFractureSettings&) = delete;


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_132_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDestructibleFractureSettings;

// ********** End Class UDestructibleFractureSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
