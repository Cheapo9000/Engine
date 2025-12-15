// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationSettings.h"

#ifdef ENGINE_AnimationSettings_generated_h
#error "AnimationSettings.generated.h already included, missing '#pragma once' in AnimationSettings.h"
#endif
#define ENGINE_AnimationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationSettings *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBoneCustomAttributeNamesToImport);


struct Z_Construct_UClass_UAnimationSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSettings(); \
	friend struct ::Z_Construct_UClass_UAnimationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationSettings(UAnimationSettings&&) = delete; \
	UAnimationSettings(const UAnimationSettings&) = delete; \
	ENGINE_API virtual ~UAnimationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationSettings;

// ********** End Class UAnimationSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
