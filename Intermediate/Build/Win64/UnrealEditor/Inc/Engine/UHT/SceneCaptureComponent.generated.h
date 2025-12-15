// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneCaptureComponent.h"

#ifdef ENGINE_SceneCaptureComponent_generated_h
#error "SceneCaptureComponent.generated.h already included, missing '#pragma once' in SceneCaptureComponent.h"
#endif
#define ENGINE_SceneCaptureComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FEngineShowFlagsSetting;

// ********** Begin ScriptStruct FEngineShowFlagsSetting *******************************************
struct Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEngineShowFlagsSetting;
// ********** End ScriptStruct FEngineShowFlagsSetting *********************************************

// ********** Begin Class USceneCaptureComponent ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetCaptureSortPriority); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent); \
	DECLARE_FUNCTION(execSetShowFlagSettings); \
	DECLARE_FUNCTION(execGetShowFlagSettings);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent, ENGINE_API)


struct Z_Construct_UClass_USceneCaptureComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend struct ::Z_Construct_UClass_USceneCaptureComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USceneCaptureComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USceneCaptureComponent_NoRegister) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USceneCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneCaptureComponent(USceneCaptureComponent&&) = delete; \
	USceneCaptureComponent(const USceneCaptureComponent&) = delete; \
	ENGINE_API virtual ~USceneCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_71_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneCaptureComponent;

// ********** End Class USceneCaptureComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h

// ********** Begin Enum ESceneCapturePrimitiveRenderMode ******************************************
#define FOREACH_ENUM_ESCENECAPTUREPRIMITIVERENDERMODE(op) \
	op(ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture) \
	op(ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives) \
	op(ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList) 

enum class ESceneCapturePrimitiveRenderMode : uint8;
template<> struct TIsUEnumClass<ESceneCapturePrimitiveRenderMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneCapturePrimitiveRenderMode>();
// ********** End Enum ESceneCapturePrimitiveRenderMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
