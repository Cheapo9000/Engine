// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class EDMTextureSetMaterialProperty : uint8;
struct FDMMaterialTexture;
#ifdef DYNAMICMATERIALTEXTURESET_DMTextureSet_generated_h
#error "DMTextureSet.generated.h already included, missing '#pragma once' in DMTextureSet.h"
#endif
#define DYNAMICMATERIALTEXTURESET_DMTextureSet_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execContainsTexture); \
	DECLARE_FUNCTION(execSetMaterialTexture); \
	DECLARE_FUNCTION(execGetMaterialTexture); \
	DECLARE_FUNCTION(execHasMaterialTexture); \
	DECLARE_FUNCTION(execHasMaterialProperty);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureSet(); \
	friend struct Z_Construct_UClass_UDMTextureSet_Statics; \
public: \
	DECLARE_CLASS(UDMTextureSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialTextureSet"), NO_API) \
	DECLARE_SERIALIZER(UDMTextureSet)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMTextureSet(UDMTextureSet&&); \
	UDMTextureSet(const UDMTextureSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMTextureSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMTextureSet)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALTEXTURESET_API UClass* StaticClass<class UDMTextureSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
