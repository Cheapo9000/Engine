// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EQSRenderingComponent.h"

#ifdef AIMODULE_EQSRenderingComponent_generated_h
#error "EQSRenderingComponent.generated.h already included, missing '#pragma once' in EQSRenderingComponent.h"
#endif
#define AIMODULE_EQSRenderingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEQSRenderingComponent ***************************************************
struct Z_Construct_UClass_UEQSRenderingComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEQSRenderingComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUEQSRenderingComponent(); \
	friend struct ::Z_Construct_UClass_UEQSRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEQSRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEQSRenderingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEQSRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(UEQSRenderingComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEQSRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEQSRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEQSRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEQSRenderingComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEQSRenderingComponent(UEQSRenderingComponent&&) = delete; \
	UEQSRenderingComponent(const UEQSRenderingComponent&) = delete; \
	AIMODULE_API virtual ~UEQSRenderingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h_79_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h_82_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEQSRenderingComponent;

// ********** End Class UEQSRenderingComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
