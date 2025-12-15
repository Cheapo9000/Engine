// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeEditorObject.h"

#ifdef LANDSCAPEEDITOR_LandscapeEditorObject_generated_h
#error "LandscapeEditorObject.generated.h already included, missing '#pragma once' in LandscapeEditorObject.h"
#endif
#define LANDSCAPEEDITOR_LandscapeEditorObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmoImportLayer *************************************************
struct Z_Construct_UScriptStruct_FGizmoImportLayer_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_157_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoImportLayer_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


struct FGizmoImportLayer;
// ********** End ScriptStruct FGizmoImportLayer ***************************************************

// ********** Begin ScriptStruct FLandscapeImportLayer *********************************************
struct Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FLandscapeImportLayerInfo Super;


struct FLandscapeImportLayer;
// ********** End ScriptStruct FLandscapeImportLayer ***********************************************

// ********** Begin ScriptStruct FLandscapePatternBrushWorldSpaceSettings **************************
struct Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLandscapePatternBrushWorldSpaceSettings;
// ********** End ScriptStruct FLandscapePatternBrushWorldSpaceSettings ****************************

// ********** Begin ScriptStruct FLandscapeTargetLayerAssetFilePath ********************************
struct Z_Construct_UScriptStruct_FLandscapeTargetLayerAssetFilePath_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_267_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeTargetLayerAssetFilePath_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLandscapeTargetLayerAssetFilePath;
// ********** End ScriptStruct FLandscapeTargetLayerAssetFilePath **********************************

// ********** Begin Class ULandscapeEditorObject ***************************************************
struct Z_Construct_UClass_ULandscapeEditorObject_Statics;
LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ULandscapeEditorObject_NoRegister();

#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_297_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeEditorObject(); \
	friend struct ::Z_Construct_UClass_ULandscapeEditorObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEEDITOR_API UClass* ::Z_Construct_UClass_ULandscapeEditorObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeEditorObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), Z_Construct_UClass_ULandscapeEditorObject_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeEditorObject)


#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_297_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEEDITOR_API ULandscapeEditorObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditorObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEEDITOR_API, ULandscapeEditorObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditorObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeEditorObject(ULandscapeEditorObject&&) = delete; \
	ULandscapeEditorObject(const ULandscapeEditorObject&) = delete; \
	LANDSCAPEEDITOR_API virtual ~ULandscapeEditorObject();


#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_294_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_297_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_297_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_297_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeEditorObject;

// ********** End Class ULandscapeEditorObject *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h

// ********** Begin Enum ELandscapeToolFlattenMode *************************************************
#define FOREACH_ENUM_ELANDSCAPETOOLFLATTENMODE(op) \
	op(ELandscapeToolFlattenMode::Invalid) \
	op(ELandscapeToolFlattenMode::Both) \
	op(ELandscapeToolFlattenMode::Raise) \
	op(ELandscapeToolFlattenMode::Lower) \
	op(ELandscapeToolFlattenMode::Interval) \
	op(ELandscapeToolFlattenMode::Terrace) 

enum class ELandscapeToolFlattenMode : int8;
template<> struct TIsUEnumClass<ELandscapeToolFlattenMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeToolFlattenMode>();
// ********** End Enum ELandscapeToolFlattenMode ***************************************************

// ********** Begin Enum ELandscapeToolErosionMode *************************************************
#define FOREACH_ENUM_ELANDSCAPETOOLEROSIONMODE(op) \
	op(ELandscapeToolErosionMode::Invalid) \
	op(ELandscapeToolErosionMode::Both) \
	op(ELandscapeToolErosionMode::Raise) \
	op(ELandscapeToolErosionMode::Lower) 

enum class ELandscapeToolErosionMode : int8;
template<> struct TIsUEnumClass<ELandscapeToolErosionMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeToolErosionMode>();
// ********** End Enum ELandscapeToolErosionMode ***************************************************

// ********** Begin Enum ELandscapeToolHydroErosionMode ********************************************
#define FOREACH_ENUM_ELANDSCAPETOOLHYDROEROSIONMODE(op) \
	op(ELandscapeToolHydroErosionMode::Invalid) \
	op(ELandscapeToolHydroErosionMode::Both) \
	op(ELandscapeToolHydroErosionMode::Positive) 

enum class ELandscapeToolHydroErosionMode : int8;
template<> struct TIsUEnumClass<ELandscapeToolHydroErosionMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeToolHydroErosionMode>();
// ********** End Enum ELandscapeToolHydroErosionMode **********************************************

// ********** Begin Enum ELandscapeToolNoiseMode ***************************************************
#define FOREACH_ENUM_ELANDSCAPETOOLNOISEMODE(op) \
	op(ELandscapeToolNoiseMode::Invalid) \
	op(ELandscapeToolNoiseMode::Both) \
	op(ELandscapeToolNoiseMode::Add) \
	op(ELandscapeToolNoiseMode::Sub) 

