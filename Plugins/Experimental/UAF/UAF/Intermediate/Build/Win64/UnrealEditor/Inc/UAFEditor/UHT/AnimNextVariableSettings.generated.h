// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/AnimNextVariableSettings.h"

#ifdef UAFEDITOR_AnimNextVariableSettings_generated_h
#error "AnimNextVariableSettings.generated.h already included, missing '#pragma once' in AnimNextVariableSettings.h"
#endif
#define UAFEDITOR_AnimNextVariableSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextVariableSettings ************************************************
struct Z_Construct_UClass_UAnimNextVariableSettings_Statics;
UAFEDITOR_API UClass* Z_Construct_UClass_UAnimNextVariableSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextVariableSettings(); \
	friend struct ::Z_Construct_UClass_UAnimNextVariableSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFEDITOR_API UClass* ::Z_Construct_UClass_UAnimNextVariableSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextVariableSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UAFEditor"), Z_Construct_UClass_UAnimNextVariableSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextVariableSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextVariableSettings(UAnimNextVariableSettings&&) = delete; \
	UAnimNextVariableSettings(const UAnimNextVariableSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextVariableSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextVariableSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNextVariableSettings) \
	NO_API virtual ~UAnimNextVariableSettings();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextVariableSettings;

// ********** End Class UAnimNextVariableSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Variables_AnimNextVariableSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
