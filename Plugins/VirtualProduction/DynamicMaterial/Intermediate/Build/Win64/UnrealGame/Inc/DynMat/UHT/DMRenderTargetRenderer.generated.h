// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMRenderTargetRenderer.h"

#ifdef DYNAMICMATERIAL_DMRenderTargetRenderer_generated_h
#error "DMRenderTargetRenderer.generated.h already included, missing '#pragma once' in DMRenderTargetRenderer.h"
#endif
#define DYNAMICMATERIAL_DMRenderTargetRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialValueRenderTarget;
class UDMRenderTargetRenderer;

// ********** Begin Class UDMRenderTargetRenderer **************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsUpdating); \
	DECLARE_FUNCTION(execAsyncUpdateRenderTarget); \
	DECLARE_FUNCTION(execUpdateRenderTarget); \
	DECLARE_FUNCTION(execGetRenderTargetValue); \
	DECLARE_FUNCTION(execCreateRenderTargetRenderer);


struct Z_Construct_UClass_UDMRenderTargetRenderer_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMRenderTargetRenderer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMRenderTargetRenderer(); \
	friend struct ::Z_Construct_UClass_UDMRenderTargetRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMRenderTargetRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMRenderTargetRenderer, UDMMaterialComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMRenderTargetRenderer_NoRegister) \
	DECLARE_SERIALIZER(UDMRenderTargetRenderer) \
	virtual UObject* _getUObject() const override { return const_cast<UDMRenderTargetRenderer*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMRenderTargetRenderer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMRenderTargetRenderer(UDMRenderTargetRenderer&&) = delete; \
	UDMRenderTargetRenderer(const UDMRenderTargetRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMRenderTargetRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMRenderTargetRenderer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMRenderTargetRenderer) \
	DYNAMICMATERIAL_API virtual ~UDMRenderTargetRenderer();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMRenderTargetRenderer;

// ********** End Class UDMRenderTargetRenderer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMRenderTargetRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
