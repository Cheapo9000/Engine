// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GraphEditorSettings.h"

#ifdef GRAPHEDITOR_GraphEditorSettings_generated_h
#error "GraphEditorSettings.generated.h already included, missing '#pragma once' in GraphEditorSettings.h"
#endif
#define GRAPHEDITOR_GraphEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGraphEditorSettings *****************************************************
struct Z_Construct_UClass_UGraphEditorSettings_Statics;
GRAPHEDITOR_API UClass* Z_Construct_UClass_UGraphEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUGraphEditorSettings(); \
	friend struct ::Z_Construct_UClass_UGraphEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRAPHEDITOR_API UClass* ::Z_Construct_UClass_UGraphEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraphEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphEditor"), Z_Construct_UClass_UGraphEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UGraphEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GRAPHEDITOR_API UGraphEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GRAPHEDITOR_API, UGraphEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphEditorSettings(UGraphEditorSettings&&) = delete; \
	UGraphEditorSettings(const UGraphEditorSettings&) = delete; \
	GRAPHEDITOR_API virtual ~UGraphEditorSettings();


#define FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_34_PROLOG
#define FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_37_INCLASS \
	FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphEditorSettings;

// ********** End Class UGraphEditorSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h

// ********** Begin Enum EGraphPanningMouseButton **************************************************
#define FOREACH_ENUM_EGRAPHPANNINGMOUSEBUTTON(op) \
	op(EGraphPanningMouseButton::Right) \
	op(EGraphPanningMouseButton::Middle) \
	op(EGraphPanningMouseButton::Both) 

enum class EGraphPanningMouseButton : uint8;
template<> struct TIsUEnumClass<EGraphPanningMouseButton> { enum { Value = true }; };
template<> GRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphPanningMouseButton>();
// ********** End Enum EGraphPanningMouseButton ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
