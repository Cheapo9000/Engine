// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompositeBase.h"

#ifdef ENGINE_AnimCompositeBase_generated_h
#error "AnimCompositeBase.generated.h already included, missing '#pragma once' in AnimCompositeBase.h"
#endif
#define ENGINE_AnimCompositeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRootMotionExtractionStep *****************************************
struct Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRootMotionExtractionStep;
// ********** End ScriptStruct FRootMotionExtractionStep *******************************************

// ********** Begin ScriptStruct FAnimSegment ******************************************************
struct Z_Construct_UScriptStruct_FAnimSegment_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimSegment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimSegment;
// ********** End ScriptStruct FAnimSegment ********************************************************

// ********** Begin ScriptStruct FAnimTrack ********************************************************
struct Z_Construct_UScriptStruct_FAnimTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_231_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimTrack;
// ********** End ScriptStruct FAnimTrack **********************************************************

// ********** Begin Class UAnimCompositeBase *******************************************************
struct Z_Construct_UClass_UAnimCompositeBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_314_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompositeBase(); \
	friend struct ::Z_Construct_UClass_UAnimCompositeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCompositeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompositeBase, UAnimSequenceBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCompositeBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompositeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_314_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompositeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompositeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompositeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompositeBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompositeBase(UAnimCompositeBase&&) = delete; \
	UAnimCompositeBase(const UAnimCompositeBase&) = delete; \
	ENGINE_API virtual ~UAnimCompositeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_311_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_314_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_314_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_314_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompositeBase;

// ********** End Class UAnimCompositeBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
