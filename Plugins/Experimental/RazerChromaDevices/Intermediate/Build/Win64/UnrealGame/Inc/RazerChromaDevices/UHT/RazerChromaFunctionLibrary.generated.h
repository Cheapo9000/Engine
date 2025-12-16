// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RazerChromaFunctionLibrary.h"

#ifdef RAZERCHROMADEVICES_RazerChromaFunctionLibrary_generated_h
#error "RazerChromaFunctionLibrary.generated.h already included, missing '#pragma once' in RazerChromaFunctionLibrary.h"
#endif
#define RAZERCHROMADEVICES_RazerChromaFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URazerChromaAnimationAsset;
struct FColor;

// ********** Begin Class URazerChromaFunctionLibrary **********************************************
#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUseForwardChromaEvents); \
	DECLARE_FUNCTION(execSetEventName); \
	DECLARE_FUNCTION(execConv_RazerChromaDeviceTypesToString); \
	DECLARE_FUNCTION(execSetAllDevicesStaticColor); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execSetUseIdleAnimation); \
	DECLARE_FUNCTION(execSetIdleAnimation); \
	DECLARE_FUNCTION(execStopAllChromaAnimations); \
	DECLARE_FUNCTION(execResumeChromaAnimation); \
	DECLARE_FUNCTION(execIsChromaAnimationPaused); \
	DECLARE_FUNCTION(execPauseChromaAnimation); \
	DECLARE_FUNCTION(execStopChromaAnimation); \
	DECLARE_FUNCTION(execIsAnimationPlaying); \
	DECLARE_FUNCTION(execPlayChromaAnimation); \
	DECLARE_FUNCTION(execIsChromaRuntimeAvailable);


struct Z_Construct_UClass_URazerChromaFunctionLibrary_Statics;
RAZERCHROMADEVICES_API UClass* Z_Construct_UClass_URazerChromaFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURazerChromaFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URazerChromaFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAZERCHROMADEVICES_API UClass* ::Z_Construct_UClass_URazerChromaFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URazerChromaFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RazerChromaDevices"), Z_Construct_UClass_URazerChromaFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URazerChromaFunctionLibrary)


#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RAZERCHROMADEVICES_API URazerChromaFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URazerChromaFunctionLibrary(URazerChromaFunctionLibrary&&) = delete; \
	URazerChromaFunctionLibrary(const URazerChromaFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RAZERCHROMADEVICES_API, URazerChromaFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URazerChromaFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URazerChromaFunctionLibrary) \
	RAZERCHROMADEVICES_API virtual ~URazerChromaFunctionLibrary();


#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URazerChromaFunctionLibrary;

// ********** End Class URazerChromaFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
