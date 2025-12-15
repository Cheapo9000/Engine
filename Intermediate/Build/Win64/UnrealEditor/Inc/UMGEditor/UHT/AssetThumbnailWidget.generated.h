// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AssetThumbnailWidget.h"

#ifdef UMGEDITOR_AssetThumbnailWidget_generated_h
#error "AssetThumbnailWidget.generated.h already included, missing '#pragma once' in AssetThumbnailWidget.h"
#endif
#define UMGEDITOR_AssetThumbnailWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAssetData;
struct FAssetThumbnailWidgetSettings;

// ********** Begin Delegate FGetHighlightTextDelegate *********************************************
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_33_DELEGATE \
UMGEDITOR_API FText FGetHighlightTextDelegate_DelegateWrapper(const FScriptDelegate& GetHighlightTextDelegate);


// ********** End Delegate FGetHighlightTextDelegate ***********************************************

// ********** Begin ScriptStruct FAssetThumbnailWidgetSettings *************************************
struct Z_Construct_UScriptStruct_FAssetThumbnailWidgetSettings_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetThumbnailWidgetSettings_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAssetThumbnailWidgetSettings;
// ********** End ScriptStruct FAssetThumbnailWidgetSettings ***************************************

// ********** Begin Class UAssetThumbnailWidget ****************************************************
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execSetAssetByObject); \
	DECLARE_FUNCTION(execSetAsset); \
	DECLARE_FUNCTION(execSetThumbnailSettings);


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_ACCESSORS \
static void GetThumbnailSettings_WrapperImpl(const void* Object, void* OutValue); \
static void SetThumbnailSettings_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAssetThumbnailWidget_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UAssetThumbnailWidget_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetThumbnailWidget(); \
	friend struct ::Z_Construct_UClass_UAssetThumbnailWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UAssetThumbnailWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetThumbnailWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UAssetThumbnailWidget_NoRegister) \
	DECLARE_SERIALIZER(UAssetThumbnailWidget)


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API UAssetThumbnailWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetThumbnailWidget(UAssetThumbnailWidget&&) = delete; \
	UAssetThumbnailWidget(const UAssetThumbnailWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UAssetThumbnailWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetThumbnailWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetThumbnailWidget) \
	UMGEDITOR_API virtual ~UAssetThumbnailWidget();


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_91_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_ACCESSORS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetThumbnailWidget;

// ********** End Class UAssetThumbnailWidget ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_Components_AssetThumbnailWidget_h

// ********** Begin Enum EThumbnailLabelType_BlueprintType *****************************************
#define FOREACH_ENUM_ETHUMBNAILLABELTYPE_BLUEPRINTTYPE(op) \
	op(EThumbnailLabelType_BlueprintType::ClassName) \
	op(EThumbnailLabelType_BlueprintType::AssetName) \
	op(EThumbnailLabelType_BlueprintType::NoLabel) 

enum class EThumbnailLabelType_BlueprintType : uint8;
template<> struct TIsUEnumClass<EThumbnailLabelType_BlueprintType> { enum { Value = true }; };
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EThumbnailLabelType_BlueprintType>();
// ********** End Enum EThumbnailLabelType_BlueprintType *******************************************

// ********** Begin Enum EThumbnailColorStripOrientation_BlueprintType *****************************
#define FOREACH_ENUM_ETHUMBNAILCOLORSTRIPORIENTATION_BLUEPRINTTYPE(op) \
	op(EThumbnailColorStripOrientation_BlueprintType::HorizontalBottomEdge) \
	op(EThumbnailColorStripOrientation_BlueprintType::VerticalRightEdge) 

enum class EThumbnailColorStripOrientation_BlueprintType : uint8;
template<> struct TIsUEnumClass<EThumbnailColorStripOrientation_BlueprintType> { enum { Value = true }; };
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EThumbnailColorStripOrientation_BlueprintType>();
// ********** End Enum EThumbnailColorStripOrientation_BlueprintType *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
