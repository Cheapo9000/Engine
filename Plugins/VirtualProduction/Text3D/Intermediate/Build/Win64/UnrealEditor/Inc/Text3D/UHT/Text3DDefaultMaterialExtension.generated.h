// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DDefaultMaterialExtension.h"

#ifdef TEXT3D_Text3DDefaultMaterialExtension_generated_h
#error "Text3DDefaultMaterialExtension.generated.h already included, missing '#pragma once' in Text3DDefaultMaterialExtension.h"
#endif
#define TEXT3D_Text3DDefaultMaterialExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture2D;
enum class EText3DMaterialBlendMode : uint8;
enum class EText3DMaterialStyle : uint8;
struct FLinearColor;

// ********** Begin Class UText3DDefaultMaterialExtension ******************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBackMaterial); \
	DECLARE_FUNCTION(execSetBackMaterial); \
	DECLARE_FUNCTION(execGetExtrudeMaterial); \
	DECLARE_FUNCTION(execSetExtrudeMaterial); \
	DECLARE_FUNCTION(execGetBevelMaterial); \
	DECLARE_FUNCTION(execSetBevelMaterial); \
	DECLARE_FUNCTION(execGetFrontMaterial); \
	DECLARE_FUNCTION(execSetFrontMaterial); \
	DECLARE_FUNCTION(execGetUseSingleMaterial); \
	DECLARE_FUNCTION(execSetUseSingleMaterial); \
	DECLARE_FUNCTION(execGetMaskRotation); \
	DECLARE_FUNCTION(execSetMaskRotation); \
	DECLARE_FUNCTION(execGetMaskSmoothness); \
	DECLARE_FUNCTION(execSetMaskSmoothness); \
	DECLARE_FUNCTION(execGetMaskOffset); \
	DECLARE_FUNCTION(execSetMaskOffset); \
	DECLARE_FUNCTION(execGetUseMask); \
	DECLARE_FUNCTION(execSetUseMask); \
	DECLARE_FUNCTION(execGetOpacity); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execGetIsUnlit); \
	DECLARE_FUNCTION(execSetIsUnlit); \
	DECLARE_FUNCTION(execGetBlendMode); \
	DECLARE_FUNCTION(execSetBlendMode); \
	DECLARE_FUNCTION(execGetTextureTiling); \
	DECLARE_FUNCTION(execSetTextureTiling); \
	DECLARE_FUNCTION(execGetTextureAsset); \
	DECLARE_FUNCTION(execSetTextureAsset); \
	DECLARE_FUNCTION(execGetGradientRotation); \
	DECLARE_FUNCTION(execSetGradientRotation); \
	DECLARE_FUNCTION(execGetGradientOffset); \
	DECLARE_FUNCTION(execSetGradientOffset); \
	DECLARE_FUNCTION(execGetGradientSmoothness); \
	DECLARE_FUNCTION(execSetGradientSmoothness); \
	DECLARE_FUNCTION(execGetGradientColorB); \
	DECLARE_FUNCTION(execSetGradientColorB); \
	DECLARE_FUNCTION(execGetGradientColorA); \
	DECLARE_FUNCTION(execSetGradientColorA); \
	DECLARE_FUNCTION(execGetBevelColor); \
	DECLARE_FUNCTION(execSetBevelColor); \
	DECLARE_FUNCTION(execGetExtrudeColor); \
	DECLARE_FUNCTION(execSetExtrudeColor); \
	DECLARE_FUNCTION(execGetBackColor); \
	DECLARE_FUNCTION(execSetBackColor); \
	DECLARE_FUNCTION(execGetFrontColor); \
	DECLARE_FUNCTION(execSetFrontColor); \
	DECLARE_FUNCTION(execGetStyle); \
	DECLARE_FUNCTION(execSetStyle);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_ACCESSORS \
static void GetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetFrontColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrontColor_WrapperImpl(void* Object, const void* InValue); \
static void GetBackColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBackColor_WrapperImpl(void* Object, const void* InValue); \
static void GetExtrudeColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrudeColor_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelColor_WrapperImpl(void* Object, const void* InValue); \
static void GetGradientColorA_WrapperImpl(const void* Object, void* OutValue); \
static void SetGradientColorA_WrapperImpl(void* Object, const void* InValue); \
static void GetGradientColorB_WrapperImpl(const void* Object, void* OutValue); \
static void SetGradientColorB_WrapperImpl(void* Object, const void* InValue); \
static void GetGradientSmoothness_WrapperImpl(const void* Object, void* OutValue); \
static void SetGradientSmoothness_WrapperImpl(void* Object, const void* InValue); \
static void GetGradientOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetGradientOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetGradientRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetGradientRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureAsset_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureTiling_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureTiling_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsUnlit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsUnlit_WrapperImpl(void* Object, const void* InValue); \
static void GetBlendMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlendMode_WrapperImpl(void* Object, const void* InValue); \
static void GetOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseMask_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseMask_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskSmoothness_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskSmoothness_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseSingleMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseSingleMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetFrontMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrontMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetExtrudeMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrudeMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetBackMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetBackMaterial_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DDefaultMaterialExtension_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDefaultMaterialExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDefaultMaterialExtension(); \
	friend struct ::Z_Construct_UClass_UText3DDefaultMaterialExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDefaultMaterialExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDefaultMaterialExtension, UText3DMaterialExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDefaultMaterialExtension_NoRegister) \
	DECLARE_SERIALIZER(UText3DDefaultMaterialExtension)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DDefaultMaterialExtension(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDefaultMaterialExtension(UText3DDefaultMaterialExtension&&) = delete; \
	UText3DDefaultMaterialExtension(const UText3DDefaultMaterialExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DDefaultMaterialExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDefaultMaterialExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DDefaultMaterialExtension) \
	TEXT3D_API virtual ~UText3DDefaultMaterialExtension();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDefaultMaterialExtension;

// ********** End Class UText3DDefaultMaterialExtension ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultMaterialExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
