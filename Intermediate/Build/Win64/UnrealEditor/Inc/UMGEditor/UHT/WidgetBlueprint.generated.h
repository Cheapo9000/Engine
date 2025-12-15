// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetBlueprint.h"

#ifdef UMGEDITOR_WidgetBlueprint_generated_h
#error "WidgetBlueprint.generated.h already included, missing '#pragma once' in WidgetBlueprint.h"
#endif
#define UMGEDITOR_WidgetBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEditorPropertyPathSegment ****************************************
struct Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FEditorPropertyPathSegment;
// ********** End ScriptStruct FEditorPropertyPathSegment ******************************************

// ********** Begin ScriptStruct FEditorPropertyPath ***********************************************
struct Z_Construct_UScriptStruct_FEditorPropertyPath_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorPropertyPath_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FEditorPropertyPath;
// ********** End ScriptStruct FEditorPropertyPath *************************************************

// ********** Begin ScriptStruct FDelegateEditorBinding ********************************************
struct Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FDelegateEditorBinding;
// ********** End ScriptStruct FDelegateEditorBinding **********************************************

// ********** Begin Class UWidgetBlueprint *********************************************************
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprint, UMGEDITOR_API)


struct Z_Construct_UClass_UWidgetBlueprint_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprint(); \
	friend struct ::Z_Construct_UClass_UWidgetBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetBlueprint, UBaseWidgetBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UWidgetBlueprint) \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API UWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetBlueprint(UWidgetBlueprint&&) = delete; \
	UWidgetBlueprint(const UWidgetBlueprint&) = delete; \
	UMGEDITOR_API virtual ~UWidgetBlueprint();


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_219_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_222_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetBlueprint;

// ********** End Class UWidgetBlueprint ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h

// ********** Begin Enum EWidgetSupportsDynamicCreation ********************************************
#define FOREACH_ENUM_EWIDGETSUPPORTSDYNAMICCREATION(op) \
	op(EWidgetSupportsDynamicCreation::Default) \
	op(EWidgetSupportsDynamicCreation::Yes) \
	op(EWidgetSupportsDynamicCreation::No) 

enum class EWidgetSupportsDynamicCreation : uint8;
template<> struct TIsUEnumClass<EWidgetSupportsDynamicCreation> { enum { Value = true }; };
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetSupportsDynamicCreation>();
// ********** End Enum EWidgetSupportsDynamicCreation **********************************************

// ********** Begin Enum EThumbnailPreviewSizeMode *************************************************
#define FOREACH_ENUM_ETHUMBNAILPREVIEWSIZEMODE(op) \
	op(EThumbnailPreviewSizeMode::MatchDesignerMode) \
	op(EThumbnailPreviewSizeMode::FillScreen) \
	op(EThumbnailPreviewSizeMode::Custom) \
	op(EThumbnailPreviewSizeMode::Desired) 

enum class EThumbnailPreviewSizeMode : uint8;
template<> struct TIsUEnumClass<EThumbnailPreviewSizeMode> { enum { Value = true }; };
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EThumbnailPreviewSizeMode>();
// ********** End Enum EThumbnailPreviewSizeMode ***************************************************

// ********** Begin Enum EWidgetCompileTimeTickPrediction ******************************************
#define FOREACH_ENUM_EWIDGETCOMPILETIMETICKPREDICTION(op) \
	op(EWidgetCompileTimeTickPrediction::WontTick) \
	op(EWidgetCompileTimeTickPrediction::OnDemand) \
	op(EWidgetCompileTimeTickPrediction::WillTick) 

enum class EWidgetCompileTimeTickPrediction : uint8;
template<> struct TIsUEnumClass<EWidgetCompileTimeTickPrediction> { enum { Value = true }; };
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetCompileTimeTickPrediction>();
// ********** End Enum EWidgetCompileTimeTickPrediction ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
