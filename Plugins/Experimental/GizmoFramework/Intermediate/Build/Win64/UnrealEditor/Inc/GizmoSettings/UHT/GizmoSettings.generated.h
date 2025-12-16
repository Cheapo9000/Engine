// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GizmoSettings.h"

#ifdef GIZMOSETTINGS_GizmoSettings_generated_h
#error "GizmoSettings.generated.h already included, missing '#pragma once' in GizmoSettings.h"
#endif
#define GIZMOSETTINGS_GizmoSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoSettings ***********************************************************
struct Z_Construct_UClass_UGizmoSettings_Statics;
GIZMOSETTINGS_API UClass* Z_Construct_UClass_UGizmoSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoSettings(); \
	friend struct ::Z_Construct_UClass_UGizmoSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GIZMOSETTINGS_API UClass* ::Z_Construct_UClass_UGizmoSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GizmoSettings"), Z_Construct_UClass_UGizmoSettings_NoRegister) \
	DECLARE_SERIALIZER(UGizmoSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoSettings(UGizmoSettings&&) = delete; \
	UGizmoSettings(const UGizmoSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoSettings) \
	NO_API virtual ~UGizmoSettings();


#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoSettings;

// ********** End Class UGizmoSettings *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
