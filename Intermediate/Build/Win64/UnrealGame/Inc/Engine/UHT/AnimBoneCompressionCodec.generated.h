// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBoneCompressionCodec.h"

#ifdef ENGINE_AnimBoneCompressionCodec_generated_h
#error "AnimBoneCompressionCodec.generated.h already included, missing '#pragma once' in AnimBoneCompressionCodec.h"
#endif
#define ENGINE_AnimBoneCompressionCodec_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBoneCompressionCodec ************************************************
struct Z_Construct_UClass_UAnimBoneCompressionCodec_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionCodec(); \
	friend struct ::Z_Construct_UClass_UAnimBoneCompressionCodec_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBoneCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister) \
	DECLARE_SERIALIZER(UAnimBoneCompressionCodec)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBoneCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionCodec) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBoneCompressionCodec); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionCodec); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBoneCompressionCodec(UAnimBoneCompressionCodec&&) = delete; \
	UAnimBoneCompressionCodec(const UAnimBoneCompressionCodec&) = delete; \
	ENGINE_API virtual ~UAnimBoneCompressionCodec();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBoneCompressionCodec;

// ********** End Class UAnimBoneCompressionCodec **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
