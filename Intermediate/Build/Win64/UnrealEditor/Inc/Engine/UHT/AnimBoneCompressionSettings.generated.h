// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBoneCompressionSettings.h"

#ifdef ENGINE_AnimBoneCompressionSettings_generated_h
#error "AnimBoneCompressionSettings.generated.h already included, missing '#pragma once' in AnimBoneCompressionSettings.h"
#endif
#define ENGINE_AnimBoneCompressionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBoneCompressionSettings *********************************************
struct Z_Construct_UClass_UAnimBoneCompressionSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionSettings(); \
	friend struct ::Z_Construct_UClass_UAnimBoneCompressionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBoneCompressionSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimBoneCompressionSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBoneCompressionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBoneCompressionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBoneCompressionSettings(UAnimBoneCompressionSettings&&) = delete; \
	UAnimBoneCompressionSettings(const UAnimBoneCompressionSettings&) = delete; \
	ENGINE_API virtual ~UAnimBoneCompressionSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBoneCompressionSettings;

// ********** End Class UAnimBoneCompressionSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
