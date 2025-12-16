// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectFilter/ObjectMixerEditorObjectFilter.h"

#ifdef OBJECTMIXEREDITOR_ObjectMixerEditorObjectFilter_generated_h
#error "ObjectMixerEditorObjectFilter.generated.h already included, missing '#pragma once' in ObjectMixerEditorObjectFilter.h"
#endif
#define OBJECTMIXEREDITOR_ObjectMixerEditorObjectFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
enum class EObjectMixerInheritanceInclusionOptions : uint8;

// ********** Begin Class UObjectMixerObjectFilter *************************************************
struct Z_Construct_UClass_UObjectMixerObjectFilter_Statics;
OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerObjectFilter(); \
	friend struct ::Z_Construct_UClass_UObjectMixerObjectFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTMIXEREDITOR_API UClass* ::Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectMixerObjectFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister) \
	DECLARE_SERIALIZER(UObjectMixerObjectFilter)


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectMixerObjectFilter(UObjectMixerObjectFilter&&) = delete; \
	UObjectMixerObjectFilter(const UObjectMixerObjectFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTMIXEREDITOR_API, UObjectMixerObjectFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerObjectFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UObjectMixerObjectFilter) \
	OBJECTMIXEREDITOR_API virtual ~UObjectMixerObjectFilter();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_51_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectMixerObjectFilter;

// ********** End Class UObjectMixerObjectFilter ***************************************************

// ********** Begin Class UObjectMixerBlueprintObjectFilter ****************************************
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics;
OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerBlueprintObjectFilter(); \
	friend struct ::Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTMIXEREDITOR_API UClass* ::Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectMixerBlueprintObjectFilter, UObjectMixerObjectFilter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_NoRegister) \
	DECLARE_SERIALIZER(UObjectMixerBlueprintObjectFilter)


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBJECTMIXEREDITOR_API UObjectMixerBlueprintObjectFilter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectMixerBlueprintObjectFilter(UObjectMixerBlueprintObjectFilter&&) = delete; \
	UObjectMixerBlueprintObjectFilter(const UObjectMixerBlueprintObjectFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTMIXEREDITOR_API, UObjectMixerBlueprintObjectFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerBlueprintObjectFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UObjectMixerBlueprintObjectFilter) \
	OBJECTMIXEREDITOR_API virtual ~UObjectMixerBlueprintObjectFilter();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_181_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectMixerBlueprintObjectFilter;

// ********** End Class UObjectMixerBlueprintObjectFilter ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h

// ********** Begin Enum EObjectMixerInheritanceInclusionOptions ***********************************
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
template<> OBJECTMIXEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EObjectMixerInheritanceInclusionOptions>();
// ********** End Enum EObjectMixerInheritanceInclusionOptions *************************************

// ********** Begin Enum EObjectMixerTreeViewMode **************************************************
#define FOREACH_ENUM_EOBJECTMIXERTREEVIEWMODE(op) \
	op(EObjectMixerTreeViewMode::NoFolders) \
	op(EObjectMixerTreeViewMode::Folders) 

enum class EObjectMixerTreeViewMode : uint8;
template<> struct TIsUEnumClass<EObjectMixerTreeViewMode> { enum { Value = true }; };
template<> OBJECTMIXEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EObjectMixerTreeViewMode>();
// ********** End Enum EObjectMixerTreeViewMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
