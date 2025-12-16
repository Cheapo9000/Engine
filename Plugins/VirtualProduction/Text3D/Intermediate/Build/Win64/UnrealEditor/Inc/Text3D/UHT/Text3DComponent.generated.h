// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Text3DComponent.h"

#ifdef TEXT3D_Text3DComponent_generated_h
#error "Text3DComponent.generated.h already included, missing '#pragma once' in Text3DComponent.h"
#endif
#define TEXT3D_Text3DComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UFont;
class UMaterialInterface;
class UText3DGeometryExtensionBase;
class UText3DLayoutEffectBase;
class UText3DLayoutExtensionBase;
class UText3DMaterialExtensionBase;
class UText3DRendererBase;
class UText3DRenderingExtensionBase;
class UText3DStyleExtensionBase;
class UText3DTokenExtensionBase;
enum class EText3DBevelType : uint8;
enum class EText3DHorizontalTextAlignment : uint8;
enum class EText3DMaxWidthHandling : uint8;
enum class EText3DVerticalTextAlignment : uint8;

// ********** Begin Delegate FTextGenerated ********************************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_42_DELEGATE \
static TEXT3D_API void FTextGenerated_DelegateWrapper(const FMulticastScriptDelegate& TextGenerated);


// ********** End Delegate FTextGenerated **********************************************************

// ********** Begin Class UText3DComponent *********************************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTypefaceNames); \
	DECLARE_FUNCTION(execGetLayoutEffects); \
	DECLARE_FUNCTION(execGetRenderingExtension); \
	DECLARE_FUNCTION(execGetGeometryExtension); \
	DECLARE_FUNCTION(execGetMaterialExtension); \
	DECLARE_FUNCTION(execGetLayoutExtension); \
	DECLARE_FUNCTION(execGetStyleExtension); \
	DECLARE_FUNCTION(execGetTokenExtension); \
	DECLARE_FUNCTION(execGetTextRendererClass); \
	DECLARE_FUNCTION(execSetTextRendererClass); \
	DECLARE_FUNCTION(execSetTypeface); \
	DECLARE_FUNCTION(execGetTypeface); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetScaleProportionally); \
	DECLARE_FUNCTION(execSetMaxHeight); \
	DECLARE_FUNCTION(execSetHasMaxHeight); \
	DECLARE_FUNCTION(execSetMaxWidthHandling); \
	DECLARE_FUNCTION(execSetMaxWidth); \
	DECLARE_FUNCTION(execSetHasMaxWidth); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetWordSpacing); \
	DECLARE_FUNCTION(execSetLineSpacing); \
	DECLARE_FUNCTION(execSetKerning); \
	DECLARE_FUNCTION(execSetBackMaterial); \
	DECLARE_FUNCTION(execSetExtrudeMaterial); \
	DECLARE_FUNCTION(execSetBevelMaterial); \
	DECLARE_FUNCTION(execSetFrontMaterial); \
	DECLARE_FUNCTION(execSetBevelSegments); \
	DECLARE_FUNCTION(execSetBevelType); \
	DECLARE_FUNCTION(execSetBevel); \
	DECLARE_FUNCTION(execSetExtrude); \
	DECLARE_FUNCTION(execSetOutlineExpand); \
	DECLARE_FUNCTION(execSetHasOutline); \
	DECLARE_FUNCTION(execGetFontSize); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execGetFont); \
	DECLARE_FUNCTION(execGetEnforceUpperCase); \
	DECLARE_FUNCTION(execSetEnforceUpperCase); \
	DECLARE_FUNCTION(execGetFormattedText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execOpenProjectSettings); \
	DECLARE_FUNCTION(execForceUpdateText);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ACCESSORS \
static void GetTextRendererClass_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextRendererClass_WrapperImpl(void* Object, const void* InValue); \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetFont_WrapperImpl(void* Object, const void* InValue); \
static void GetTypeface_WrapperImpl(const void* Object, void* OutValue); \
static void SetTypeface_WrapperImpl(void* Object, const void* InValue); \
static void GetFontSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetFontSize_WrapperImpl(void* Object, const void* InValue); \
static void GetbEnforceUpperCase_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnforceUpperCase_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UText3DComponent, TEXT3D_API)


struct Z_Construct_UClass_UText3DComponent_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DComponent(); \
	friend struct ::Z_Construct_UClass_UText3DComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DComponent_NoRegister) \
	DECLARE_SERIALIZER(UText3DComponent) \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DComponent(UText3DComponent&&) = delete; \
	UText3DComponent(const UText3DComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DComponent) \
	TEXT3D_API virtual ~UText3DComponent();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_28_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DComponent;

// ********** End Class UText3DComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
