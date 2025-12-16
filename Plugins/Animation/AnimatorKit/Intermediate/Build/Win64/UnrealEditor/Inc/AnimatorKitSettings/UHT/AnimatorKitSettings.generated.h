// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimatorKitSettings.h"

#ifdef ANIMATORKITSETTINGS_AnimatorKitSettings_generated_h
#error "AnimatorKitSettings.generated.h already included, missing '#pragma once' in AnimatorKitSettings.h"
#endif
#define ANIMATORKITSETTINGS_AnimatorKitSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimatorKitSettings *****************************************************
struct Z_Construct_UClass_UAnimatorKitSettings_Statics;
ANIMATORKITSETTINGS_API UClass* Z_Construct_UClass_UAnimatorKitSettings_NoRegister();

#define FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimatorKitSettings(); \
	friend struct ::Z_Construct_UClass_UAnimatorKitSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATORKITSETTINGS_API UClass* ::Z_Construct_UClass_UAnimatorKitSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimatorKitSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimatorKitSettings"), Z_Construct_UClass_UAnimatorKitSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimatorKitSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATORKITSETTINGS_API UAnimatorKitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimatorKitSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATORKITSETTINGS_API, UAnimatorKitSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimatorKitSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimatorKitSettings(UAnimatorKitSettings&&) = delete; \
	UAnimatorKitSettings(const UAnimatorKitSettings&) = delete; \
	ANIMATORKITSETTINGS_API virtual ~UAnimatorKitSettings();


#define FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h_12_PROLOG
#define FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h_15_INCLASS \
	FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimatorKitSettings;

// ********** End Class UAnimatorKitSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimatorKit_Source_AnimatorKitSettings_Public_AnimatorKitSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
