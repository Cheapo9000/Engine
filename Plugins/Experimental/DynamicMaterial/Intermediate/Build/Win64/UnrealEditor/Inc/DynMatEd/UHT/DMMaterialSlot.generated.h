// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialSlot;
class UDMMaterialStage;
class UDynamicMaterialModelEditorOnlyData;
enum class EDMMaterialPropertyType : uint8;
enum class EDMValueType : uint8;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialSlot_generated_h
#error "DMMaterialSlot.generated.h already included, missing '#pragma once' in DMMaterialSlot.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialSlot_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeMaterialProperty); \
	DECLARE_FUNCTION(execSetLayerMaterialPropertyAndReplaceOthers); \
	DECLARE_FUNCTION(execK2_GetSlotsReferencedBy); \
	DECLARE_FUNCTION(execGetLastLayerForMaterialProperty); \
	DECLARE_FUNCTION(execMoveLayerAfter); \
	DECLARE_FUNCTION(execMoveLayerBefore); \
	DECLARE_FUNCTION(execMoveLayer); \
	DECLARE_FUNCTION(execRemoveLayer); \
	DECLARE_FUNCTION(execCanRemoveLayer); \
	DECLARE_FUNCTION(execAddLayerWithMask); \
	DECLARE_FUNCTION(execAddLayer); \
	DECLARE_FUNCTION(execAddDefaultLayer); \
	DECLARE_FUNCTION(execBP_GetLayers); \
	DECLARE_FUNCTION(execFindLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execGetAllOutputConnectorTypes); \
	DECLARE_FUNCTION(execGetOutputConnectorTypesForMaterialProperty); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execGetMaterialModelEditorOnlyData);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialSlot(); \
	friend struct Z_Construct_UClass_UDMMaterialSlot_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialSlot, UDMMaterialComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialSlot)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialSlot(UDMMaterialSlot&&); \
	UDMMaterialSlot(const UDMMaterialSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialSlot) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialSlot();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
