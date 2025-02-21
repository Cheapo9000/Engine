// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableTetrahedralComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFleshAsset;
class USkeletalMesh;
#ifdef CHAOSFLESHENGINE_ChaosDeformableTetrahedralComponent_generated_h
#error "ChaosDeformableTetrahedralComponent.generated.h already included, missing '#pragma once' in ChaosDeformableTetrahedralComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableTetrahedralComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FFleshSimulationSpaceGroup>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyForcesGroup_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FBodyForcesGroup>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSimSpaceBoneNameOptions); \
	DECLARE_FUNCTION(execGetSkeletalMeshEmbeddedPositions); \
	DECLARE_FUNCTION(execGetSkeletalMeshBindingPositions); \
	DECLARE_FUNCTION(execGetRestCollection); \
	DECLARE_FUNCTION(execSetRestCollection);


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableTetrahedralComponent(); \
	friend struct Z_Construct_UClass_UDeformableTetrahedralComponent_Statics; \
public: \
	DECLARE_CLASS(UDeformableTetrahedralComponent, UDeformablePhysicsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UDeformableTetrahedralComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDeformableTetrahedralComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableTetrahedralComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableTetrahedralComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableTetrahedralComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableTetrahedralComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeformableTetrahedralComponent(UDeformableTetrahedralComponent&&); \
	UDeformableTetrahedralComponent(const UDeformableTetrahedralComponent&); \
public:


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_89_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UDeformableTetrahedralComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h


#define FOREACH_ENUM_CHAOSDEFORMABLEBINDINGOPTION(op) \
	op(WorldPos) \
	op(WorldDelta) \
	op(ComponentPos) \
	op(ComponentDelta) \
	op(BonePos) \
	op(BoneDelta) 

enum ChaosDeformableBindingOption : uint8;
template<> CHAOSFLESHENGINE_API UEnum* StaticEnum<ChaosDeformableBindingOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
