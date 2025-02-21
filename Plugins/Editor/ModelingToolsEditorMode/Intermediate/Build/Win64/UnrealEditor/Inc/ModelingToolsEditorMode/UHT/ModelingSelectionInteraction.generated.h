// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingSelectionInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGTOOLSEDITORMODE_ModelingSelectionInteraction_generated_h
#error "ModelingSelectionInteraction.generated.h already included, missing '#pragma once' in ModelingSelectionInteraction.h"
#endif
#define MODELINGTOOLSEDITORMODE_ModelingSelectionInteraction_generated_h

#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingSelectionInteraction(); \
	friend struct Z_Construct_UClass_UModelingSelectionInteraction_Statics; \
public: \
	DECLARE_CLASS(UModelingSelectionInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingToolsEditorMode"), NO_API) \
	DECLARE_SERIALIZER(UModelingSelectionInteraction) \
	virtual UObject* _getUObject() const override { return const_cast<UModelingSelectionInteraction*>(this); }


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelingSelectionInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelingSelectionInteraction(UModelingSelectionInteraction&&); \
	UModelingSelectionInteraction(const UModelingSelectionInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelingSelectionInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingSelectionInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingSelectionInteraction) \
	NO_API virtual ~UModelingSelectionInteraction();


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_63_PROLOG
#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<class UModelingSelectionInteraction>();

#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathSelectionInteraction(); \
	friend struct Z_Construct_UClass_UPathSelectionInteraction_Statics; \
public: \
	DECLARE_CLASS(UPathSelectionInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingToolsEditorMode"), NO_API) \
	DECLARE_SERIALIZER(UPathSelectionInteraction)


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathSelectionInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPathSelectionInteraction(UPathSelectionInteraction&&); \
	UPathSelectionInteraction(const UPathSelectionInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathSelectionInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathSelectionInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathSelectionInteraction) \
	NO_API virtual ~UPathSelectionInteraction();


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_241_PROLOG
#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<class UPathSelectionInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h


#define FOREACH_ENUM_EMODELINGSELECTIONINTERACTION_DRAGMODE(op) \
	op(EModelingSelectionInteraction_DragMode::NoDragInteraction) \
	op(EModelingSelectionInteraction_DragMode::PathInteraction) \
	op(EModelingSelectionInteraction_DragMode::RectangleMarqueeInteraction) 

enum class EModelingSelectionInteraction_DragMode : uint8;
template<> struct TIsUEnumClass<EModelingSelectionInteraction_DragMode> { enum { Value = true }; };
template<> MODELINGTOOLSEDITORMODE_API UEnum* StaticEnum<EModelingSelectionInteraction_DragMode>();

#define FOREACH_ENUM_EMODELINGSELECTIONINTERACTION_LOCALFRAMEMODE(op) \
	op(EModelingSelectionInteraction_LocalFrameMode::FromGeometry) \
	op(EModelingSelectionInteraction_LocalFrameMode::FromObject) 

enum class EModelingSelectionInteraction_LocalFrameMode : uint8;
template<> struct TIsUEnumClass<EModelingSelectionInteraction_LocalFrameMode> { enum { Value = true }; };
template<> MODELINGTOOLSEDITORMODE_API UEnum* StaticEnum<EModelingSelectionInteraction_LocalFrameMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
