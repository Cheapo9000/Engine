// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimUtilities.h"

#ifdef CONTEXTUALANIMATION_ContextualAnimUtilities_generated_h
#error "ContextualAnimUtilities.generated.h already included, missing '#pragma once' in ContextualAnimUtilities.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UAnimSequenceBase;
class UContextualAnimSceneAsset;
class UObject;
class USkeletalMeshComponent;
struct FContextualAnimSceneBinding;
struct FContextualAnimSceneBindingContext;
struct FContextualAnimSceneBindings;
struct FContextualAnimWarpPoint;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FLinearColor;

// ********** Begin Class UContextualAnimUtilities *************************************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_SceneBinding_GetSkeletalMesh); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetActor); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetCurrentSectionAndAnimSetNames); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_HasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_HasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_HasMatchingGameplayTag); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetGameplayTags); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetVelocity); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetTransform); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetActor); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_MakeFromActorWithExternalTransform); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_MakeFromActor); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSectionAndAnimSetNames); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSectionAndAnimSetIndices); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSceneAsset); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetRoleFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetAnimationFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetPrimaryBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindingByActor); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindingByRole); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindings); \
	DECLARE_FUNCTION(execBP_SceneBindings_AddOrUpdateWarpTargetsForBindings); \
	DECLARE_FUNCTION(execBP_SceneBindings_CalculateWarpPoints); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionLength); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionTimeLeftFromPos); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionStartAndEndTime); \
	DECLARE_FUNCTION(execBP_CreateContextualAnimSceneBindingsForTwoActors); \
	DECLARE_FUNCTION(execBP_CreateContextualAnimSceneBindings); \
	DECLARE_FUNCTION(execBP_DrawDebugPose);


struct Z_Construct_UClass_UContextualAnimUtilities_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimUtilities_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimUtilities(); \
	friend struct ::Z_Construct_UClass_UContextualAnimUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimUtilities_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimUtilities)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTEXTUALANIMATION_API UContextualAnimUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimUtilities(UContextualAnimUtilities&&) = delete; \
	UContextualAnimUtilities(const UContextualAnimUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimUtilities) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimUtilities();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimUtilities;

// ********** End Class UContextualAnimUtilities ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
