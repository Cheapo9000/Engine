// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/FleshComponent.h"

#ifdef CHAOSFLESHENGINE_FleshComponent_generated_h
#error "FleshComponent.generated.h already included, missing '#pragma once' in FleshComponent.h"
#endif
#define CHAOSFLESHENGINE_FleshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFleshComponent **********************************************************
struct Z_Construct_UClass_UFleshComponent_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUFleshComponent(); \
	friend struct ::Z_Construct_UClass_UFleshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_UFleshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFleshComponent, UDeformableGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_UFleshComponent_NoRegister) \
	DECLARE_SERIALIZER(UFleshComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFleshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFleshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFleshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFleshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFleshComponent(UFleshComponent&&) = delete; \
	UFleshComponent(const UFleshComponent&) = delete; \
	NO_API virtual ~UFleshComponent();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFleshComponent;

// ********** End Class UFleshComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
