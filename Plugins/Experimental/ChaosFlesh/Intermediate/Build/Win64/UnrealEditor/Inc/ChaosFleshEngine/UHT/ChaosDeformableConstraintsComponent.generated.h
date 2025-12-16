// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableConstraintsComponent.h"

#ifdef CHAOSFLESHENGINE_ChaosDeformableConstraintsComponent_generated_h
#error "ChaosDeformableConstraintsComponent.generated.h already included, missing '#pragma once' in ChaosDeformableConstraintsComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableConstraintsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFleshComponent;
struct FDeformableConstraintParameters;

// ********** Begin ScriptStruct FDeformableConstraintParameters ***********************************
struct Z_Construct_UScriptStruct_FDeformableConstraintParameters_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeformableConstraintParameters_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


struct FDeformableConstraintParameters;
// ********** End ScriptStruct FDeformableConstraintParameters *************************************

// ********** Begin ScriptStruct FConstraintObject *************************************************
struct Z_Construct_UScriptStruct_FConstraintObject_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintObject_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


struct FConstraintObject;
// ********** End ScriptStruct FConstraintObject ***************************************************

// ********** Begin Class UDeformableConstraintsComponent ******************************************
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveConstrainedBodies); \
	DECLARE_FUNCTION(execAddConstrainedBodies);


struct Z_Construct_UClass_UDeformableConstraintsComponent_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableConstraintsComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableConstraintsComponent(); \
	friend struct ::Z_Construct_UClass_UDeformableConstraintsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_UDeformableConstraintsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeformableConstraintsComponent, UDeformablePhysicsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_UDeformableConstraintsComponent_NoRegister) \
	DECLARE_SERIALIZER(UDeformableConstraintsComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableConstraintsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableConstraintsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableConstraintsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableConstraintsComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeformableConstraintsComponent(UDeformableConstraintsComponent&&) = delete; \
	UDeformableConstraintsComponent(const UDeformableConstraintsComponent&) = delete;


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_93_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeformableConstraintsComponent;

// ********** End Class UDeformableConstraintsComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
