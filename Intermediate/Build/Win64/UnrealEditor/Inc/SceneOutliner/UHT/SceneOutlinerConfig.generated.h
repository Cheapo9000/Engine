// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneOutlinerConfig.h"

#ifdef SCENEOUTLINER_SceneOutlinerConfig_generated_h
#error "SceneOutlinerConfig.generated.h already included, missing '#pragma once' in SceneOutlinerConfig.h"
#endif
#define SCENEOUTLINER_SceneOutlinerConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSceneOutlinerConfig **********************************************
struct Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics;
#define FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics; \
	SCENEOUTLINER_API static class UScriptStruct* StaticStruct();


struct FSceneOutlinerConfig;
// ********** End ScriptStruct FSceneOutlinerConfig ************************************************

// ********** Begin Class UOutlinerConfig **********************************************************
struct Z_Construct_UClass_UOutlinerConfig_Statics;
SCENEOUTLINER_API UClass* Z_Construct_UClass_UOutlinerConfig_NoRegister();

#define FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutlinerConfig(); \
	friend struct ::Z_Construct_UClass_UOutlinerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENEOUTLINER_API UClass* ::Z_Construct_UClass_UOutlinerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UOutlinerConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneOutliner"), Z_Construct_UClass_UOutlinerConfig_NoRegister) \
	DECLARE_SERIALIZER(UOutlinerConfig)


#define FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutlinerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOutlinerConfig(UOutlinerConfig&&) = delete; \
	UOutlinerConfig(const UOutlinerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlinerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlinerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutlinerConfig) \
	NO_API virtual ~UOutlinerConfig();


#define FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_33_PROLOG
#define FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOutlinerConfig;

// ********** End Class UOutlinerConfig ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
