// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMEDefs.h"

#ifdef DYNAMICMATERIALEDITOR_DMEDefs_generated_h
#error "DMEDefs.generated.h already included, missing '#pragma once' in DMEDefs.h"
#endif
#define DYNAMICMATERIALEDITOR_DMEDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDMBuildable *********************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoBuild);


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDMBuildable_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMBuildable_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMBuildable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMBuildable(UDMBuildable&&) = delete; \
	UDMBuildable(const UDMBuildable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMBuildable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMBuildable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMBuildable) \
	virtual ~UDMBuildable() = default;


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMBuildable(); \
	friend struct ::Z_Construct_UClass_UDMBuildable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMBuildable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMBuildable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMBuildable_NoRegister) \
	DECLARE_SERIALIZER(UDMBuildable)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMBuildable() {} \
public: \
	typedef UDMBuildable UClassType; \
	typedef IDMBuildable ThisClass; \
	static void Execute_DoBuild(UObject* O, bool bInDirtyAssets); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMBuildable;

// ********** End Interface UDMBuildable ***********************************************************

// ********** Begin ScriptStruct FDMMaterialStageConnector *****************************************
struct Z_Construct_UScriptStruct_FDMMaterialStageConnector_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMMaterialStageConnector_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMMaterialStageConnector;
// ********** End ScriptStruct FDMMaterialStageConnector *******************************************

// ********** Begin ScriptStruct FDMMaterialStageConnection ****************************************
struct Z_Construct_UScriptStruct_FDMMaterialStageConnection_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMMaterialStageConnection_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMMaterialStageConnection;
// ********** End ScriptStruct FDMMaterialStageConnection ******************************************

// ********** Begin ScriptStruct FDMMaterialSlotOutputConnectorTypes *******************************
struct Z_Construct_UScriptStruct_FDMMaterialSlotOutputConnectorTypes_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMMaterialSlotOutputConnectorTypes_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMMaterialSlotOutputConnectorTypes;
// ********** End ScriptStruct FDMMaterialSlotOutputConnectorTypes *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h

// ********** Begin Enum EDMMaterialLayerStage *****************************************************
#define FOREACH_ENUM_EDMMATERIALLAYERSTAGE(op) \
	op(EDMMaterialLayerStage::None) \
	op(EDMMaterialLayerStage::Base) \
	op(EDMMaterialLayerStage::Mask) \
	op(EDMMaterialLayerStage::All) 

enum class EDMMaterialLayerStage : uint8;
template<> struct TIsUEnumClass<EDMMaterialLayerStage> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMMaterialLayerStage>();
// ********** End Enum EDMMaterialLayerStage *******************************************************

// ********** Begin Enum EAvaColorChannel **********************************************************
#define FOREACH_ENUM_EAVACOLORCHANNEL(op) \
	op(EAvaColorChannel::None) \
	op(EAvaColorChannel::Red) \
	op(EAvaColorChannel::Green) \
	op(EAvaColorChannel::Blue) \
	op(EAvaColorChannel::Alpha) \
	op(EAvaColorChannel::RGB) \
	op(EAvaColorChannel::RGBA) 

enum class EAvaColorChannel : uint8;
template<> struct TIsUEnumClass<EAvaColorChannel> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaColorChannel>();
// ********** End Enum EAvaColorChannel ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
