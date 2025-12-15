// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/EditorPerformanceSettings.h"

#ifdef UNREALED_EditorPerformanceSettings_generated_h
#error "EditorPerformanceSettings.generated.h already included, missing '#pragma once' in EditorPerformanceSettings.h"
#endif
#define UNREALED_EditorPerformanceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorPerformanceSettings ***********************************************
struct Z_Construct_UClass_UEditorPerformanceSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUEditorPerformanceSettings(); \
	friend struct ::Z_Construct_UClass_UEditorPerformanceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorPerformanceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorPerformanceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorPerformanceSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorPerformanceSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorPerformanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPerformanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorPerformanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPerformanceSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorPerformanceSettings(UEditorPerformanceSettings&&) = delete; \
	UEditorPerformanceSettings(const UEditorPerformanceSettings&) = delete; \
	UNREALED_API virtual ~UEditorPerformanceSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_31_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorPerformanceSettings;

// ********** End Class UEditorPerformanceSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h

// ********** Begin Enum EEditorUserScreenPercentageModeOverride ***********************************
#define FOREACH_ENUM_EEDITORUSERSCREENPERCENTAGEMODEOVERRIDE(op) \
	op(EEditorUserScreenPercentageModeOverride::ProjectDefault) \
	op(EEditorUserScreenPercentageModeOverride::Manual) \
	op(EEditorUserScreenPercentageModeOverride::BasedOnDisplayResolution) \
	op(EEditorUserScreenPercentageModeOverride::BasedOnDPIScale) 

enum class EEditorUserScreenPercentageModeOverride;
template<> struct TIsUEnumClass<EEditorUserScreenPercentageModeOverride> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorUserScreenPercentageModeOverride>();
// ********** End Enum EEditorUserScreenPercentageModeOverride *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
