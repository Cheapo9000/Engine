// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDistanceMatchingLibrary.h"

#ifdef ANIMATIONLOCOMOTIONLIBRARYRUNTIME_AnimDistanceMatchingLibrary_generated_h
#error "AnimDistanceMatchingLibrary.generated.h already included, missing '#pragma once' in AnimDistanceMatchingLibrary.h"
#endif
#define ANIMATIONLOCOMOTIONLIBRARYRUNTIME_AnimDistanceMatchingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimUpdateContext;
struct FSequenceEvaluatorReference;
struct FSequencePlayerReference;

// ********** Begin Class UAnimDistanceMatchingLibrary *********************************************
#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlayrateToMatchSpeed); \
	DECLARE_FUNCTION(execDistanceMatchToTarget); \
	DECLARE_FUNCTION(execAdvanceTimeByDistanceMatching);


struct Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics;
ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDistanceMatchingLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* ::Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDistanceMatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationLocomotionLibraryRuntime"), Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimDistanceMatchingLibrary)


#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UAnimDistanceMatchingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDistanceMatchingLibrary(UAnimDistanceMatchingLibrary&&) = delete; \
	UAnimDistanceMatchingLibrary(const UAnimDistanceMatchingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API, UAnimDistanceMatchingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDistanceMatchingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDistanceMatchingLibrary) \
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API virtual ~UAnimDistanceMatchingLibrary();


#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDistanceMatchingLibrary;

// ********** End Class UAnimDistanceMatchingLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
