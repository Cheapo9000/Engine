// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Material/DynamicMaterialInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMaterialModel;
class UDynamicMaterialModelBase;
#ifdef DYNAMICMATERIAL_DynamicMaterialInstance_generated_h
#error "DynamicMaterialInstance.generated.h already included, missing '#pragma once' in DynamicMaterialInstance.h"
#endif
#define DYNAMICMATERIAL_DynamicMaterialInstance_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialModel); \
	DECLARE_FUNCTION(execGetMaterialModelBase);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialInstance(); \
	friend struct Z_Construct_UClass_UDynamicMaterialInstance_Statics; \
public: \
	DECLARE_CLASS(UDynamicMaterialInstance, UMaterialInstanceDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDynamicMaterialInstance)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMaterialInstance(UDynamicMaterialInstance&&); \
	UDynamicMaterialInstance(const UDynamicMaterialInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDynamicMaterialInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialInstance) \
	DYNAMICMATERIAL_API virtual ~UDynamicMaterialInstance();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDynamicMaterialInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Material_DynamicMaterialInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
