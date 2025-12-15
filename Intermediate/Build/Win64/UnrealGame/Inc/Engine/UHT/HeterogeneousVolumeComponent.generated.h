// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HeterogeneousVolumeComponent.h"

#ifdef ENGINE_HeterogeneousVolumeComponent_generated_h
#error "HeterogeneousVolumeComponent.generated.h already included, missing '#pragma once' in HeterogeneousVolumeComponent.h"
#endif
#define ENGINE_HeterogeneousVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHeterogeneousVolumeComponent ********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetStreamingMipBias); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetPlaying); \
	DECLARE_FUNCTION(execSetEndFrame); \
	DECLARE_FUNCTION(execSetStartFrame); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execSetFrame); \
	DECLARE_FUNCTION(execSetVolumeResolution);


struct Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHeterogeneousVolumeComponent(); \
	friend struct ::Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeterogeneousVolumeComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(UHeterogeneousVolumeComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHeterogeneousVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeterogeneousVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHeterogeneousVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeterogeneousVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeterogeneousVolumeComponent(UHeterogeneousVolumeComponent&&) = delete; \
	UHeterogeneousVolumeComponent(const UHeterogeneousVolumeComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeterogeneousVolumeComponent;

// ********** End Class UHeterogeneousVolumeComponent **********************************************

// ********** Begin Class AHeterogeneousVolume *****************************************************
struct Z_Construct_UClass_AHeterogeneousVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_AHeterogeneousVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_144_INCLASS \
private: \
	static void StaticRegisterNativesAHeterogeneousVolume(); \
	friend struct ::Z_Construct_UClass_AHeterogeneousVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AHeterogeneousVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeterogeneousVolume, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AHeterogeneousVolume_NoRegister) \
	DECLARE_SERIALIZER(AHeterogeneousVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_144_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AHeterogeneousVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeterogeneousVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AHeterogeneousVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeterogeneousVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeterogeneousVolume(AHeterogeneousVolume&&) = delete; \
	AHeterogeneousVolume(const AHeterogeneousVolume&) = delete; \
	ENGINE_API virtual ~AHeterogeneousVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_141_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_144_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_144_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeterogeneousVolume;

// ********** End Class AHeterogeneousVolume *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
