// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableCollisionsComponent.h"

#ifdef CHAOSFLESHENGINE_ChaosDeformableCollisionsComponent_generated_h
#error "ChaosDeformableCollisionsComponent.generated.h already included, missing '#pragma once' in ChaosDeformableCollisionsComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableCollisionsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;

// ********** Begin Class UDeformableCollisionsComponent *******************************************
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveStaticMeshComponent); \
	DECLARE_FUNCTION(execAddStaticMeshComponent);


struct Z_Construct_UClass_UDeformableCollisionsComponent_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableCollisionsComponent(); \
	friend struct ::Z_Construct_UClass_UDeformableCollisionsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeformableCollisionsComponent, UDeformablePhysicsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister) \
	DECLARE_SERIALIZER(UDeformableCollisionsComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableCollisionsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableCollisionsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableCollisionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableCollisionsComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeformableCollisionsComponent(UDeformableCollisionsComponent&&) = delete; \
	UDeformableCollisionsComponent(const UDeformableCollisionsComponent&) = delete;


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeformableCollisionsComponent;

// ********** End Class UDeformableCollisionsComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
