// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GizmoSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIZMOSETTINGS_GizmoSettings_generated_h
#error "GizmoSettings.generated.h already included, missing '#pragma once' in GizmoSettings.h"
#endif
#define GIZMOSETTINGS_GizmoSettings_generated_h

#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGizmoSettings(); \
	friend struct Z_Construct_UClass_UGizmoSettings_Statics; \
public: \
	DECLARE_CLASS(UGizmoSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GizmoSettings"), NO_API) \
	DECLARE_SERIALIZER(UGizmoSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoSettings(UGizmoSettings&&); \
	UGizmoSettings(const UGizmoSettings&); \
public: \
	NO_API virtual ~UGizmoSettings();


#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GIZMOSETTINGS_API UClass* StaticClass<class UGizmoSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoFramework_Source_GizmoSettings_Public_GizmoSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
