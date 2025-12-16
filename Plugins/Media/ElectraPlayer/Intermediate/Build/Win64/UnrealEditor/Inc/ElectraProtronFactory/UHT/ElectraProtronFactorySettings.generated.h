// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElectraProtronFactorySettings.h"

#ifdef ELECTRAPROTRONFACTORY_ElectraProtronFactorySettings_generated_h
#error "ElectraProtronFactorySettings.generated.h already included, missing '#pragma once' in ElectraProtronFactorySettings.h"
#endif
#define ELECTRAPROTRONFACTORY_ElectraProtronFactorySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UElectraProtronFactorySettings *******************************************
struct Z_Construct_UClass_UElectraProtronFactorySettings_Statics;
ELECTRAPROTRONFACTORY_API UClass* Z_Construct_UClass_UElectraProtronFactorySettings_NoRegister();

#define FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElectraProtronFactorySettings(); \
	friend struct ::Z_Construct_UClass_UElectraProtronFactorySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ELECTRAPROTRONFACTORY_API UClass* ::Z_Construct_UClass_UElectraProtronFactorySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UElectraProtronFactorySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElectraProtronFactory"), Z_Construct_UClass_UElectraProtronFactorySettings_NoRegister) \
	DECLARE_SERIALIZER(UElectraProtronFactorySettings)


#define FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElectraProtronFactorySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UElectraProtronFactorySettings(UElectraProtronFactorySettings&&) = delete; \
	UElectraProtronFactorySettings(const UElectraProtronFactorySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElectraProtronFactorySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElectraProtronFactorySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElectraProtronFactorySettings) \
	NO_API virtual ~UElectraProtronFactorySettings();


#define FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h_10_PROLOG
#define FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UElectraProtronFactorySettings;

// ********** End Class UElectraProtronFactorySettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ElectraPlayer_Source_ElectraProtronFactory_Private_ElectraProtronFactorySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
