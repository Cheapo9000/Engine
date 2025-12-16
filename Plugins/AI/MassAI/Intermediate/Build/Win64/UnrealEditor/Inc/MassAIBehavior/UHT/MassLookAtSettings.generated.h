// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtSettings.h"

#ifdef MASSAIBEHAVIOR_MassLookAtSettings_generated_h
#error "MassLookAtSettings.generated.h already included, missing '#pragma once' in MassLookAtSettings.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassLookAtSettings ******************************************************
struct Z_Construct_UClass_UMassLookAtSettings_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtSettings_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLookAtSettings(); \
	friend struct ::Z_Construct_UClass_UMassLookAtSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassLookAtSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLookAtSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassLookAtSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassLookAtSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLookAtSettings(UMassLookAtSettings&&) = delete; \
	UMassLookAtSettings(const UMassLookAtSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassLookAtSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLookAtSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassLookAtSettings) \
	MASSAIBEHAVIOR_API virtual ~UMassLookAtSettings();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h_14_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLookAtSettings;

// ********** End Class UMassLookAtSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
