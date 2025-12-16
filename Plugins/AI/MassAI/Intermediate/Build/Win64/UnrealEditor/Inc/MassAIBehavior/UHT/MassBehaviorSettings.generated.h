// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassBehaviorSettings.h"

#ifdef MASSAIBEHAVIOR_MassBehaviorSettings_generated_h
#error "MassBehaviorSettings.generated.h already included, missing '#pragma once' in MassBehaviorSettings.h"
#endif
#define MASSAIBEHAVIOR_MassBehaviorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassBehaviorSettings ****************************************************
struct Z_Construct_UClass_UMassBehaviorSettings_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassBehaviorSettings_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassBehaviorSettings(); \
	friend struct ::Z_Construct_UClass_UMassBehaviorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassBehaviorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassBehaviorSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassBehaviorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassBehaviorSettings)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassBehaviorSettings(UMassBehaviorSettings&&) = delete; \
	UMassBehaviorSettings(const UMassBehaviorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassBehaviorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassBehaviorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassBehaviorSettings) \
	MASSAIBEHAVIOR_API virtual ~UMassBehaviorSettings();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_13_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassBehaviorSettings;

// ********** End Class UMassBehaviorSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
