// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableGameplayComponent.h"

#ifdef CHAOSFLESHENGINE_ChaosDeformableGameplayComponent_generated_h
#error "ChaosDeformableGameplayComponent.generated.h already included, missing '#pragma once' in ChaosDeformableGameplayComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableGameplayComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigBoundRayCasts *************************************************
struct Z_Construct_UScriptStruct_FRigBoundRayCasts_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigBoundRayCasts_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


struct FRigBoundRayCasts;
// ********** End ScriptStruct FRigBoundRayCasts ***************************************************

// ********** Begin ScriptStruct FGameplayColllisions **********************************************
struct Z_Construct_UScriptStruct_FGameplayColllisions_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayColllisions_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


struct FGameplayColllisions;
// ********** End ScriptStruct FGameplayColllisions ************************************************

// ********** Begin Class UDeformableGameplayComponent *********************************************
struct Z_Construct_UClass_UDeformableGameplayComponent_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableGameplayComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableGameplayComponent(); \
	friend struct ::Z_Construct_UClass_UDeformableGameplayComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_UDeformableGameplayComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeformableGameplayComponent, UDeformableTetrahedralComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_UDeformableGameplayComponent_NoRegister) \
	DECLARE_SERIALIZER(UDeformableGameplayComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableGameplayComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableGameplayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableGameplayComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeformableGameplayComponent(UDeformableGameplayComponent&&) = delete; \
	UDeformableGameplayComponent(const UDeformableGameplayComponent&) = delete;


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_57_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeformableGameplayComponent;

// ********** End Class UDeformableGameplayComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableGameplayComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
