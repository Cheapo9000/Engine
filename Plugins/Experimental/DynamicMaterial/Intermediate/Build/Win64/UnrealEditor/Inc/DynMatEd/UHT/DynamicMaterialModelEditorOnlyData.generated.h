// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/DynamicMaterialModelEditorOnlyData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialProperty;
class UDMMaterialSlot;
class UDMTextureSet;
class UDynamicMaterialModel;
class UMaterial;
enum class EDMMaterialPropertyType : uint8;
enum class EDMMaterialPropertyType : uint8; class UDMMaterialProperty;
enum class EDMMaterialShadingModel : uint8;
enum class EDMState : uint8;
struct FMaterialStatistics;
#ifdef DYNAMICMATERIALEDITOR_DynamicMaterialModelEditorOnlyData_generated_h
#error "DynamicMaterialModelEditorOnlyData.generated.h already included, missing '#pragma once' in DynamicMaterialModelEditorOnlyData.h"
#endif
#define DYNAMICMATERIALEDITOR_DynamicMaterialModelEditorOnlyData_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildMaterial); \
	DECLARE_FUNCTION(execAddTextureSet); \
	DECLARE_FUNCTION(execUnassignMaterialProperty); \
	DECLARE_FUNCTION(execAssignMaterialPropertyToSlot); \
	DECLARE_FUNCTION(execGetMaterialPropertiesForSlot); \
	DECLARE_FUNCTION(execRemoveSlotForMaterialProperty); \
	DECLARE_FUNCTION(execRemoveSlot); \
	DECLARE_FUNCTION(execAddSlotForMaterialProperty); \
	DECLARE_FUNCTION(execAddSlot); \
	DECLARE_FUNCTION(execGetSlotForEnabledMaterialProperty); \
	DECLARE_FUNCTION(execGetSlotForMaterialProperty); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execGetMaterialProperty); \
	DECLARE_FUNCTION(execGetMaterialProperties); \
	DECLARE_FUNCTION(execOpenMaterialEditor); \
	DECLARE_FUNCTION(execGetMaterialStats); \
	DECLARE_FUNCTION(execSetChannelListPreset); \
	DECLARE_FUNCTION(execSetResponsiveAAEnabled); \
	DECLARE_FUNCTION(execIsResponsiveAAEnabled); \
	DECLARE_FUNCTION(execSetNaniteTessellationEnabled); \
	DECLARE_FUNCTION(execIsNaniteTessellationEnabled); \
	DECLARE_FUNCTION(execSetOutputTranslucentVelocityEnabled); \
	DECLARE_FUNCTION(execIsOutputTranslucentVelocityEnabled); \
	DECLARE_FUNCTION(execSetIsTwoSided); \
	DECLARE_FUNCTION(execGetIsTwoSided); \
	DECLARE_FUNCTION(execSetHasPixelAnimation); \
	DECLARE_FUNCTION(execGetHasPixelAnimation); \
	DECLARE_FUNCTION(execSetShadingModel); \
	DECLARE_FUNCTION(execGetShadingModel); \
	DECLARE_FUNCTION(execSetBlendMode); \
	DECLARE_FUNCTION(execGetBlendMode); \
	DECLARE_FUNCTION(execSetDomain); \
	DECLARE_FUNCTION(execGetDomain); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetGeneratedMaterial); \
	DECLARE_FUNCTION(execGetMaterialModel);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialModelEditorOnlyData(); \
	friend struct Z_Construct_UClass_UDynamicMaterialModelEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UDynamicMaterialModelEditorOnlyData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDynamicMaterialModelEditorOnlyData) \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMaterialModelEditorOnlyData*>(this); }


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMaterialModelEditorOnlyData(UDynamicMaterialModelEditorOnlyData&&); \
	UDynamicMaterialModelEditorOnlyData(const UDynamicMaterialModelEditorOnlyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDynamicMaterialModelEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModelEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialModelEditorOnlyData) \
	DYNAMICMATERIALEDITOR_API virtual ~UDynamicMaterialModelEditorOnlyData();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDynamicMaterialModelEditorOnlyData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Model_DynamicMaterialModelEditorOnlyData_h


#define FOREACH_ENUM_EDMSTATE(op) \
	op(EDMState::Idle) \
	op(EDMState::Building) 

enum class EDMState : uint8;
template<> struct TIsUEnumClass<EDMState> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<EDMState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
