// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Composites/BTComposite_Sequence.h"

#ifdef AIMODULE_BTComposite_Sequence_generated_h
#error "BTComposite_Sequence.generated.h already included, missing '#pragma once' in BTComposite_Sequence.h"
#endif
#define AIMODULE_BTComposite_Sequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTComposite_Sequence ****************************************************
struct Z_Construct_UClass_UBTComposite_Sequence_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBTComposite_Sequence(); \
	friend struct ::Z_Construct_UClass_UBTComposite_Sequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTComposite_Sequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTComposite_Sequence, UBTCompositeNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTComposite_Sequence_NoRegister) \
	DECLARE_SERIALIZER(UBTComposite_Sequence)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTComposite_Sequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_Sequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTComposite_Sequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_Sequence); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTComposite_Sequence(UBTComposite_Sequence&&) = delete; \
	UBTComposite_Sequence(const UBTComposite_Sequence&) = delete; \
	AIMODULE_API virtual ~UBTComposite_Sequence();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTComposite_Sequence;

// ********** End Class UBTComposite_Sequence ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
