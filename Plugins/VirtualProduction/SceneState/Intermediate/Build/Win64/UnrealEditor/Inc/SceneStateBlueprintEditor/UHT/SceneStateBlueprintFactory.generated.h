// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateBlueprintFactory.h"

#ifdef SCENESTATEBLUEPRINTEDITOR_SceneStateBlueprintFactory_generated_h
#error "SceneStateBlueprintFactory.generated.h already included, missing '#pragma once' in SceneStateBlueprintFactory.h"
#endif
#define SCENESTATEBLUEPRINTEDITOR_SceneStateBlueprintFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateBlueprintFactory **********************************************
struct Z_Construct_UClass_USceneStateBlueprintFactory_Statics;
SCENESTATEBLUEPRINTEDITOR_API UClass* Z_Construct_UClass_USceneStateBlueprintFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateBlueprintFactory(); \
	friend struct ::Z_Construct_UClass_USceneStateBlueprintFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEBLUEPRINTEDITOR_API UClass* ::Z_Construct_UClass_USceneStateBlueprintFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateBlueprintEditor"), Z_Construct_UClass_USceneStateBlueprintFactory_NoRegister) \
	DECLARE_SERIALIZER(USceneStateBlueprintFactory)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateBlueprintFactory(USceneStateBlueprintFactory&&) = delete; \
	USceneStateBlueprintFactory(const USceneStateBlueprintFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEBLUEPRINTEDITOR_API, USceneStateBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateBlueprintFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateBlueprintFactory) \
	SCENESTATEBLUEPRINTEDITOR_API virtual ~USceneStateBlueprintFactory();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateBlueprintFactory;

// ********** End Class USceneStateBlueprintFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprintEditor_Public_SceneStateBlueprintFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
