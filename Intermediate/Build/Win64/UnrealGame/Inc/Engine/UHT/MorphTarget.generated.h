// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MorphTarget.h"

#ifdef ENGINE_MorphTarget_generated_h
#error "MorphTarget.generated.h already included, missing '#pragma once' in MorphTarget.h"
#endif
#define ENGINE_MorphTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMorphTarget *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMorphTarget, ENGINE_API)


struct Z_Construct_UClass_UMorphTarget_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_INCLASS \
private: \
	static void StaticRegisterNativesUMorphTarget(); \
	friend struct ::Z_Construct_UClass_UMorphTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMorphTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMorphTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMorphTarget_NoRegister) \
	DECLARE_SERIALIZER(UMorphTarget) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMorphTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorphTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMorphTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorphTarget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMorphTarget(UMorphTarget&&) = delete; \
	UMorphTarget(const UMorphTarget&) = delete; \
	ENGINE_API virtual ~UMorphTarget();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_227_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_231_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMorphTarget;

// ********** End Class UMorphTarget ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
