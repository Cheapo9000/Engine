// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimCharacterMovementLibrary.h"

#ifdef ANIMATIONLOCOMOTIONLIBRARYRUNTIME_AnimCharacterMovementLibrary_generated_h
#error "AnimCharacterMovementLibrary.generated.h already included, missing '#pragma once' in AnimCharacterMovementLibrary.h"
#endif
#define ANIMATIONLOCOMOTIONLIBRARYRUNTIME_AnimCharacterMovementLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCharacterMovementLibrary ********************************************
#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPredictGroundMovementPivotLocation); \
	DECLARE_FUNCTION(execPredictGroundMovementStopLocation);


struct Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics;
ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCharacterMovementLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* ::Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCharacterMovementLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationLocomotionLibraryRuntime"), Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimCharacterMovementLibrary)


#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UAnimCharacterMovementLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCharacterMovementLibrary(UAnimCharacterMovementLibrary&&) = delete; \
	UAnimCharacterMovementLibrary(const UAnimCharacterMovementLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API, UAnimCharacterMovementLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCharacterMovementLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCharacterMovementLibrary) \
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API virtual ~UAnimCharacterMovementLibrary();


#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCharacterMovementLibrary;

// ********** End Class UAnimCharacterMovementLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
