// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimPreviewAttacheInstance.h"

#ifdef ANIMGRAPH_AnimPreviewAttacheInstance_generated_h
#error "AnimPreviewAttacheInstance.generated.h already included, missing '#pragma once' in AnimPreviewAttacheInstance.h"
#endif
#define ANIMGRAPH_AnimPreviewAttacheInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimPreviewAttacheInstanceProxy **********************************
struct Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FAnimPreviewAttacheInstanceProxy;
// ********** End ScriptStruct FAnimPreviewAttacheInstanceProxy ************************************

// ********** Begin Class UAnimPreviewAttacheInstance **********************************************
struct Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUAnimPreviewAttacheInstance(); \
	friend struct ::Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimPreviewAttacheInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister) \
	DECLARE_SERIALIZER(UAnimPreviewAttacheInstance)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimPreviewAttacheInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewAttacheInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimPreviewAttacheInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewAttacheInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimPreviewAttacheInstance(UAnimPreviewAttacheInstance&&) = delete; \
	UAnimPreviewAttacheInstance(const UAnimPreviewAttacheInstance&) = delete; \
	ANIMGRAPH_API virtual ~UAnimPreviewAttacheInstance();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_45_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_48_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimPreviewAttacheInstance;

// ********** End Class UAnimPreviewAttacheInstance ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
