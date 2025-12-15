// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSharedWorldGameMode.h"

#ifdef AUGMENTEDREALITY_ARSharedWorldGameMode_generated_h
#error "ARSharedWorldGameMode.generated.h already included, missing '#pragma once' in ARSharedWorldGameMode.h"
#endif
#define AUGMENTEDREALITY_ARSharedWorldGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AARSharedWorldGameState;

// ********** Begin ScriptStruct FARSharedWorldReplicationState ************************************
struct Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARSharedWorldReplicationState;
// ********** End ScriptStruct FARSharedWorldReplicationState **************************************

// ********** Begin Class AARSharedWorldGameMode ***************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetARSharedWorldGameState); \
	DECLARE_FUNCTION(execSetARWorldSharingIsReady); \
	DECLARE_FUNCTION(execSetARSharedWorldData); \
	DECLARE_FUNCTION(execSetPreviewImageData);


struct Z_Construct_UClass_AARSharedWorldGameMode_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameMode_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAARSharedWorldGameMode(); \
	friend struct ::Z_Construct_UClass_AARSharedWorldGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_AARSharedWorldGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AARSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_AARSharedWorldGameMode_NoRegister) \
	DECLARE_SERIALIZER(AARSharedWorldGameMode)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, AARSharedWorldGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldGameMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AARSharedWorldGameMode(AARSharedWorldGameMode&&) = delete; \
	AARSharedWorldGameMode(const AARSharedWorldGameMode&) = delete; \
	AUGMENTEDREALITY_API virtual ~AARSharedWorldGameMode();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_34_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AARSharedWorldGameMode;

// ********** End Class AARSharedWorldGameMode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
