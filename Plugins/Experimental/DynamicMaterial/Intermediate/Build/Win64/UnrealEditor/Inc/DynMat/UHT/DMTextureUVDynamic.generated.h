// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMTextureUVDynamic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMTextureUV;
#ifdef DYNAMICMATERIAL_DMTextureUVDynamic_generated_h
#error "DMTextureUVDynamic.generated.h already included, missing '#pragma once' in DMTextureUVDynamic.h"
#endif
#define DYNAMICMATERIAL_DMTextureUVDynamic_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTiling); \
	DECLARE_FUNCTION(execGetTiling); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetPivot); \
	DECLARE_FUNCTION(execGetPivot); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execGetOffset); \
	DECLARE_FUNCTION(execGetParentTextureUV);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_ACCESSORS \
static void GetOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetPivot_WrapperImpl(const void* Object, void* OutValue); \
static void SetPivot_WrapperImpl(void* Object, const void* InValue); \
static void GetRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetTiling_WrapperImpl(const void* Object, void* OutValue); \
static void SetTiling_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureUVDynamic(); \
	friend struct Z_Construct_UClass_UDMTextureUVDynamic_Statics; \
public: \
	DECLARE_CLASS(UDMTextureUVDynamic, UDMMaterialComponentDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMTextureUVDynamic)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMTextureUVDynamic(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMTextureUVDynamic(UDMTextureUVDynamic&&); \
	UDMTextureUVDynamic(const UDMTextureUVDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMTextureUVDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureUVDynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMTextureUVDynamic) \
	DYNAMICMATERIAL_API virtual ~UDMTextureUVDynamic();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMTextureUVDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUVDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
