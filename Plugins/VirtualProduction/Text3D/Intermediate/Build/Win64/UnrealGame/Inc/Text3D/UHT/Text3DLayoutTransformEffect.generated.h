// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DLayoutTransformEffect.h"

#ifdef TEXT3D_Text3DLayoutTransformEffect_generated_h
#error "Text3DLayoutTransformEffect.generated.h already included, missing '#pragma once' in Text3DLayoutTransformEffect.h"
#endif
#define TEXT3D_Text3DLayoutTransformEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
enum class EText3DCharacterEffectOrder : uint8;

// ********** Begin Class UText3DLayoutTransformEffect *********************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScaleEaseCurve); \
	DECLARE_FUNCTION(execSetScaleEnd); \
	DECLARE_FUNCTION(execSetScaleBegin); \
	DECLARE_FUNCTION(execSetScaleOrder); \
	DECLARE_FUNCTION(execSetScaleProgress); \
	DECLARE_FUNCTION(execSetScaleEnabled); \
	DECLARE_FUNCTION(execSetRotationEaseCurve); \
	DECLARE_FUNCTION(execSetRotationEnd); \
	DECLARE_FUNCTION(execSetRotationBegin); \
	DECLARE_FUNCTION(execSetRotationOrder); \
	DECLARE_FUNCTION(execSetRotationProgress); \
	DECLARE_FUNCTION(execSetRotationEnabled); \
	DECLARE_FUNCTION(execSetLocationEaseCurve); \
	DECLARE_FUNCTION(execSetLocationEnd); \
	DECLARE_FUNCTION(execSetLocationBegin); \
	DECLARE_FUNCTION(execSetLocationOrder); \
	DECLARE_FUNCTION(execSetLocationProgress); \
	DECLARE_FUNCTION(execSetLocationEnabled);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_ACCESSORS \
static void GetbLocationEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbLocationEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetLocationProgress_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationProgress_WrapperImpl(void* Object, const void* InValue); \
static void GetLocationOrder_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationOrder_WrapperImpl(void* Object, const void* InValue); \
static void GetLocationBegin_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationBegin_WrapperImpl(void* Object, const void* InValue); \
static void GetLocationEnd_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationEnd_WrapperImpl(void* Object, const void* InValue); \
static void GetLocationEaseCurve_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationEaseCurve_WrapperImpl(void* Object, const void* InValue); \
static void GetbRotationEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRotationEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationProgress_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationProgress_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationOrder_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationOrder_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationBegin_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationBegin_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationEnd_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationEnd_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationEaseCurve_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationEaseCurve_WrapperImpl(void* Object, const void* InValue); \
static void GetbScaleEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbScaleEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleProgress_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleProgress_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleOrder_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleOrder_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleBegin_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleBegin_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleEnd_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleEnd_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleEaseCurve_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleEaseCurve_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DLayoutTransformEffect_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DLayoutTransformEffect_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DLayoutTransformEffect(); \
	friend struct ::Z_Construct_UClass_UText3DLayoutTransformEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DLayoutTransformEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DLayoutTransformEffect, UText3DLayoutEffectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DLayoutTransformEffect_NoRegister) \
	DECLARE_SERIALIZER(UText3DLayoutTransformEffect)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DLayoutTransformEffect(UText3DLayoutTransformEffect&&) = delete; \
	UText3DLayoutTransformEffect(const UText3DLayoutTransformEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DLayoutTransformEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DLayoutTransformEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DLayoutTransformEffect) \
	TEXT3D_API virtual ~UText3DLayoutTransformEffect();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DLayoutTransformEffect;

// ********** End Class UText3DLayoutTransformEffect ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DLayoutTransformEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
