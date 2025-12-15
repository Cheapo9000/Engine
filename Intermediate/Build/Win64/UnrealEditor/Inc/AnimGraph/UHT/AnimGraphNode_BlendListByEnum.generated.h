// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendListByEnum.h"

#ifdef ANIMGRAPH_AnimGraphNode_BlendListByEnum_generated_h
#error "AnimGraphNode_BlendListByEnum.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendListByEnum.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendListByEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_BlendListByEnum *******************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_BlendListByEnum, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListByEnum(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_BlendListByEnum, UAnimGraphNode_BlendListBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListByEnum) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_BlendListByEnum*>(this); }


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListByEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListByEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListByEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListByEnum); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendListByEnum(UAnimGraphNode_BlendListByEnum&&) = delete; \
	UAnimGraphNode_BlendListByEnum(const UAnimGraphNode_BlendListByEnum&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_BlendListByEnum();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_BlendListByEnum;

// ********** End Class UAnimGraphNode_BlendListByEnum *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByEnum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
