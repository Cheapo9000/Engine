// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARPin.h"

#ifdef AUGMENTEDREALITY_ARPin_generated_h
#error "ARPin.generated.h already included, missing '#pragma once' in ARPin.h"
#endif
#define AUGMENTEDREALITY_ARPin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARTrackedGeometry;
class USceneComponent;
class UWorld;
enum class EARTrackingState : uint8;
struct FLinearColor;

// ********** Begin Class UARPin *******************************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execDebugDraw); \
	DECLARE_FUNCTION(execGetPinnedComponent); \
	DECLARE_FUNCTION(execGetTrackedGeometry); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform);


struct Z_Construct_UClass_UARPin_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct ::Z_Construct_UClass_UARPin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARPin_NoRegister(); \
public: \
	DECLARE_CLASS2(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARPin_NoRegister) \
	DECLARE_SERIALIZER(UARPin)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARPin(UARPin&&) = delete; \
	UARPin(const UARPin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin) \
	AUGMENTEDREALITY_API virtual ~UARPin();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_13_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARPin;

// ********** End Class UARPin *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
