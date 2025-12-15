// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LocalFogVolumeComponent.h"

#ifdef ENGINE_LocalFogVolumeComponent_generated_h
#error "LocalFogVolumeComponent.generated.h already included, missing '#pragma once' in LocalFogVolumeComponent.h"
#endif
#define ENGINE_LocalFogVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class ULocalFogVolumeComponent *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetFogEmissive); \
	DECLARE_FUNCTION(execSetFogAlbedo); \
	DECLARE_FUNCTION(execSetFogPhaseG); \
	DECLARE_FUNCTION(execSetHeightFogOffset); \
	DECLARE_FUNCTION(execSetHeightFogFalloff); \
	DECLARE_FUNCTION(execSetHeightFogExtinction); \
	DECLARE_FUNCTION(execSetRadialFogExtinction);


struct Z_Construct_UClass_ULocalFogVolumeComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULocalFogVolumeComponent(); \
	friend struct ::Z_Construct_UClass_ULocalFogVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalFogVolumeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(ULocalFogVolumeComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULocalFogVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFogVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULocalFogVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFogVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalFogVolumeComponent(ULocalFogVolumeComponent&&) = delete; \
	ULocalFogVolumeComponent(const ULocalFogVolumeComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalFogVolumeComponent;

// ********** End Class ULocalFogVolumeComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
