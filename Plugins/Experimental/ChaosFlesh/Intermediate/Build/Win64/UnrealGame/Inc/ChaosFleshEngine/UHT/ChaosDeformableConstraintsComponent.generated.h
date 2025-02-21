// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableConstraintsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFleshComponent;
struct FDeformableConstraintParameters;
#ifdef CHAOSFLESHENGINE_ChaosDeformableConstraintsComponent_generated_h
#error "ChaosDeformableConstraintsComponent.generated.h already included, missing '#pragma once' in ChaosDeformableConstraintsComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableConstraintsComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeformableConstraintParameters_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FDeformableConstraintParameters>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintObject_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FConstraintObject>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveConstrainedBodies); \
	DECLARE_FUNCTION(execAddConstrainedBodies);


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableConstraintsComponent(); \
	friend struct Z_Construct_UClass_UDeformableConstraintsComponent_Statics; \
public: \
	DECLARE_CLASS(UDeformableConstraintsComponent, UDeformablePhysicsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UDeformableConstraintsComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableConstraintsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableConstraintsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableConstraintsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableConstraintsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeformableConstraintsComponent(UDeformableConstraintsComponent&&); \
	UDeformableConstraintsComponent(const UDeformableConstraintsComponent&); \
public:


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_93_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UDeformableConstraintsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
