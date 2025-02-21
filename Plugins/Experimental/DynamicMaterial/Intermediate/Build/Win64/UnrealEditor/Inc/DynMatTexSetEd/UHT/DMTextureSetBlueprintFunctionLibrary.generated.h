// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureSetBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMTextureSet;
struct FAssetData;
#ifdef DYNAMICMATERIALTEXTURESETEDITOR_DMTextureSetBlueprintFunctionLibrary_generated_h
#error "DMTextureSetBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in DMTextureSetBlueprintFunctionLibrary.h"
#endif
#define DYNAMICMATERIALTEXTURESETEDITOR_DMTextureSetBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateTextureSetFromAssets);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureSetBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDMTextureSetBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDMTextureSetBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialTextureSetEditor"), NO_API) \
	DECLARE_SERIALIZER(UDMTextureSetBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMTextureSetBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMTextureSetBlueprintFunctionLibrary(UDMTextureSetBlueprintFunctionLibrary&&); \
	UDMTextureSetBlueprintFunctionLibrary(const UDMTextureSetBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMTextureSetBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureSetBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMTextureSetBlueprintFunctionLibrary) \
	NO_API virtual ~UDMTextureSetBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALTEXTURESETEDITOR_API UClass* StaticClass<class UDMTextureSetBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
