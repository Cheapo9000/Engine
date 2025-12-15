// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSingleNodeInstance.h"

#ifdef ENGINE_AnimSingleNodeInstance_generated_h
#error "AnimSingleNodeInstance.generated.h already included, missing '#pragma once' in AnimSingleNodeInstance.h"
#endif
#define ENGINE_AnimSingleNodeInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UMirrorDataTable;

// ********** Begin Delegate FPostEvaluateAnimEvent ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_20_DELEGATE \
ENGINE_API void FPostEvaluateAnimEvent_DelegateWrapper(const FScriptDelegate& PostEvaluateAnimEvent);


// ********** End Delegate FPostEvaluateAnimEvent **************************************************

// ********** Begin Class UAnimSingleNodeInstance **************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetPreviewCurveOverride); \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execSetAnimationAsset); \
	DECLARE_FUNCTION(execStopAnim); \
	DECLARE_FUNCTION(execPlayAnim); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execSetPlaying); \
	DECLARE_FUNCTION(execSetBlendSpacePosition); \
	DECLARE_FUNCTION(execSetPositionWithPreviousTime); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetReverse); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execSetMirrorDataTable);


struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSingleNodeInstance(); \
	friend struct ::Z_Construct_UClass_UAnimSingleNodeInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSingleNodeInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister) \
	DECLARE_SERIALIZER(UAnimSingleNodeInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSingleNodeInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSingleNodeInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSingleNodeInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSingleNodeInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSingleNodeInstance(UAnimSingleNodeInstance&&) = delete; \
	UAnimSingleNodeInstance(const UAnimSingleNodeInstance&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSingleNodeInstance;

// ********** End Class UAnimSingleNodeInstance ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
