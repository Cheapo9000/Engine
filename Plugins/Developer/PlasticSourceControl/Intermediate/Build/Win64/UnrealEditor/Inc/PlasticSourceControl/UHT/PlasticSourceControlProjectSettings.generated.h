// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlasticSourceControlProjectSettings.h"

#ifdef PLASTICSOURCECONTROL_PlasticSourceControlProjectSettings_generated_h
#error "PlasticSourceControlProjectSettings.generated.h already included, missing '#pragma once' in PlasticSourceControlProjectSettings.h"
#endif
#define PLASTICSOURCECONTROL_PlasticSourceControlProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlasticSourceControlProjectSettings *************************************
struct Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics;
PLASTICSOURCECONTROL_API UClass* Z_Construct_UClass_UPlasticSourceControlProjectSettings_NoRegister();

#define FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlasticSourceControlProjectSettings(); \
	friend struct ::Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLASTICSOURCECONTROL_API UClass* ::Z_Construct_UClass_UPlasticSourceControlProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlasticSourceControlProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlasticSourceControl"), Z_Construct_UClass_UPlasticSourceControlProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UPlasticSourceControlProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlasticSourceControlProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlasticSourceControlProjectSettings(UPlasticSourceControlProjectSettings&&) = delete; \
	UPlasticSourceControlProjectSettings(const UPlasticSourceControlProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlasticSourceControlProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlasticSourceControlProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlasticSourceControlProjectSettings) \
	NO_API virtual ~UPlasticSourceControlProjectSettings();


#define FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_10_PROLOG
#define FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlasticSourceControlProjectSettings;

// ********** End Class UPlasticSourceControlProjectSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
