// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/PersonaOptions.h"

#ifdef UNREALED_PersonaOptions_generated_h
#error "PersonaOptions.generated.h already included, missing '#pragma once' in PersonaOptions.h"
#endif
#define UNREALED_PersonaOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FViewportConfigOptions ********************************************
struct Z_Construct_UScriptStruct_FViewportConfigOptions_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FViewportConfigOptions_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FViewportConfigOptions;
// ********** End ScriptStruct FViewportConfigOptions **********************************************

// ********** Begin ScriptStruct FAssetEditorOptions ***********************************************
struct Z_Construct_UScriptStruct_FAssetEditorOptions_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetEditorOptions_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FAssetEditorOptions;
// ********** End ScriptStruct FAssetEditorOptions *************************************************

// ********** Begin Class UPersonaOptions **********************************************************
struct Z_Construct_UClass_UPersonaOptions_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPersonaOptions_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUPersonaOptions(); \
	friend struct ::Z_Construct_UClass_UPersonaOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPersonaOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPersonaOptions_NoRegister) \
	DECLARE_SERIALIZER(UPersonaOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPersonaOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPersonaOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaOptions(UPersonaOptions&&) = delete; \
	UPersonaOptions(const UPersonaOptions&) = delete; \
	UNREALED_API virtual ~UPersonaOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_111_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_114_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaOptions;

// ********** End Class UPersonaOptions ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h

// ********** Begin Enum EAnimationViewportCameraFollowMode ****************************************
#define FOREACH_ENUM_EANIMATIONVIEWPORTCAMERAFOLLOWMODE(op) \
	op(EAnimationViewportCameraFollowMode::None) \
	op(EAnimationViewportCameraFollowMode::Bounds) \
	op(EAnimationViewportCameraFollowMode::Bone) \
	op(EAnimationViewportCameraFollowMode::Root) 

enum class EAnimationViewportCameraFollowMode : uint8;
template<> struct TIsUEnumClass<EAnimationViewportCameraFollowMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimationViewportCameraFollowMode>();
// ********** End Enum EAnimationViewportCameraFollowMode ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
