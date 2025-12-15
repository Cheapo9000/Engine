// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorViewportSettings.h"

#ifdef UNREALED_LevelEditorViewportSettings_generated_h
#error "LevelEditorViewportSettings.generated.h already included, missing '#pragma once' in LevelEditorViewportSettings.h"
#endif
#define UNREALED_LevelEditorViewportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelEditorViewportInstanceSettings ******************************
struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FLevelEditorViewportInstanceSettings;
// ********** End ScriptStruct FLevelEditorViewportInstanceSettings ********************************

// ********** Begin ScriptStruct FLevelEditorViewportInstanceSettingsKeyValuePair ******************
struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_239_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FLevelEditorViewportInstanceSettingsKeyValuePair;
// ********** End ScriptStruct FLevelEditorViewportInstanceSettingsKeyValuePair ********************

// ********** Begin ScriptStruct FSnapToSurfaceSettings ********************************************
struct Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FSnapToSurfaceSettings;
// ********** End ScriptStruct FSnapToSurfaceSettings **********************************************

// ********** Begin ScriptStruct FLevelEditorViewporEditorViews ************************************
struct Z_Construct_UScriptStruct_FLevelEditorViewporEditorViews_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_281_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelEditorViewporEditorViews_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FLevelEditorViewporEditorViews;
// ********** End ScriptStruct FLevelEditorViewporEditorViews **************************************

// ********** Begin Class ULevelEditorViewportSettings *********************************************
struct Z_Construct_UClass_ULevelEditorViewportSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_294_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorViewportSettings(); \
	friend struct ::Z_Construct_UClass_ULevelEditorViewportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelEditorViewportSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelEditorViewportSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_294_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelEditorViewportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorViewportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelEditorViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorViewportSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelEditorViewportSettings(ULevelEditorViewportSettings&&) = delete; \
	ULevelEditorViewportSettings(const ULevelEditorViewportSettings&) = delete; \
	UNREALED_API virtual ~ULevelEditorViewportSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_290_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_294_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_294_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_294_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelEditorViewportSettings;

// ********** End Class ULevelEditorViewportSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h

// ********** Begin Enum ERotationGridMode *********************************************************
#define FOREACH_ENUM_EROTATIONGRIDMODE(op) \
	op(GridMode_DivisionsOf360) \
	op(GridMode_Common) 

enum ERotationGridMode : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ERotationGridMode>();
// ********** End Enum ERotationGridMode ***********************************************************

// ********** Begin Enum EWASDType *****************************************************************
#define FOREACH_ENUM_EWASDTYPE(op) \
	op(WASD_Always) \
	op(WASD_RMBOnly) \
	op(WASD_Never) 

enum EWASDType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EWASDType>();
// ********** End Enum EWASDType *******************************************************************

// ********** Begin Enum ELandscapeFoliageEditorControlType ****************************************
#define FOREACH_ENUM_ELANDSCAPEFOLIAGEEDITORCONTROLTYPE(op) \
	op(ELandscapeFoliageEditorControlType::IgnoreCtrl) \
	op(ELandscapeFoliageEditorControlType::RequireCtrl) \
	op(ELandscapeFoliageEditorControlType::RequireNoCtrl) 

enum class ELandscapeFoliageEditorControlType : uint8;
template<> struct TIsUEnumClass<ELandscapeFoliageEditorControlType> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeFoliageEditorControlType>();
// ********** End Enum ELandscapeFoliageEditorControlType ******************************************

// ********** Begin Enum EMeasuringToolUnits *******************************************************
#define FOREACH_ENUM_EMEASURINGTOOLUNITS(op) \
	op(MeasureUnits_Centimeters) \
	op(MeasureUnits_Meters) \
	op(MeasureUnits_Kilometers) 

enum EMeasuringToolUnits : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeasuringToolUnits>();
// ********** End Enum EMeasuringToolUnits *********************************************************

// ********** Begin Enum EScrollGestureDirection ***************************************************
#define FOREACH_ENUM_ESCROLLGESTUREDIRECTION(op) \
	op(EScrollGestureDirection::UseSystemSetting) \
	op(EScrollGestureDirection::Standard) \
	op(EScrollGestureDirection::Natural) 

enum class EScrollGestureDirection : uint8;
template<> struct TIsUEnumClass<EScrollGestureDirection> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EScrollGestureDirection>();
// ********** End Enum EScrollGestureDirection *****************************************************

// ********** Begin Enum EMaterialKind *************************************************************
#define FOREACH_ENUM_EMATERIALKIND(op) \
	op(EMaterialKind::Unknown) \
	op(EMaterialKind::Base) \
	op(EMaterialKind::Normal) \
	op(EMaterialKind::Specular) \
	op(EMaterialKind::Emissive) 

enum class EMaterialKind : uint8;
template<> struct TIsUEnumClass<EMaterialKind> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialKind>();
// ********** End Enum EMaterialKind ***************************************************************

// ********** Begin Enum EMarqueeSelectionMode *****************************************************
#define FOREACH_ENUM_EMARQUEESELECTIONMODE(op) \
	op(EMarqueeSelectionMode::Crossing) \
	op(EMarqueeSelectionMode::Window) \
	op(EMarqueeSelectionMode::CrossLeft) \
	op(EMarqueeSelectionMode::CrossRight) 

enum class EMarqueeSelectionMode : uint8;
template<> struct TIsUEnumClass<EMarqueeSelectionMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EMarqueeSelectionMode>();
// ********** End Enum EMarqueeSelectionMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
