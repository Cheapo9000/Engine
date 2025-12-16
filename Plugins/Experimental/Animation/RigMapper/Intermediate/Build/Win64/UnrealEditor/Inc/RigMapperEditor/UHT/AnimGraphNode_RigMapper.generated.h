// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RigMapper.h"

#ifdef RIGMAPPEREDITOR_AnimGraphNode_RigMapper_generated_h
#error "AnimGraphNode_RigMapper.generated.h already included, missing '#pragma once' in AnimGraphNode_RigMapper.h"
#endif
#define RIGMAPPEREDITOR_AnimGraphNode_RigMapper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_RigMapper *************************************************
struct Z_Construct_UClass_UAnimGraphNode_RigMapper_Statics;
RIGMAPPEREDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RigMapper_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RigMapper(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_RigMapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPEREDITOR_API UClass* ::Z_Construct_UClass_UAnimGraphNode_RigMapper_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_RigMapper, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapperEditor"), Z_Construct_UClass_UAnimGraphNode_RigMapper_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_RigMapper)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPEREDITOR_API UAnimGraphNode_RigMapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RigMapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPEREDITOR_API, UAnimGraphNode_RigMapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RigMapper); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RigMapper(UAnimGraphNode_RigMapper&&) = delete; \
	UAnimGraphNode_RigMapper(const UAnimGraphNode_RigMapper&) = delete; \
	RIGMAPPEREDITOR_API virtual ~UAnimGraphNode_RigMapper();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_RigMapper;

// ********** End Class UAnimGraphNode_RigMapper ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_AnimGraphNode_RigMapper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
