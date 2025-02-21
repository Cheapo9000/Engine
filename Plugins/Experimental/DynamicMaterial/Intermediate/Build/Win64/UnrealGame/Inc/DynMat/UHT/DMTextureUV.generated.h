// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMTextureUV.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialParameter;
class UDMTextureUV;
class UDynamicMaterialModel;
class UObject;
enum class EDMUVSource : uint8;
#ifdef DYNAMICMATERIAL_DMTextureUV_generated_h
#error "DMTextureUV.generated.h already included, missing '#pragma once' in DMTextureUV.h"
#endif
#define DYNAMICMATERIAL_DMTextureUV_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialParameterName); \
	DECLARE_FUNCTION(execGetMaterialParameter); \
	DECLARE_FUNCTION(execGetParameters); \
	DECLARE_FUNCTION(execSetTiling); \
	DECLARE_FUNCTION(execGetTiling); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetPivot); \
	DECLARE_FUNCTION(execGetPivot); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execGetOffset); \
	DECLARE_FUNCTION(execGetMaterialModel);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetShouldExposeParameter); \
	DECLARE_FUNCTION(execGetShouldExposeParameter); \
	DECLARE_FUNCTION(execSetMaterialParameterName); \
	DECLARE_FUNCTION(execSetMirrorOnY); \
	DECLARE_FUNCTION(execGetMirrorOnY); \
	DECLARE_FUNCTION(execSetMirrorOnX); \
	DECLARE_FUNCTION(execGetMirrorOnX); \
	DECLARE_FUNCTION(execSetUVSource); \
	DECLARE_FUNCTION(execGetUVSource); \
	DECLARE_FUNCTION(execCreateTextureUV);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_ACCESSORS \
static void GetOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetPivot_WrapperImpl(const void* Object, void* OutValue); \
static void SetPivot_WrapperImpl(void* Object, const void* InValue); \
static void GetRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetTiling_WrapperImpl(const void* Object, void* OutValue); \
static void SetTiling_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMTextureUV, DYNAMICMATERIAL_API)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureUV(); \
	friend struct Z_Construct_UClass_UDMTextureUV_Statics; \
public: \
	DECLARE_CLASS(UDMTextureUV, UDMMaterialLinkedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMTextureUV) \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMTextureUV(UDMTextureUV&&); \
	UDMTextureUV(const UDMTextureUV&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMTextureUV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureUV); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMTextureUV) \
	DYNAMICMATERIAL_API virtual ~UDMTextureUV();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMTextureUV>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMTextureUV_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
