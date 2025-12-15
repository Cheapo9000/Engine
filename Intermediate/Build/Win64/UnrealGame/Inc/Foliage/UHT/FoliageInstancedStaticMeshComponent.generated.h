// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageInstancedStaticMeshComponent.h"

#ifdef FOLIAGE_FoliageInstancedStaticMeshComponent_generated_h
#error "FoliageInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in FoliageInstancedStaticMeshComponent.h"
#endif
#define FOLIAGE_FoliageInstancedStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;

// ********** Begin Delegate FInstancePointDamageSignature *****************************************
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_16_DELEGATE \
FOLIAGE_API void FInstancePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstancePointDamageSignature, int32 InstanceIndex, float Damage, AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);


// ********** End Delegate FInstancePointDamageSignature *******************************************

// ********** Begin Delegate FInstanceRadialDamageSignature ****************************************
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_17_DELEGATE \
FOLIAGE_API void FInstanceRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstanceRadialDamageSignature, TArray<int32> const& Instances, TArray<float> const& Damages, AController* InstigatedBy, FVector Origin, float MaxRadius, const UDamageType* DamageType, AActor* DamageCauser);


// ********** End Delegate FInstanceRadialDamageSignature ******************************************

// ********** Begin Class UFoliageInstancedStaticMeshComponent *************************************
struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageInstancedStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFoliageInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UFoliageInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UFoliageInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageInstancedStaticMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFoliageInstancedStaticMeshComponent(UFoliageInstancedStaticMeshComponent&&) = delete; \
	UFoliageInstancedStaticMeshComponent(const UFoliageInstancedStaticMeshComponent&) = delete; \
	FOLIAGE_API virtual ~UFoliageInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFoliageInstancedStaticMeshComponent;

// ********** End Class UFoliageInstancedStaticMeshComponent ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
