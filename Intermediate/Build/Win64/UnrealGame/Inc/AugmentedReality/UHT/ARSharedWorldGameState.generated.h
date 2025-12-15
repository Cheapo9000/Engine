// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSharedWorldGameState.h"

#ifdef AUGMENTEDREALITY_ARSharedWorldGameState_generated_h
#error "ARSharedWorldGameState.generated.h already included, missing '#pragma once' in ARSharedWorldGameState.h"
#endif
#define AUGMENTEDREALITY_ARSharedWorldGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AARSharedWorldGameState **************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AARSharedWorldGameState_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAARSharedWorldGameState(); \
	friend struct ::Z_Construct_UClass_AARSharedWorldGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_AARSharedWorldGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(AARSharedWorldGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_AARSharedWorldGameState_NoRegister) \
	DECLARE_SERIALIZER(AARSharedWorldGameState)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API AARSharedWorldGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, AARSharedWorldGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldGameState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AARSharedWorldGameState(AARSharedWorldGameState&&) = delete; \
	AARSharedWorldGameState(const AARSharedWorldGameState&) = delete; \
	AUGMENTEDREALITY_API virtual ~AARSharedWorldGameState();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_12_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AARSharedWorldGameState;

// ********** End Class AARSharedWorldGameState ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
