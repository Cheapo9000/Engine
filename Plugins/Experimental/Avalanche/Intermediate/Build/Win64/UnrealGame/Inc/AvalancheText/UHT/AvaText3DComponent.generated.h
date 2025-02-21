// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaText3DComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture2D;
enum class EAvaMaterialMaskOrientation : uint8;
enum class EAvaTextColoringStyle : uint8;
enum class EAvaTextTranslucency : uint8;
struct FAvaFont;
struct FAvaLinearGradientSettings;
struct FAvaTextAlignment;
struct FLinearColor;
#ifdef AVALANCHETEXT_AvaText3DComponent_generated_h
#error "AvaText3DComponent.generated.h already included, missing '#pragma once' in AvaText3DComponent.h"
#endif
#define AVALANCHETEXT_AvaText3DComponent_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetIsUnlit); \
	DECLARE_FUNCTION(execSetMaskRotation); \
	DECLARE_FUNCTION(execSetMaskOffset); \
	DECLARE_FUNCTION(execSetMaskSmoothness); \
	DECLARE_FUNCTION(execSetMaskOrientation); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetTranslucencyStyle); \
	DECLARE_FUNCTION(execSetCustomMaterial); \
	DECLARE_FUNCTION(execSetTiling); \
	DECLARE_FUNCTION(execSetMainTexture); \
	DECLARE_FUNCTION(execSetGradientColors); \
	DECLARE_FUNCTION(execSetGradientSettings); \
	DECLARE_FUNCTION(execSetBevelColor); \
	DECLARE_FUNCTION(execSetExtrudeColor); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetColoringStyle); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetMotionDesignFont); \
	DECLARE_FUNCTION(execSetEnforceUpperCase);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_ACCESSORS \
static void GetbEnforceUpperCase_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnforceUpperCase_WrapperImpl(void* Object, const void* InValue); \
static void GetMotionDesignFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetMotionDesignFont_WrapperImpl(void* Object, const void* InValue); \
static void GetAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetColoringStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetColoringStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetColor_WrapperImpl(void* Object, const void* InValue); \
static void GetExtrudeColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrudeColor_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelColor_WrapperImpl(void* Object, const void* InValue); \
static void GetGradientSettings_WrapperImpl(const void* Object, void* OutValue); \
static void SetGradientSettings_WrapperImpl(void* Object, const void* InValue); \
static void GetMainTexture_WrapperImpl(const void* Object, void* OutValue); \
static void SetMainTexture_WrapperImpl(void* Object, const void* InValue); \
static void GetTiling_WrapperImpl(const void* Object, void* OutValue); \
static void SetTiling_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetTranslucencyStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetTranslucencyStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskOrientation_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskSmoothness_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskSmoothness_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetMaskRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsUnlit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsUnlit_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaText3DComponent(); \
	friend struct Z_Construct_UClass_UAvaText3DComponent_Statics; \
public: \
	DECLARE_CLASS(UAvaText3DComponent, UText3DComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheText"), AVALANCHETEXT_API) \
	DECLARE_SERIALIZER(UAvaText3DComponent)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaText3DComponent(UAvaText3DComponent&&); \
	UAvaText3DComponent(const UAvaText3DComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETEXT_API, UAvaText3DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaText3DComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaText3DComponent) \
	AVALANCHETEXT_API virtual ~UAvaText3DComponent();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETEXT_API UClass* StaticClass<class UAvaText3DComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
