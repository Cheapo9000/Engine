// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styles/Text3DStyleBase.h"

#ifdef TEXT3D_Text3DStyleBase_generated_h
#error "Text3DStyleBase.generated.h already included, missing '#pragma once' in Text3DStyleBase.h"
#endif
#define TEXT3D_Text3DStyleBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
struct FLinearColor;

// ********** Begin Class UText3DStyleBase *********************************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTypefaceNames); \
	DECLARE_FUNCTION(execGetFrontColor); \
	DECLARE_FUNCTION(execSetFrontColor); \
	DECLARE_FUNCTION(execGetOverrideFrontColor); \
	DECLARE_FUNCTION(execSetOverrideFrontColor); \
	DECLARE_FUNCTION(execGetFontSize); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execGetOverrideFontSize); \
	DECLARE_FUNCTION(execSetOverrideFontSize); \
	DECLARE_FUNCTION(execGetFontTypeface); \
	DECLARE_FUNCTION(execSetFontTypeface); \
	DECLARE_FUNCTION(execGetFont); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execGetOverrideFont); \
	DECLARE_FUNCTION(execSetOverrideFont); \
	DECLARE_FUNCTION(execGetStyleName); \
	DECLARE_FUNCTION(execSetStyleName);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_ACCESSORS \
static void GetStyleName_WrapperImpl(const void* Object, void* OutValue); \
static void SetStyleName_WrapperImpl(void* Object, const void* InValue); \
static void GetbOverrideFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverrideFont_WrapperImpl(void* Object, const void* InValue); \
static void GetFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetFont_WrapperImpl(void* Object, const void* InValue); \
static void GetFontTypeface_WrapperImpl(const void* Object, void* OutValue); \
static void SetFontTypeface_WrapperImpl(void* Object, const void* InValue); \
static void GetbOverrideFontSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverrideFontSize_WrapperImpl(void* Object, const void* InValue); \
static void GetFontSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetFontSize_WrapperImpl(void* Object, const void* InValue); \
static void GetbOverrideFrontColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverrideFrontColor_WrapperImpl(void* Object, const void* InValue); \
static void GetFrontColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrontColor_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DStyleBase_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DStyleBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DStyleBase(); \
	friend struct ::Z_Construct_UClass_UText3DStyleBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DStyleBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DStyleBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DStyleBase_NoRegister) \
	DECLARE_SERIALIZER(UText3DStyleBase)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DStyleBase(UText3DStyleBase&&) = delete; \
	UText3DStyleBase(const UText3DStyleBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DStyleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DStyleBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DStyleBase) \
	TEXT3D_API virtual ~UText3DStyleBase();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DStyleBase;

// ********** End Class UText3DStyleBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Styles_Text3DStyleBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
