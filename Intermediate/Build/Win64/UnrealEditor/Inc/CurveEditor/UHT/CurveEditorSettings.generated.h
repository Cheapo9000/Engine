// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurveEditorSettings.h"

#ifdef CURVEEDITOR_CurveEditorSettings_generated_h
#error "CurveEditorSettings.generated.h already included, missing '#pragma once' in CurveEditorSettings.h"
#endif
#define CURVEEDITOR_CurveEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomColorForChannel ********************************************
struct Z_Construct_UScriptStruct_FCustomColorForChannel_Statics;
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomColorForChannel_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomColorForChannel;
// ********** End ScriptStruct FCustomColorForChannel **********************************************

// ********** Begin ScriptStruct FCustomColorForSpaceSwitch ****************************************
struct Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics;
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomColorForSpaceSwitch;
// ********** End ScriptStruct FCustomColorForSpaceSwitch ******************************************

// ********** Begin Class UCurveEditorSettings *****************************************************
struct Z_Construct_UClass_UCurveEditorSettings_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorSettings(); \
	friend struct ::Z_Construct_UClass_UCurveEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_110_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorSettings(UCurveEditorSettings&&) = delete; \
	UCurveEditorSettings(const UCurveEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURVEEDITOR_API, UCurveEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorSettings) \
	CURVEEDITOR_API virtual ~UCurveEditorSettings();


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_106_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_110_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorSettings;

// ********** End Class UCurveEditorSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h

// ********** Begin Enum ECurveEditorPanningMouseButton ********************************************
#define FOREACH_ENUM_ECURVEEDITORPANNINGMOUSEBUTTON(op) \
	op(ECurveEditorPanningMouseButton::Right) \
	op(ECurveEditorPanningMouseButton::AltMiddle) \
	op(ECurveEditorPanningMouseButton::RightOrAltMiddle) 

enum class ECurveEditorPanningMouseButton : uint8;
template<> struct TIsUEnumClass<ECurveEditorPanningMouseButton> { enum { Value = true }; };
template<> CURVEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveEditorPanningMouseButton>();
// ********** End Enum ECurveEditorPanningMouseButton **********************************************

// ********** Begin Enum ECurveEditorTangentVisibility *********************************************
#define FOREACH_ENUM_ECURVEEDITORTANGENTVISIBILITY(op) \
	op(ECurveEditorTangentVisibility::AllTangents) \
	op(ECurveEditorTangentVisibility::SelectedKeys) \
	op(ECurveEditorTangentVisibility::NoTangents) \
	op(ECurveEditorTangentVisibility::UserTangents) \
	op(ECurveEditorTangentVisibility::Num) 

enum class ECurveEditorTangentVisibility : uint8;
template<> struct TIsUEnumClass<ECurveEditorTangentVisibility> { enum { Value = true }; };
template<> CURVEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveEditorTangentVisibility>();
// ********** End Enum ECurveEditorTangentVisibility ***********************************************

// ********** Begin Enum ECurveEditorZoomPosition **************************************************
#define FOREACH_ENUM_ECURVEEDITORZOOMPOSITION(op) \
	op(ECurveEditorZoomPosition::CurrentTime) \
	op(ECurveEditorZoomPosition::MousePosition) 

enum class ECurveEditorZoomPosition : uint8;
template<> struct TIsUEnumClass<ECurveEditorZoomPosition> { enum { Value = true }; };
template<> CURVEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveEditorZoomPosition>();
// ********** End Enum ECurveEditorZoomPosition ****************************************************

// ********** Begin Enum ECurveEditorSnapAxis ******************************************************
#define FOREACH_ENUM_ECURVEEDITORSNAPAXIS(op) \
	op(ECurveEditorSnapAxis::CESA_None) \
	op(ECurveEditorSnapAxis::CESA_X) \
	op(ECurveEditorSnapAxis::CESA_Y) 

enum class ECurveEditorSnapAxis : uint8;
template<> struct TIsUEnumClass<ECurveEditorSnapAxis> { enum { Value = true }; };
template<> CURVEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveEditorSnapAxis>();
// ********** End Enum ECurveEditorSnapAxis ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
