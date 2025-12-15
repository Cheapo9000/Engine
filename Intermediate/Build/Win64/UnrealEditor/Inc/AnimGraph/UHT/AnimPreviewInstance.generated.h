// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimPreviewInstance.h"

#ifdef ANIMGRAPH_AnimPreviewInstance_generated_h
#error "AnimPreviewInstance.generated.h already included, missing '#pragma once' in AnimPreviewInstance.h"
#endif
#define ANIMGRAPH_AnimPreviewInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimPreviewInstanceProxy *****************************************
struct Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimSingleNodeInstanceProxy Super;


struct FAnimPreviewInstanceProxy;
// ********** End ScriptStruct FAnimPreviewInstanceProxy *******************************************

// ********** Begin Class UAnimPreviewInstance *****************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimPreviewInstance, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimPreviewInstance_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_INCLASS \
private: \
	static void StaticRegisterNativesUAnimPreviewInstance(); \
	friend struct ::Z_Construct_UClass_UAnimPreviewInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimPreviewInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimPreviewInstance, UAnimSingleNodeInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimPreviewInstance_NoRegister) \
	DECLARE_SERIALIZER(UAnimPreviewInstance) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimPreviewInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimPreviewInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimPreviewInstance(UAnimPreviewInstance&&) = delete; \
	UAnimPreviewInstance(const UAnimPreviewInstance&) = delete; \
	ANIMGRAPH_API virtual ~UAnimPreviewInstance();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_163_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_166_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimPreviewInstance;

// ********** End Class UAnimPreviewInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h

// ********** Begin Enum EMontagePreviewType *******************************************************
#define FOREACH_ENUM_EMONTAGEPREVIEWTYPE(op) \
	op(EMPT_Normal) \
	op(EMPT_AllSections) 

enum EMontagePreviewType : int;
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EMontagePreviewType>();
// ********** End Enum EMontagePreviewType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
