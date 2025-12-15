// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSharedWorldPlayerController.h"

#ifdef AUGMENTEDREALITY_ARSharedWorldPlayerController_generated_h
#error "ARSharedWorldPlayerController.generated.h already included, missing '#pragma once' in ARSharedWorldPlayerController.h"
#endif
#define AUGMENTEDREALITY_ARSharedWorldPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AARSharedWorldPlayerController *******************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_RPC_WRAPPERS \
	AUGMENTEDREALITY_API virtual bool ClientUpdateARWorldData_Validate(int32 , TArray<uint8> const& ); \
	AUGMENTEDREALITY_API virtual void ClientUpdateARWorldData_Implementation(int32 Offset, TArray<uint8> const& Buffer); \
	AUGMENTEDREALITY_API virtual bool ClientUpdatePreviewImageData_Validate(int32 , TArray<uint8> const& ); \
	AUGMENTEDREALITY_API virtual void ClientUpdatePreviewImageData_Implementation(int32 Offset, TArray<uint8> const& Buffer); \
	AUGMENTEDREALITY_API virtual bool ClientInitSharedWorld_Validate(int32 , int32 ); \
	AUGMENTEDREALITY_API virtual void ClientInitSharedWorld_Implementation(int32 PreviewImageSize, int32 ARWorldDataSize); \
	AUGMENTEDREALITY_API virtual bool ServerMarkReadyForReceiving_Validate(); \
	AUGMENTEDREALITY_API virtual void ServerMarkReadyForReceiving_Implementation(); \
	DECLARE_FUNCTION(execClientUpdateARWorldData); \
	DECLARE_FUNCTION(execClientUpdatePreviewImageData); \
	DECLARE_FUNCTION(execClientInitSharedWorld); \
	DECLARE_FUNCTION(execServerMarkReadyForReceiving);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AARSharedWorldPlayerController_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAARSharedWorldPlayerController(); \
	friend struct ::Z_Construct_UClass_AARSharedWorldPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AARSharedWorldPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AARSharedWorldPlayerController)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API AARSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, AARSharedWorldPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldPlayerController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AARSharedWorldPlayerController(AARSharedWorldPlayerController&&) = delete; \
	AARSharedWorldPlayerController(const AARSharedWorldPlayerController&) = delete; \
	AUGMENTEDREALITY_API virtual ~AARSharedWorldPlayerController();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_12_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AARSharedWorldPlayerController;

// ********** End Class AARSharedWorldPlayerController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
