// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneSettings.h"

#ifdef AVALANCHE_AvaSceneSettings_generated_h
#error "AvaSceneSettings.generated.h already included, missing '#pragma once' in AvaSceneSettings.h"
#endif
#define AVALANCHE_AvaSceneSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaSceneSettings ********************************************************
struct Z_Construct_UClass_UAvaSceneSettings_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaSceneSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSceneSettings(); \
	friend struct ::Z_Construct_UClass_UAvaSceneSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaSceneSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSceneSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaSceneSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaSceneSettings)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaSceneSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSceneSettings(UAvaSceneSettings&&) = delete; \
	UAvaSceneSettings(const UAvaSceneSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaSceneSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSceneSettings) \
	AVALANCHE_API virtual ~UAvaSceneSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSceneSettings;

// ********** End Class UAvaSceneSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaSceneSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
