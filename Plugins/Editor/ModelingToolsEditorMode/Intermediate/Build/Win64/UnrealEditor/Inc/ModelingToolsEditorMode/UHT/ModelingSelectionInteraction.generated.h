// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingSelectionInteraction.h"

#ifdef MODELINGTOOLSEDITORMODE_ModelingSelectionInteraction_generated_h
#error "ModelingSelectionInteraction.generated.h already included, missing '#pragma once' in ModelingSelectionInteraction.h"
#endif
#define MODELINGTOOLSEDITORMODE_ModelingSelectionInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModelingSelectionInteraction ********************************************
struct Z_Construct_UClass_UModelingSelectionInteraction_Statics;
MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingSelectionInteraction_NoRegister();

#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingSelectionInteraction(); \
	friend struct ::Z_Construct_UClass_UModelingSelectionInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGTOOLSEDITORMODE_API UClass* ::Z_Construct_UClass_UModelingSelectionInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingSelectionInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingToolsEditorMode"), Z_Construct_UClass_UModelingSelectionInteraction_NoRegister) \
	DECLARE_SERIALIZER(UModelingSelectionInteraction) \
	virtual UObject* _getUObject() const override { return const_cast<UModelingSelectionInteraction*>(this); }


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelingSelectionInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingSelectionInteraction(UModelingSelectionInteraction&&) = delete; \
	UModelingSelectionInteraction(const UModelingSelectionInteraction&) = delete; \
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


class UModelingSelectionInteraction;

// ********** End Class UModelingSelectionInteraction **********************************************

// ********** Begin Class UPathSelectionInteraction ************************************************
struct Z_Construct_UClass_UPathSelectionInteraction_Statics;
MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UPathSelectionInteraction_NoRegister();

#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathSelectionInteraction(); \
	friend struct ::Z_Construct_UClass_UPathSelectionInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGTOOLSEDITORMODE_API UClass* ::Z_Construct_UClass_UPathSelectionInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathSelectionInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingToolsEditorMode"), Z_Construct_UClass_UPathSelectionInteraction_NoRegister) \
	DECLARE_SERIALIZER(UPathSelectionInteraction)


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathSelectionInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathSelectionInteraction(UPathSelectionInteraction&&) = delete; \
	UPathSelectionInteraction(const UPathSelectionInteraction&) = delete; \
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


class UPathSelectionInteraction;

// ********** End Class UPathSelectionInteraction **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h

// ********** Begin Enum EModelingSelectionInteraction_DragMode ************************************
#define FOREACH_ENUM_EMODELINGSELECTIONINTERACTION_DRAGMODE(op) \
	op(EModelingSelectionInteraction_DragMode::NoDragInteraction) \
	op(EModelingSelectionInteraction_DragMode::PathInteraction) \
	op(EModelingSelectionInteraction_DragMode::RectangleMarqueeInteraction) 

enum class EModelingSelectionInteraction_DragMode : uint8;
template<> struct TIsUEnumClass<EModelingSelectionInteraction_DragMode> { enum { Value = true }; };
template<> MODELINGTOOLSEDITORMODE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModelingSelectionInteraction_DragMode>();
// ********** End Enum EModelingSelectionInteraction_DragMode **************************************

// ********** Begin Enum EModelingSelectionInteraction_LocalFrameMode ******************************
#define FOREACH_ENUM_EMODELINGSELECTIONINTERACTION_LOCALFRAMEMODE(op) \
	op(EModelingSelectionInteraction_LocalFrameMode::FromGeometry) \
	op(EModelingSelectionInteraction_LocalFrameMode::FromObject) 

enum class EModelingSelectionInteraction_LocalFrameMode : uint8;
template<> struct TIsUEnumClass<EModelingSelectionInteraction_LocalFrameMode> { enum { Value = true }; };
template<> MODELINGTOOLSEDITORMODE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModelingSelectionInteraction_LocalFrameMode>();
// ********** End Enum EModelingSelectionInteraction_LocalFrameMode ********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
