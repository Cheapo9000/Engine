// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialLinkedComponent.h"

#ifdef DYNAMICMATERIAL_DMMaterialLinkedComponent_generated_h
#error "DMMaterialLinkedComponent.generated.h already included, missing '#pragma once' in DMMaterialLinkedComponent.h"
#endif
#define DYNAMICMATERIAL_DMMaterialLinkedComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialComponent;

// ********** Begin Class UDMMaterialLinkedComponent ***********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetParentComponent);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDMMaterialLinkedComponent_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialLinkedComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialLinkedComponent(); \
	friend struct ::Z_Construct_UClass_UDMMaterialLinkedComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialLinkedComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialLinkedComponent, UDMMaterialComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialLinkedComponent_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialLinkedComponent)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMMaterialLinkedComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialLinkedComponent(UDMMaterialLinkedComponent&&) = delete; \
	UDMMaterialLinkedComponent(const UDMMaterialLinkedComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialLinkedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialLinkedComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialLinkedComponent) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialLinkedComponent();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialLinkedComponent;

// ********** End Class UDMMaterialLinkedComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialLinkedComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
