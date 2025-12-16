// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposureConfigSettings.h"

#ifdef COMPOSURE_ComposureConfigSettings_generated_h
#error "ComposureConfigSettings.generated.h already included, missing '#pragma once' in ComposureConfigSettings.h"
#endif
#define COMPOSURE_ComposureConfigSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComposureGameSettings ***************************************************
struct Z_Construct_UClass_UComposureGameSettings_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposureGameSettings_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUComposureGameSettings(); \
	friend struct ::Z_Construct_UClass_UComposureGameSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposureGameSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposureGameSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposureGameSettings_NoRegister) \
	DECLARE_SERIALIZER(UComposureGameSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureGameSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureGameSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureGameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureGameSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposureGameSettings(UComposureGameSettings&&) = delete; \
	UComposureGameSettings(const UComposureGameSettings&) = delete; \
	NO_API virtual ~UComposureGameSettings();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_9_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_12_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposureGameSettings;

// ********** End Class UComposureGameSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
