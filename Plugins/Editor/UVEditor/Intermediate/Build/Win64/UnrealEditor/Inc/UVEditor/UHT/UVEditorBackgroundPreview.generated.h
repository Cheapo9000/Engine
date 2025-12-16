// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorBackgroundPreview.h"

#ifdef UVEDITOR_UVEditorBackgroundPreview_generated_h
#error "UVEditorBackgroundPreview.generated.h already included, missing '#pragma once' in UVEditorBackgroundPreview.h"
#endif
#define UVEDITOR_UVEditorBackgroundPreview_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorBackgroundPreviewProperties *************************************
struct Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorBackgroundPreviewProperties(); \
	friend struct ::Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorBackgroundPreviewProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorBackgroundPreviewProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditorBackgroundPreviewProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorBackgroundPreviewProperties(UUVEditorBackgroundPreviewProperties&&) = delete; \
	UUVEditorBackgroundPreviewProperties(const UUVEditorBackgroundPreviewProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditorBackgroundPreviewProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorBackgroundPreviewProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorBackgroundPreviewProperties) \
	UVEDITOR_API virtual ~UUVEditorBackgroundPreviewProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_29_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorBackgroundPreviewProperties;

// ********** End Class UUVEditorBackgroundPreviewProperties ***************************************

// ********** Begin Class UUVEditorBackgroundPreview ***********************************************
struct Z_Construct_UClass_UUVEditorBackgroundPreview_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorBackgroundPreview(); \
	friend struct ::Z_Construct_UClass_UUVEditorBackgroundPreview_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorBackgroundPreview, UPreviewGeometry, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorBackgroundPreview)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditorBackgroundPreview(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorBackgroundPreview(UUVEditorBackgroundPreview&&) = delete; \
	UUVEditorBackgroundPreview(const UUVEditorBackgroundPreview&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditorBackgroundPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorBackgroundPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorBackgroundPreview) \
	UVEDITOR_API virtual ~UUVEditorBackgroundPreview();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_61_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorBackgroundPreview;

// ********** End Class UUVEditorBackgroundPreview *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h

// ********** Begin Enum EUVEditorBackgroundSourceType *********************************************
#define FOREACH_ENUM_EUVEDITORBACKGROUNDSOURCETYPE(op) \
	op(EUVEditorBackgroundSourceType::Checkerboard) \
	op(EUVEditorBackgroundSourceType::Texture) \
	op(EUVEditorBackgroundSourceType::Material) 

enum class EUVEditorBackgroundSourceType;
template<> struct TIsUEnumClass<EUVEditorBackgroundSourceType> { enum { Value = true }; };
template<> UVEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVEditorBackgroundSourceType>();
// ********** End Enum EUVEditorBackgroundSourceType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
