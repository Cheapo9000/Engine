// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSkyLight.h"

#ifdef AUGMENTEDREALITY_ARSkyLight_generated_h
#error "ARSkyLight.generated.h already included, missing '#pragma once' in ARSkyLight.h"
#endif
#define AUGMENTEDREALITY_ARSkyLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAREnvironmentCaptureProbe;

// ********** Begin Class AARSkyLight **************************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetEnvironmentCaptureProbe);


struct Z_Construct_UClass_AARSkyLight_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSkyLight_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAARSkyLight(); \
	friend struct ::Z_Construct_UClass_AARSkyLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_AARSkyLight_NoRegister(); \
public: \
	DECLARE_CLASS2(AARSkyLight, ASkyLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_AARSkyLight_NoRegister) \
	DECLARE_SERIALIZER(AARSkyLight)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API AARSkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, AARSkyLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSkyLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AARSkyLight(AARSkyLight&&) = delete; \
	AARSkyLight(const AARSkyLight&) = delete; \
	AUGMENTEDREALITY_API virtual ~AARSkyLight();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_15_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AARSkyLight;

// ********** End Class AARSkyLight ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
