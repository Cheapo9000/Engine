// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReferenceViewer/ReferenceViewerSettings.h"

#ifdef ASSETMANAGEREDITOR_ReferenceViewerSettings_generated_h
#error "ReferenceViewerSettings.generated.h already included, missing '#pragma once' in ReferenceViewerSettings.h"
#endif
#define ASSETMANAGEREDITOR_ReferenceViewerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FilterState *******************************************************
struct Z_Construct_UScriptStruct_FilterState_Statics;
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FilterState_Statics; \
	ASSETMANAGEREDITOR_API static class UScriptStruct* StaticStruct();


struct FilterState;
// ********** End ScriptStruct FilterState *********************************************************

// ********** Begin Class UReferenceViewerSettings *************************************************
struct Z_Construct_UClass_UReferenceViewerSettings_Statics;
ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UReferenceViewerSettings_NoRegister();

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReferenceViewerSettings(); \
	friend struct ::Z_Construct_UClass_UReferenceViewerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMANAGEREDITOR_API UClass* ::Z_Construct_UClass_UReferenceViewerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UReferenceViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), Z_Construct_UClass_UReferenceViewerSettings_NoRegister) \
	DECLARE_SERIALIZER(UReferenceViewerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReferenceViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReferenceViewerSettings(UReferenceViewerSettings&&) = delete; \
	UReferenceViewerSettings(const UReferenceViewerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReferenceViewerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReferenceViewerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReferenceViewerSettings) \
	NO_API virtual ~UReferenceViewerSettings();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_44_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReferenceViewerSettings;

// ********** End Class UReferenceViewerSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h

// ********** Begin Enum EEditorOnlyReferenceFilterType ********************************************
#define FOREACH_ENUM_EEDITORONLYREFERENCEFILTERTYPE(op) \
	op(EEditorOnlyReferenceFilterType::Game) \
	op(EEditorOnlyReferenceFilterType::Propagation) \
	op(EEditorOnlyReferenceFilterType::EditorOnly) 

enum class EEditorOnlyReferenceFilterType;
template<> struct TIsUEnumClass<EEditorOnlyReferenceFilterType> { enum { Value = true }; };
template<> ASSETMANAGEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorOnlyReferenceFilterType>();
// ********** End Enum EEditorOnlyReferenceFilterType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
