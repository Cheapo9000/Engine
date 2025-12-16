// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePipelineBaseActor.h"

#ifdef COMPOSURE_ComposurePipelineBaseActor_generated_h
#error "ComposurePipelineBaseActor.generated.h already included, missing '#pragma once' in ComposurePipelineBaseActor.h"
#endif
#define COMPOSURE_ComposurePipelineBaseActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AComposurePipelineBaseActor **********************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS \
	virtual void EnqueueRendering_Implementation(bool bCameraCutThisFrame); \
	virtual bool IsActivelyRunning_Implementation() const; \
	DECLARE_FUNCTION(execSetAutoRunChildrenAndSelf); \
	DECLARE_FUNCTION(execEnqueueRendering); \
	DECLARE_FUNCTION(execIsActivelyRunning); \
	DECLARE_FUNCTION(execAreChildrenAndSelfAutoRun); \
	DECLARE_FUNCTION(execSetAutoRun);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AComposurePipelineBaseActor_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_AComposurePipelineBaseActor_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAComposurePipelineBaseActor(); \
	friend struct ::Z_Construct_UClass_AComposurePipelineBaseActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_AComposurePipelineBaseActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AComposurePipelineBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_AComposurePipelineBaseActor_NoRegister) \
	DECLARE_SERIALIZER(AComposurePipelineBaseActor)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComposurePipelineBaseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComposurePipelineBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComposurePipelineBaseActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AComposurePipelineBaseActor(AComposurePipelineBaseActor&&) = delete; \
	AComposurePipelineBaseActor(const AComposurePipelineBaseActor&) = delete; \
	NO_API virtual ~AComposurePipelineBaseActor();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_14_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AComposurePipelineBaseActor;

// ********** End Class AComposurePipelineBaseActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
