// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurfaceEffectsSettings.h"

#ifdef SURFACEEFFECTS_SurfaceEffectsSettings_generated_h
#error "SurfaceEffectsSettings.generated.h already included, missing '#pragma once' in SurfaceEffectsSettings.h"
#endif
#define SURFACEEFFECTS_SurfaceEffectsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USurfaceEffectsSettings **************************************************
struct Z_Construct_UClass_USurfaceEffectsSettings_Statics;
SURFACEEFFECTS_API UClass* Z_Construct_UClass_USurfaceEffectsSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurfaceEffectsSettings(); \
	friend struct ::Z_Construct_UClass_USurfaceEffectsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURFACEEFFECTS_API UClass* ::Z_Construct_UClass_USurfaceEffectsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USurfaceEffectsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurfaceEffects"), Z_Construct_UClass_USurfaceEffectsSettings_NoRegister) \
	DECLARE_SERIALIZER(USurfaceEffectsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SURFACEEFFECTS_API USurfaceEffectsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USurfaceEffectsSettings(USurfaceEffectsSettings&&) = delete; \
	USurfaceEffectsSettings(const USurfaceEffectsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SURFACEEFFECTS_API, USurfaceEffectsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurfaceEffectsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurfaceEffectsSettings) \
	SURFACEEFFECTS_API virtual ~USurfaceEffectsSettings();


#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USurfaceEffectsSettings;

// ********** End Class USurfaceEffectsSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
