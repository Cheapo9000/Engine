// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/IDynamicMaterialModelEditorOnlyDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIAL_IDynamicMaterialModelEditorOnlyDataInterface_generated_h
#error "IDynamicMaterialModelEditorOnlyDataInterface.generated.h already included, missing '#pragma once' in IDynamicMaterialModelEditorOnlyDataInterface.h"
#endif
#define DYNAMICMATERIAL_IDynamicMaterialModelEditorOnlyDataInterface_generated_h

#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRequestMaterialBuild);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDynamicMaterialModelEditorOnlyDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMaterialModelEditorOnlyDataInterface(UDynamicMaterialModelEditorOnlyDataInterface&&); \
	UDynamicMaterialModelEditorOnlyDataInterface(const UDynamicMaterialModelEditorOnlyDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDynamicMaterialModelEditorOnlyDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModelEditorOnlyDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMaterialModelEditorOnlyDataInterface) \
	DYNAMICMATERIAL_API virtual ~UDynamicMaterialModelEditorOnlyDataInterface();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDynamicMaterialModelEditorOnlyDataInterface(); \
	friend struct Z_Construct_UClass_UDynamicMaterialModelEditorOnlyDataInterface_Statics; \
public: \
	DECLARE_CLASS(UDynamicMaterialModelEditorOnlyDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDynamicMaterialModelEditorOnlyDataInterface)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDynamicMaterialModelEditorOnlyDataInterface() {} \
public: \
	typedef UDynamicMaterialModelEditorOnlyDataInterface UClassType; \
	typedef IDynamicMaterialModelEditorOnlyDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDynamicMaterialModelEditorOnlyDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
