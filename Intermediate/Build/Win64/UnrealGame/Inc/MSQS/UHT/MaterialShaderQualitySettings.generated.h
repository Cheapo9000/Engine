// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialShaderQualitySettings.h"

#ifdef MATERIALSHADERQUALITYSETTINGS_MaterialShaderQualitySettings_generated_h
#error "MaterialShaderQualitySettings.generated.h already included, missing '#pragma once' in MaterialShaderQualitySettings.h"
#endif
#define MATERIALSHADERQUALITYSETTINGS_MaterialShaderQualitySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialShaderQualitySettings *******************************************
struct Z_Construct_UClass_UMaterialShaderQualitySettings_Statics;
MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();

#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialShaderQualitySettings(); \
	friend struct ::Z_Construct_UClass_UMaterialShaderQualitySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MATERIALSHADERQUALITYSETTINGS_API UClass* ::Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialShaderQualitySettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialShaderQualitySettings"), Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister) \
	DECLARE_SERIALIZER(UMaterialShaderQualitySettings)


#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MATERIALSHADERQUALITYSETTINGS_API UMaterialShaderQualitySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialShaderQualitySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MATERIALSHADERQUALITYSETTINGS_API, UMaterialShaderQualitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialShaderQualitySettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialShaderQualitySettings(UMaterialShaderQualitySettings&&) = delete; \
	UMaterialShaderQualitySettings(const UMaterialShaderQualitySettings&) = delete; \
	MATERIALSHADERQUALITYSETTINGS_API virtual ~UMaterialShaderQualitySettings();


#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_15_PROLOG
#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_19_INCLASS \
	FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialShaderQualitySettings;

// ********** End Class UMaterialShaderQualitySettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
