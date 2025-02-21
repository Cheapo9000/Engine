// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageGradients/DMMSGLinear.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELinearGradientTileType : uint8;
#ifdef DYNAMICMATERIALEDITOR_DMMSGLinear_generated_h
#error "DMMSGLinear.generated.h already included, missing '#pragma once' in DMMSGLinear.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSGLinear_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTilingType); \
	DECLARE_FUNCTION(execGetTilingType);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_ACCESSORS \
static void GetTiling_WrapperImpl(const void* Object, void* OutValue); \
static void SetTiling_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageGradientLinear(); \
	friend struct Z_Construct_UClass_UDMMaterialStageGradientLinear_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageGradientLinear, UDMMaterialStageGradient, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageGradientLinear)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageGradientLinear(UDMMaterialStageGradientLinear&&); \
	UDMMaterialStageGradientLinear(const UDMMaterialStageGradientLinear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageGradientLinear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageGradientLinear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageGradientLinear) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageGradientLinear();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageGradientLinear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageGradients_DMMSGLinear_h


#define FOREACH_ENUM_ELINEARGRADIENTTILETYPE(op) \
	op(ELinearGradientTileType::NoTile) \
	op(ELinearGradientTileType::Tile) \
	op(ELinearGradientTileType::TileAndMirror) 

enum class ELinearGradientTileType : uint8;
template<> struct TIsUEnumClass<ELinearGradientTileType> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<ELinearGradientTileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
