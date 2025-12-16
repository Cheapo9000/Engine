// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/GameViewFunctionLibrary.h"

#ifdef VIRTUALCAMERA_GameViewFunctionLibrary_generated_h
#error "GameViewFunctionLibrary.generated.h already included, missing '#pragma once' in GameViewFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_GameViewFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVCamTargetViewportID : uint8;

// ********** Begin Class UGameViewFunctionLibrary *************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRestoreGameViewStates); \
	DECLARE_FUNCTION(execSnapshotGameViewStates); \
	DECLARE_FUNCTION(execSetGameViewEnabledForAllViewports); \
	DECLARE_FUNCTION(execSetGameViewEnabled); \
	DECLARE_FUNCTION(execIsInGameView); \
	DECLARE_FUNCTION(execCanToggleGameView); \
	DECLARE_FUNCTION(execToggleGameView);


struct Z_Construct_UClass_UGameViewFunctionLibrary_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UGameViewFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameViewFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UGameViewFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UGameViewFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameViewFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UGameViewFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGameViewFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameViewFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameViewFunctionLibrary(UGameViewFunctionLibrary&&) = delete; \
	UGameViewFunctionLibrary(const UGameViewFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameViewFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameViewFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameViewFunctionLibrary) \
	NO_API virtual ~UGameViewFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameViewFunctionLibrary;

// ********** End Class UGameViewFunctionLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_GameViewFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
