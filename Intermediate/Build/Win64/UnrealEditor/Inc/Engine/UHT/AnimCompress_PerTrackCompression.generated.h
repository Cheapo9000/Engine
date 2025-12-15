// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompress_PerTrackCompression.h"

#ifdef ENGINE_AnimCompress_PerTrackCompression_generated_h
#error "AnimCompress_PerTrackCompression.generated.h already included, missing '#pragma once' in AnimCompress_PerTrackCompression.h"
#endif
#define ENGINE_AnimCompress_PerTrackCompression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCompress_PerTrackCompression ****************************************
struct Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress_PerTrackCompression(); \
	friend struct ::Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompress_PerTrackCompression, UAnimCompress_RemoveLinearKeys, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompress_PerTrackCompression)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCompress_PerTrackCompression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress_PerTrackCompression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCompress_PerTrackCompression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress_PerTrackCompression); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompress_PerTrackCompression(UAnimCompress_PerTrackCompression&&) = delete; \
	UAnimCompress_PerTrackCompression(const UAnimCompress_PerTrackCompression&) = delete; \
	NO_API virtual ~UAnimCompress_PerTrackCompression();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompress_PerTrackCompression;

// ********** End Class UAnimCompress_PerTrackCompression ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
