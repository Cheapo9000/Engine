// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationAssetExtensions.h"

#ifdef ENGINE_AnimationAssetExtensions_generated_h
#error "AnimationAssetExtensions.generated.h already included, missing '#pragma once' in AnimationAssetExtensions.h"
#endif
#define ENGINE_AnimationAssetExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class USkeleton;

// ********** Begin Class UAnimationAssetExtensions ************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetSkeleton);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAnimationAssetExtensions_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimationAssetExtensions_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAssetExtensions(); \
	friend struct ::Z_Construct_UClass_UAnimationAssetExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimationAssetExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationAssetExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimationAssetExtensions_NoRegister) \
	DECLARE_SERIALIZER(UAnimationAssetExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAssetExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationAssetExtensions(UAnimationAssetExtensions&&) = delete; \
	UAnimationAssetExtensions(const UAnimationAssetExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAssetExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAssetExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAssetExtensions) \
	NO_API virtual ~UAnimationAssetExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationAssetExtensions;

// ********** End Class UAnimationAssetExtensions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
