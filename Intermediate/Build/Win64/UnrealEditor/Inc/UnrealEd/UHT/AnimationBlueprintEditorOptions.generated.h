// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/AnimationBlueprintEditorOptions.h"

#ifdef UNREALED_AnimationBlueprintEditorOptions_generated_h
#error "AnimationBlueprintEditorOptions.generated.h already included, missing '#pragma once' in AnimationBlueprintEditorOptions.h"
#endif
#define UNREALED_AnimationBlueprintEditorOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationBlueprintEditorOptions *****************************************
struct Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimationBlueprintEditorOptions_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationBlueprintEditorOptions(); \
	friend struct ::Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimationBlueprintEditorOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationBlueprintEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimationBlueprintEditorOptions_NoRegister) \
	DECLARE_SERIALIZER(UAnimationBlueprintEditorOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimationBlueprintEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlueprintEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimationBlueprintEditorOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlueprintEditorOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationBlueprintEditorOptions(UAnimationBlueprintEditorOptions&&) = delete; \
	UAnimationBlueprintEditorOptions(const UAnimationBlueprintEditorOptions&) = delete; \
	UNREALED_API virtual ~UAnimationBlueprintEditorOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationBlueprintEditorOptions;

// ********** End Class UAnimationBlueprintEditorOptions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
