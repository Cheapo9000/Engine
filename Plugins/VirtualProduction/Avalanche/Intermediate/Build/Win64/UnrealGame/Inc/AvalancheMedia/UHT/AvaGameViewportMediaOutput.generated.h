// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/OutputDevices/AvaGameViewportMediaOutput.h"

#ifdef AVALANCHEMEDIA_AvaGameViewportMediaOutput_generated_h
#error "AvaGameViewportMediaOutput.generated.h already included, missing '#pragma once' in AvaGameViewportMediaOutput.h"
#endif
#define AVALANCHEMEDIA_AvaGameViewportMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaGameViewportMediaOutput **********************************************
struct Z_Construct_UClass_UAvaGameViewportMediaOutput_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaGameViewportMediaOutput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGameViewportMediaOutput(); \
	friend struct ::Z_Construct_UClass_UAvaGameViewportMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaGameViewportMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaGameViewportMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaGameViewportMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UAvaGameViewportMediaOutput)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaGameViewportMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaGameViewportMediaOutput(UAvaGameViewportMediaOutput&&) = delete; \
	UAvaGameViewportMediaOutput(const UAvaGameViewportMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaGameViewportMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGameViewportMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaGameViewportMediaOutput) \
	NO_API virtual ~UAvaGameViewportMediaOutput();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaGameViewportMediaOutput;

// ********** End Class UAvaGameViewportMediaOutput ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_OutputDevices_AvaGameViewportMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
