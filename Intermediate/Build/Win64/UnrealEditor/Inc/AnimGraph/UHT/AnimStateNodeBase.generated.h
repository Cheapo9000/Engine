// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateNodeBase.h"

#ifdef ANIMGRAPH_AnimStateNodeBase_generated_h
#error "AnimStateNodeBase.generated.h already included, missing '#pragma once' in AnimStateNodeBase.h"
#endif
#define ANIMGRAPH_AnimStateNodeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimStateNodeBase *******************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateNodeBase, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimStateNodeBase_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateNodeBase(); \
	friend struct ::Z_Construct_UClass_UAnimStateNodeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimStateNodeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimStateNodeBase, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimStateNodeBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimStateNodeBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateNodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateNodeBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimStateNodeBase(UAnimStateNodeBase&&) = delete; \
	UAnimStateNodeBase(const UAnimStateNodeBase&) = delete; \
	ANIMGRAPH_API virtual ~UAnimStateNodeBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimStateNodeBase;

// ********** End Class UAnimStateNodeBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
