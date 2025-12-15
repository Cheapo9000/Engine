// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BrainComponent.h"

#ifdef AIMODULE_BrainComponent_generated_h
#error "BrainComponent.generated.h already included, missing '#pragma once' in BrainComponent.h"
#endif
#define AIMODULE_BrainComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBrainComponent **********************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execStopLogic); \
	DECLARE_FUNCTION(execRestartLogic); \
	DECLARE_FUNCTION(execStartLogic);


struct Z_Construct_UClass_UBrainComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUBrainComponent(); \
	friend struct ::Z_Construct_UClass_UBrainComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBrainComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBrainComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBrainComponent_NoRegister) \
	DECLARE_SERIALIZER(UBrainComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBrainComponent*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrainComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBrainComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrainComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBrainComponent(UBrainComponent&&) = delete; \
	UBrainComponent(const UBrainComponent&) = delete; \
	AIMODULE_API virtual ~UBrainComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_116_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBrainComponent;

// ********** End Class UBrainComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