enum class ELandscapeToolNoiseMode : int8;
template<> struct TIsUEnumClass<ELandscapeToolNoiseMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeToolNoiseMode>();
// ********** End Enum ELandscapeToolNoiseMode *****************************************************

// ********** Begin Enum ELandscapeToolPasteMode ***************************************************
#define FOREACH_ENUM_ELANDSCAPETOOLPASTEMODE(op) \
	op(ELandscapeToolPasteMode::Invalid) \
	op(ELandscapeToolPasteMode::Both) \
	op(ELandscapeToolPasteMode::Raise) \
	op(ELandscapeToolPasteMode::Lower) 

enum class ELandscapeToolPasteMode : int8;
template<> struct TIsUEnumClass<ELandscapeToolPasteMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeToolPasteMode>();
// ********** End Enum ELandscapeToolPasteMode *****************************************************

// ********** Begin Enum ELandscapeConvertMode *****************************************************
#define FOREACH_ENUM_ELANDSCAPECONVERTMODE(op) \
	op(ELandscapeConvertMode::Invalid) \
	op(ELandscapeConvertMode::Expand) \
	op(ELandscapeConvertMode::Clip) \
	op(ELandscapeConvertMode::Resample) 

enum class ELandscapeConvertMode : int8;
template<> struct TIsUEnumClass<ELandscapeConvertMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeConvertMode>();
// ********** End Enum ELandscapeConvertMode *******************************************************

// ********** Begin Enum ELandscapeTextureColorChannel *********************************************
#define FOREACH_ENUM_ELANDSCAPETEXTURECOLORCHANNEL(op) \
	op(ELandscapeTextureColorChannel::Red) \
	op(ELandscapeTextureColorChannel::Green) \
	op(ELandscapeTextureColorChannel::Blue) \
	op(ELandscapeTextureColorChannel::Alpha) 

enum class ELandscapeTextureColorChannel : int32;
template<> struct TIsUEnumClass<ELandscapeTextureColorChannel> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTextureColorChannel>();
// ********** End Enum ELandscapeTextureColorChannel ***********************************************

// ********** Begin Enum ELandscapeMirrorOperation *************************************************
#define FOREACH_ENUM_ELANDSCAPEMIRROROPERATION(op) \
	op(ELandscapeMirrorOperation::MinusXToPlusX) \
	op(ELandscapeMirrorOperation::PlusXToMinusX) \
	op(ELandscapeMirrorOperation::MinusYToPlusY) \
	op(ELandscapeMirrorOperation::PlusYToMinusY) \
	op(ELandscapeMirrorOperation::RotateMinusXToPlusX) \
	op(ELandscapeMirrorOperation::RotatePlusXToMinusX) \
	op(ELandscapeMirrorOperation::RotateMinusYToPlusY) \
	op(ELandscapeMirrorOperation::RotatePlusYToMinusY) 

enum class ELandscapeMirrorOperation : uint8;
template<> struct TIsUEnumClass<ELandscapeMirrorOperation> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeMirrorOperation>();
// ********** End Enum ELandscapeMirrorOperation ***************************************************

// ********** Begin Enum ELandscapeImportHeightmapError ********************************************
#define FOREACH_ENUM_ELANDSCAPEIMPORTHEIGHTMAPERROR(op) \
	op(ELandscapeImportHeightmapError::None) \
	op(ELandscapeImportHeightmapError::FileNotFound) \
	op(ELandscapeImportHeightmapError::InvalidSize) \
	op(ELandscapeImportHeightmapError::CorruptFile) \
	op(ELandscapeImportHeightmapError::ColorPng) \
	op(ELandscapeImportHeightmapError::LowBitDepth) 

enum class ELandscapeImportHeightmapError;
template<> struct TIsUEnumClass<ELandscapeImportHeightmapError> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeImportHeightmapError>();
// ********** End Enum ELandscapeImportHeightmapError **********************************************

// ********** Begin Enum ELandscapeImportLayerError ************************************************
#define FOREACH_ENUM_ELANDSCAPEIMPORTLAYERERROR(op) \
	op(ELandscapeImportLayerError::None) \
	op(ELandscapeImportLayerError::MissingLayerInfo) \
	op(ELandscapeImportLayerError::FileNotFound) \
	op(ELandscapeImportLayerError::FileSizeMismatch) \
	op(ELandscapeImportLayerError::CorruptFile) \
	op(ELandscapeImportLayerError::ColorPng) 

enum class ELandscapeImportLayerError : uint8;
template<> struct TIsUEnumClass<ELandscapeImportLayerError> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeImportLayerError>();
// ********** End Enum ELandscapeImportLayerError **************************************************

// ********** Begin Enum ELandscapeImportExportMode ************************************************
#define FOREACH_ENUM_ELANDSCAPEIMPORTEXPORTMODE(op) \
	op(ELandscapeImportExportMode::LoadedOnly) \
	op(ELandscapeImportExportMode::All) 

enum class ELandscapeImportExportMode;
template<> struct TIsUEnumClass<ELandscapeImportExportMode> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeImportExportMode>();
// ********** End Enum ELandscapeImportExportMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
