// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateTemplateData.h"

#ifdef SCENESTATE_SceneStateTemplateData_generated_h
#error "SceneStateTemplateData.generated.h already included, missing '#pragma once' in SceneStateTemplateData.h"
#endif
#define SCENESTATE_SceneStateTemplateData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateTemplateData **************************************************
struct Z_Construct_UClass_USceneStateTemplateData_Statics;
SCENESTATE_API UClass* Z_Construct_UClass_USceneStateTemplateData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateTemplateData(); \
	friend struct ::Z_Construct_UClass_USceneStateTemplateData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATE_API UClass* ::Z_Construct_UClass_USceneStateTemplateData_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateTemplateData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneState"), Z_Construct_UClass_USceneStateTemplateData_NoRegister) \
	DECLARE_SERIALIZER(USceneStateTemplateData)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATE_API USceneStateTemplateData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateTemplateData(USceneStateTemplateData&&) = delete; \
	USceneStateTemplateData(const USceneStateTemplateData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATE_API, USceneStateTemplateData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateTemplateData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateTemplateData) \
	SCENESTATE_API virtual ~USceneStateTemplateData();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h_44_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateTemplateData;

// ********** End Class USceneStateTemplateData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateTemplateData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
