// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomComponent.h"

#ifdef HAIRSTRANDSCORE_GroomComponent_generated_h
#error "GroomComponent.generated.h already included, missing '#pragma once' in GroomComponent.h"
#endif
#define HAIRSTRANDSCORE_GroomComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGroomAsset;
class UGroomBindingAsset;
class UGroomCache;
class UMeshDeformer;
class UNiagaraComponent;
class UPhysicsAsset;
class USkeletalMeshComponent;

// ********** Begin Class UGroomComponent **********************************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetGroomCache); \
	DECLARE_FUNCTION(execGetIsHairLengthScaleEnabled); \
	DECLARE_FUNCTION(execSetHairLengthScaleEnable); \
	DECLARE_FUNCTION(execSetHairLengthScale); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execResetSimulation); \
	DECLARE_FUNCTION(execSetEnableSimulation); \
	DECLARE_FUNCTION(execResetCollisionComponents); \
	DECLARE_FUNCTION(execAddCollisionComponent); \
	DECLARE_FUNCTION(execSetMeshDeformer); \
	DECLARE_FUNCTION(execSetPhysicsAsset); \
	DECLARE_FUNCTION(execSetBindingAsset); \
	DECLARE_FUNCTION(execSetGroomAsset);


struct Z_Construct_UClass_UGroomComponent_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUGroomComponent(); \
	friend struct ::Z_Construct_UClass_UGroomComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomComponent_NoRegister) \
	DECLARE_SERIALIZER(UGroomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGroomComponent*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomComponent(UGroomComponent&&) = delete; \
	UGroomComponent(const UGroomComponent&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UGroomComponent();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomComponent;

// ********** End Class UGroomComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
