// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/IDynamicMaterialModelEditorOnlyDataInterface.h"

#ifdef DYNAMICMATERIAL_IDynamicMaterialModelEditorOnlyDataInterface_generated_h
#error "IDynamicMaterialModelEditorOnlyDataInterface.generated.h already included, missing '#pragma once' in IDynamicMaterialModelEditorOnlyDataInterface.h"
#endif
#define DYNAMICMATERIAL_IDynamicMaterialModelEditorOnlyDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMBuildRequestType : uint8;

// ********** Begin Interface UDynamicMaterialModelEditorOnlyDataInterface *************************
#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRequestMaterialBuild);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDynamicMaterialModelEditorOnlyDataInterface_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDynamicMaterialModelEditorOnlyDataInterface_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDynamicMaterialModelEditorOnlyDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMaterialModelEditorOnlyDataInterface(UDynamicMaterialModelEditorOnlyDataInterface&&) = delete; \
	UDynamicMaterialModelEditorOnlyDataInterface(const UDynamicMaterialModelEditorOnlyDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDynamicMaterialModelEditorOnlyDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModelEditorOnlyDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMaterialModelEditorOnlyDataInterface) \
	virtual ~UDynamicMaterialModelEditorOnlyDataInterface() = default;


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDynamicMaterialModelEditorOnlyDataInterface(); \
	friend struct ::Z_Construct_UClass_UDynamicMaterialModelEditorOnlyDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDynamicMaterialModelEditorOnlyDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMaterialModelEditorOnlyDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDynamicMaterialModelEditorOnlyDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMaterialModelEditorOnlyDataInterface)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDynamicMaterialModelEditorOnlyDataInterface() {} \
public: \
	typedef UDynamicMaterialModelEditorOnlyDataInterface UClassType; \
	typedef IDynamicMaterialModelEditorOnlyDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h_44_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMaterialModelEditorOnlyDataInterface;

// ********** End Interface UDynamicMaterialModelEditorOnlyDataInterface ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_IDynamicMaterialModelEditorOnlyDataInterface_h

// ********** Begin Enum EDMBuildRequestType *******************************************************
#define FOREACH_ENUM_EDMBUILDREQUESTTYPE(op) \
	op(EDMBuildRequestType::Immediate) \
	op(EDMBuildRequestType::Async) \
	op(EDMBuildRequestType::Preview) 

enum class EDMBuildRequestType : uint8;
template<> struct TIsUEnumClass<EDMBuildRequestType> { enum { Value = true }; };
template<> DYNAMICMATERIAL_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMBuildRequestType>();
// ********** End Enum EDMBuildRequestType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
