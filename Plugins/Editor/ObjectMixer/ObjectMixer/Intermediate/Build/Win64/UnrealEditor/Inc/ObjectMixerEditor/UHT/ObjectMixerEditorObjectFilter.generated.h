// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectFilter/ObjectMixerEditorObjectFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EObjectMixerInheritanceInclusionOptions : uint8;
#ifdef OBJECTMIXEREDITOR_ObjectMixerEditorObjectFilter_generated_h
#error "ObjectMixerEditorObjectFilter.generated.h already included, missing '#pragma once' in ObjectMixerEditorObjectFilter.h"
#endif
#define OBJECTMIXEREDITOR_ObjectMixerEditorObjectFilter_generated_h

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerObjectFilter(); \
	friend struct Z_Construct_UClass_UObjectMixerObjectFilter_Statics; \
public: \
	DECLARE_CLASS(UObjectMixerObjectFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), NO_API) \
	DECLARE_SERIALIZER(UObjectMixerObjectFilter)


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectMixerObjectFilter(UObjectMixerObjectFilter&&); \
	UObjectMixerObjectFilter(const UObjectMixerObjectFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectMixerObjectFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerObjectFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UObjectMixerObjectFilter) \
	NO_API virtual ~UObjectMixerObjectFilter();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_46_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTMIXEREDITOR_API UClass* StaticClass<class UObjectMixerObjectFilter>();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPropertiesThatRequireListRefresh); \
	DECLARE_FUNCTION(execShouldIncludeUnsupportedProperties); \
	DECLARE_FUNCTION(execGetObjectMixerPlacementClassInclusionOptions); \
	DECLARE_FUNCTION(execGetObjectMixerPropertyInheritanceInclusionOptions); \
	DECLARE_FUNCTION(execGetForceAddedColumns); \
	DECLARE_FUNCTION(execGetColumnsToExclude); \
	DECLARE_FUNCTION(execGetColumnsToShowByDefault); \
	DECLARE_FUNCTION(execGetShowTransientObjects); \
	DECLARE_FUNCTION(execGetObjectClassesToPlace); \
	DECLARE_FUNCTION(execGetObjectClassesToFilter);


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerBlueprintObjectFilter(); \
	friend struct Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics; \
public: \
	DECLARE_CLASS(UObjectMixerBlueprintObjectFilter, UObjectMixerObjectFilter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), NO_API) \
	DECLARE_SERIALIZER(UObjectMixerBlueprintObjectFilter)


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectMixerBlueprintObjectFilter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectMixerBlueprintObjectFilter(UObjectMixerBlueprintObjectFilter&&); \
	UObjectMixerBlueprintObjectFilter(const UObjectMixerBlueprintObjectFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectMixerBlueprintObjectFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerBlueprintObjectFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UObjectMixerBlueprintObjectFilter) \
	NO_API virtual ~UObjectMixerBlueprintObjectFilter();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_151_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTMIXEREDITOR_API UClass* StaticClass<class UObjectMixerBlueprintObjectFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h


#define FOREACH_ENUM_EOBJECTMIXERINHERITANCEINCLUSIONOPTIONS(op) \
	op(EObjectMixerInheritanceInclusionOptions::None) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParent) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateChildren) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndChildren) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeAllParents) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeAllChildren) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndChildren) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndOnlyImmediateChildren) \
	op(EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndAllChildren) 

enum class EObjectMixerInheritanceInclusionOptions : uint8;
template<> struct TIsUEnumClass<EObjectMixerInheritanceInclusionOptions> { enum { Value = true }; };
template<> OBJECTMIXEREDITOR_API UEnum* StaticEnum<EObjectMixerInheritanceInclusionOptions>();

#define FOREACH_ENUM_EOBJECTMIXERTREEVIEWMODE(op) \
	op(EObjectMixerTreeViewMode::NoFolders) \
	op(EObjectMixerTreeViewMode::Folders) 

enum class EObjectMixerTreeViewMode : uint8;
template<> struct TIsUEnumClass<EObjectMixerTreeViewMode> { enum { Value = true }; };
template<> OBJECTMIXEREDITOR_API UEnum* StaticEnum<EObjectMixerTreeViewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
