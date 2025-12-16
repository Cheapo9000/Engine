// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DDefaultRenderingExtension.h"

#ifdef TEXT3D_Text3DDefaultRenderingExtension_generated_h
#error "Text3DDefaultRenderingExtension.generated.h already included, missing '#pragma once' in Text3DDefaultRenderingExtension.h"
#endif
#define TEXT3D_Text3DDefaultRenderingExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DDefaultRenderingExtension *****************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHoldout); \
	DECLARE_FUNCTION(execGetHoldout); \
	DECLARE_FUNCTION(execSetAffectIndirectLightingWhileHidden); \
	DECLARE_FUNCTION(execGetAffectIndirectLightingWhileHidden); \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting); \
	DECLARE_FUNCTION(execGetAffectDynamicIndirectLighting); \
	DECLARE_FUNCTION(execSetCastHiddenShadow); \
	DECLARE_FUNCTION(execGetCastHiddenShadow); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execGetCastShadow);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_ACCESSORS \
static void GetbCastShadow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCastShadow_WrapperImpl(void* Object, const void* InValue); \
static void GetbCastHiddenShadow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCastHiddenShadow_WrapperImpl(void* Object, const void* InValue); \
static void GetbAffectDynamicIndirectLighting_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAffectDynamicIndirectLighting_WrapperImpl(void* Object, const void* InValue); \
static void GetbAffectIndirectLightingWhileHidden_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAffectIndirectLightingWhileHidden_WrapperImpl(void* Object, const void* InValue); \
static void GetbHoldout_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHoldout_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DDefaultRenderingExtension_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDefaultRenderingExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDefaultRenderingExtension(); \
	friend struct ::Z_Construct_UClass_UText3DDefaultRenderingExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDefaultRenderingExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDefaultRenderingExtension, UText3DRenderingExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDefaultRenderingExtension_NoRegister) \
	DECLARE_SERIALIZER(UText3DDefaultRenderingExtension)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DDefaultRenderingExtension(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDefaultRenderingExtension(UText3DDefaultRenderingExtension&&) = delete; \
	UText3DDefaultRenderingExtension(const UText3DDefaultRenderingExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DDefaultRenderingExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDefaultRenderingExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DDefaultRenderingExtension) \
	TEXT3D_API virtual ~UText3DDefaultRenderingExtension();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDefaultRenderingExtension;

// ********** End Class UText3DDefaultRenderingExtension *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultRenderingExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
