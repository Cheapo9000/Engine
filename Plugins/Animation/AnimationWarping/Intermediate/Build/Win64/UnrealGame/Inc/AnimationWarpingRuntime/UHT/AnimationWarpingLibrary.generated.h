// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationWarpingLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
struct FAnimNodeReference;
#ifdef ANIMATIONWARPINGRUNTIME_AnimationWarpingLibrary_generated_h
#error "AnimationWarpingLibrary.generated.h already included, missing '#pragma once' in AnimationWarpingLibrary.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimationWarpingLibrary_generated_h

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurveValueFromAnimation); \
	DECLARE_FUNCTION(execGetOffsetRootTransform);


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationWarpingLibrary(); \
	friend struct Z_Construct_UClass_UAnimationWarpingLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationWarpingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationWarpingRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimationWarpingLibrary)


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationWarpingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationWarpingLibrary(UAnimationWarpingLibrary&&); \
	UAnimationWarpingLibrary(const UAnimationWarpingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationWarpingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationWarpingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationWarpingLibrary) \
	NO_API virtual ~UAnimationWarpingLibrary();


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONWARPINGRUNTIME_API UClass* StaticClass<class UAnimationWarpingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
