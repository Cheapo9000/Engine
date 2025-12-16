// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureSet.h"

#ifdef DYNAMICMATERIALTEXTURESET_DMTextureSet_generated_h
#error "DMTextureSet.generated.h already included, missing '#pragma once' in DMTextureSet.h"
#endif
#define DYNAMICMATERIALTEXTURESET_DMTextureSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class EDMTextureSetMaterialProperty : uint8;
struct FDMMaterialTexture;

// ********** Begin Class UDMTextureSet ************************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execContainsTexture); \
	DECLARE_FUNCTION(execSetMaterialTexture); \
	DECLARE_FUNCTION(execGetMaterialTexture); \
	DECLARE_FUNCTION(execHasMaterialTexture); \
	DECLARE_FUNCTION(execHasMaterialProperty);


struct Z_Construct_UClass_UDMTextureSet_Statics;
DYNAMICMATERIALTEXTURESET_API UClass* Z_Construct_UClass_UDMTextureSet_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureSet(); \
	friend struct ::Z_Construct_UClass_UDMTextureSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALTEXTURESET_API UClass* ::Z_Construct_UClass_UDMTextureSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMTextureSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialTextureSet"), Z_Construct_UClass_UDMTextureSet_NoRegister) \
	DECLARE_SERIALIZER(UDMTextureSet)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMTextureSet(UDMTextureSet&&) = delete; \
	UDMTextureSet(const UDMTextureSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALTEXTURESET_API, UDMTextureSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMTextureSet)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMTextureSet;

// ********** End Class UDMTextureSet **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
