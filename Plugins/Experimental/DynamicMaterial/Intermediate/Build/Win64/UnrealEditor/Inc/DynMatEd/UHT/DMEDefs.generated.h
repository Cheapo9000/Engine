// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMEDefs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIALEDITOR_DMEDefs_generated_h
#error "DMEDefs.generated.h already included, missing '#pragma once' in DMEDefs.h"
#endif
#define DYNAMICMATERIALEDITOR_DMEDefs_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoBuild);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMBuildable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMBuildable(UDMBuildable&&); \
	UDMBuildable(const UDMBuildable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMBuildable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMBuildable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMBuildable) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMBuildable();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMBuildable(); \
	friend struct Z_Construct_UClass_UDMBuildable_Statics; \
public: \
	DECLARE_CLASS(UDMBuildable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMBuildable)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMBuildable() {} \
public: \
	typedef UDMBuildable UClassType; \
	typedef IDMBuildable ThisClass; \
	static void Execute_DoBuild(UObject* O, bool bInDirtyAssets); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMBuildable>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialStageConnector_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMMaterialStageConnector>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialStageConnection_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMMaterialStageConnection>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialSlotOutputConnectorTypes_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMMaterialSlotOutputConnectorTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMEDefs_h


#define FOREACH_ENUM_EDMMATERIALLAYERSTAGE(op) \
	op(EDMMaterialLayerStage::None) \
	op(EDMMaterialLayerStage::Base) \
	op(EDMMaterialLayerStage::Mask) \
	op(EDMMaterialLayerStage::All) 

enum class EDMMaterialLayerStage : uint8;
template<> struct TIsUEnumClass<EDMMaterialLayerStage> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<EDMMaterialLayerStage>();

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
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<EAvaColorChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
