// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARLightEstimate.h"

#ifdef AUGMENTEDREALITY_ARLightEstimate_generated_h
#error "ARLightEstimate.generated.h already included, missing '#pragma once' in ARLightEstimate.h"
#endif
#define AUGMENTEDREALITY_ARLightEstimate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UARLightEstimate *********************************************************
struct Z_Construct_UClass_UARLightEstimate_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLightEstimate(); \
	friend struct ::Z_Construct_UClass_UARLightEstimate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARLightEstimate_NoRegister(); \
public: \
	DECLARE_CLASS2(UARLightEstimate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARLightEstimate_NoRegister) \
	DECLARE_SERIALIZER(UARLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARLightEstimate(UARLightEstimate&&) = delete; \
	UARLightEstimate(const UARLightEstimate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLightEstimate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLightEstimate) \
	NO_API virtual ~UARLightEstimate();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_18_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARLightEstimate;

// ********** End Class UARLightEstimate ***********************************************************

// ********** Begin Class UARBasicLightEstimate ****************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAmbientColor); \
	DECLARE_FUNCTION(execGetAmbientColorTemperatureKelvin); \
	DECLARE_FUNCTION(execGetAmbientIntensityLumens);


struct Z_Construct_UClass_UARBasicLightEstimate_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBasicLightEstimate(); \
	friend struct ::Z_Construct_UClass_UARBasicLightEstimate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARBasicLightEstimate_NoRegister(); \
public: \
	DECLARE_CLASS2(UARBasicLightEstimate, UARLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARBasicLightEstimate_NoRegister) \
	DECLARE_SERIALIZER(UARBasicLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARBasicLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARBasicLightEstimate(UARBasicLightEstimate&&) = delete; \
	UARBasicLightEstimate(const UARBasicLightEstimate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARBasicLightEstimate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBasicLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBasicLightEstimate) \
	AUGMENTEDREALITY_API virtual ~UARBasicLightEstimate();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_24_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARBasicLightEstimate;

// ********** End Class UARBasicLightEstimate ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
