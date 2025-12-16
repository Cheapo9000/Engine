// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CableComponent.h"

#ifdef CABLECOMPONENT_CableComponent_generated_h
#error "CableComponent.generated.h already included, missing '#pragma once' in CableComponent.h"
#endif
#define CABLECOMPONENT_CableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;

// ********** Begin Class UCableComponent **********************************************************
#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execGetAttachedComponent); \
	DECLARE_FUNCTION(execGetAttachedActor); \
	DECLARE_FUNCTION(execSetAttachEndTo); \
	DECLARE_FUNCTION(execSetAttachEndToComponent);


struct Z_Construct_UClass_UCableComponent_Statics;
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUCableComponent(); \
	friend struct ::Z_Construct_UClass_UCableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CABLECOMPONENT_API UClass* ::Z_Construct_UClass_UCableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCableComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), Z_Construct_UClass_UCableComponent_NoRegister) \
	DECLARE_SERIALIZER(UCableComponent)


#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CABLECOMPONENT_API UCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CABLECOMPONENT_API, UCableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCableComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCableComponent(UCableComponent&&) = delete; \
	UCableComponent(const UCableComponent&) = delete; \
	CABLECOMPONENT_API virtual ~UCableComponent();


#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_INCLASS \
	FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCableComponent;

// ********** End Class UCableComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
