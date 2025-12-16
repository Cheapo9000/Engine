// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualStudioSourceCodeAccessSettings.h"

#ifdef VISUALSTUDIOSOURCECODEACCESS_VisualStudioSourceCodeAccessSettings_generated_h
#error "VisualStudioSourceCodeAccessSettings.generated.h already included, missing '#pragma once' in VisualStudioSourceCodeAccessSettings.h"
#endif
#define VISUALSTUDIOSOURCECODEACCESS_VisualStudioSourceCodeAccessSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVisualStudioSourceCodeAccessSettings ************************************
struct Z_Construct_UClass_UVisualStudioSourceCodeAccessSettings_Statics;
VISUALSTUDIOSOURCECODEACCESS_API UClass* Z_Construct_UClass_UVisualStudioSourceCodeAccessSettings_NoRegister();

#define FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUVisualStudioSourceCodeAccessSettings(); \
	friend struct ::Z_Construct_UClass_UVisualStudioSourceCodeAccessSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VISUALSTUDIOSOURCECODEACCESS_API UClass* ::Z_Construct_UClass_UVisualStudioSourceCodeAccessSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVisualStudioSourceCodeAccessSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VisualStudioSourceCodeAccess"), Z_Construct_UClass_UVisualStudioSourceCodeAccessSettings_NoRegister) \
	DECLARE_SERIALIZER(UVisualStudioSourceCodeAccessSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisualStudioSourceCodeAccessSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualStudioSourceCodeAccessSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisualStudioSourceCodeAccessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualStudioSourceCodeAccessSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVisualStudioSourceCodeAccessSettings(UVisualStudioSourceCodeAccessSettings&&) = delete; \
	UVisualStudioSourceCodeAccessSettings(const UVisualStudioSourceCodeAccessSettings&) = delete; \
	NO_API virtual ~UVisualStudioSourceCodeAccessSettings();


#define FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h_10_PROLOG
#define FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h_13_INCLASS \
	FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVisualStudioSourceCodeAccessSettings;

// ********** End Class UVisualStudioSourceCodeAccessSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_VisualStudioSourceCodeAccess_Source_VisualStudioSourceCodeAccess_Private_VisualStudioSourceCodeAccessSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
