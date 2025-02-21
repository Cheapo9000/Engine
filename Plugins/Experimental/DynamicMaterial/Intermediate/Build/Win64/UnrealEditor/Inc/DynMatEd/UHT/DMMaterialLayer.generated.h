// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialEffectStack;
class UDMMaterialLayerObject;
class UDMMaterialSlot;
class UDMMaterialStage;
enum class EDMMaterialLayerStage : uint8;
enum class EDMMaterialPropertyType : uint8;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialLayer_generated_h
#error "DMMaterialLayer.generated.h already included, missing '#pragma once' in DMMaterialLayer.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialLayer_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectStack); \
	DECLARE_FUNCTION(execAreAllStagesEnabled); \
	DECLARE_FUNCTION(execAreAllStagesValid); \
	DECLARE_FUNCTION(execSetStage); \
	DECLARE_FUNCTION(execGetLastEnabledStage); \
	DECLARE_FUNCTION(execGetFirstEnabledStage); \
	DECLARE_FUNCTION(execIsStageEnabled); \
	DECLARE_FUNCTION(execHasValidStageOfType); \
	DECLARE_FUNCTION(execHasValidStage); \
	DECLARE_FUNCTION(execGetLastValidStage); \
	DECLARE_FUNCTION(execGetFirstValidStage); \
	DECLARE_FUNCTION(execGetStageType); \
	DECLARE_FUNCTION(execGetStages); \
	DECLARE_FUNCTION(execGetStage); \
	DECLARE_FUNCTION(execCanMoveLayerBelow); \
	DECLARE_FUNCTION(execCanMoveLayerAbove); \
	DECLARE_FUNCTION(execGetNextLayer); \
	DECLARE_FUNCTION(execGetPreviousLayer); \
	DECLARE_FUNCTION(execToggleTextureUVLinkEnabled); \
	DECLARE_FUNCTION(execSetTextureUVLinkEnabled); \
	DECLARE_FUNCTION(execIsTextureUVLinkEnabled); \
	DECLARE_FUNCTION(execSetMaterialProperty); \
	DECLARE_FUNCTION(execGetMaterialProperty); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetLayerName); \
	DECLARE_FUNCTION(execGetLayerName); \
	DECLARE_FUNCTION(execFindIndex); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execCreateLayer);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialLayerObject(); \
	friend struct Z_Construct_UClass_UDMMaterialLayerObject_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialLayerObject, UDMMaterialComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialLayerObject)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialLayerObject(UDMMaterialLayerObject&&); \
	UDMMaterialLayerObject(const UDMMaterialLayerObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialLayerObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialLayerObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialLayerObject) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialLayerObject();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialLayerObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
