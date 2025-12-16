// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DDefaultLayoutExtension.h"

#ifdef TEXT3D_Text3DDefaultLayoutExtension_generated_h
#error "Text3DDefaultLayoutExtension.generated.h already included, missing '#pragma once' in Text3DDefaultLayoutExtension.h"
#endif
#define TEXT3D_Text3DDefaultLayoutExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EText3DHorizontalTextAlignment : uint8;
enum class EText3DMaxWidthHandling : uint8;
enum class EText3DVerticalTextAlignment : uint8;

// ********** Begin Class UText3DDefaultLayoutExtension ********************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScaleProportionally); \
	DECLARE_FUNCTION(execGetScalesProportionally); \
	DECLARE_FUNCTION(execSetMaxHeight); \
	DECLARE_FUNCTION(execGetMaxHeight); \
	DECLARE_FUNCTION(execSetUseMaxHeight); \
	DECLARE_FUNCTION(execGetUseMaxHeight); \
	DECLARE_FUNCTION(execSetMaxWidthBehavior); \
	DECLARE_FUNCTION(execGetMaxWidthBehavior); \
	DECLARE_FUNCTION(execSetMaxWidth); \
	DECLARE_FUNCTION(execGetMaxWidth); \
	DECLARE_FUNCTION(execSetUseMaxWidth); \
	DECLARE_FUNCTION(execGetUseMaxWidth); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execGetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execGetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetWordSpacing); \
	DECLARE_FUNCTION(execGetWordSpacing); \
	DECLARE_FUNCTION(execSetLineSpacing); \
	DECLARE_FUNCTION(execGetLineSpacing); \
	DECLARE_FUNCTION(execSetTracking); \
	DECLARE_FUNCTION(execGetTracking);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_ACCESSORS \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetTracking_WrapperImpl(const void* Object, void* OutValue); \
static void SetTracking_WrapperImpl(void* Object, const void* InValue); \
static void GetLineSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineSpacing_WrapperImpl(void* Object, const void* InValue); \
static void SetWordSpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxWidthBehavior_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxWidthBehavior_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseMaxWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseMaxWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseMaxHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseMaxHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetbScaleProportionally_WrapperImpl(const void* Object, void* OutValue); \
static void SetbScaleProportionally_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DDefaultLayoutExtension_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDefaultLayoutExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDefaultLayoutExtension(); \
	friend struct ::Z_Construct_UClass_UText3DDefaultLayoutExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDefaultLayoutExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDefaultLayoutExtension, UText3DLayoutExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDefaultLayoutExtension_NoRegister) \
	DECLARE_SERIALIZER(UText3DDefaultLayoutExtension)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DDefaultLayoutExtension(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDefaultLayoutExtension(UText3DDefaultLayoutExtension&&) = delete; \
	UText3DDefaultLayoutExtension(const UText3DDefaultLayoutExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DDefaultLayoutExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDefaultLayoutExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DDefaultLayoutExtension) \
	TEXT3D_API virtual ~UText3DDefaultLayoutExtension();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDefaultLayoutExtension;

// ********** End Class UText3DDefaultLayoutExtension **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultLayoutExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
