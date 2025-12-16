// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DMTextureSetFunctionLibrary.h"

#ifdef DYNAMICMATERIALEDITOR_DMTextureSetFunctionLibrary_generated_h
#error "DMTextureSetFunctionLibrary.generated.h already included, missing '#pragma once' in DMTextureSetFunctionLibrary.h"
#endif
#define DYNAMICMATERIALEDITOR_DMTextureSetFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMTextureSet;
class UDynamicMaterialModelEditorOnlyData;

// ********** Begin Class UDMTextureSetFunctionLibrary *********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddTextureSetToModel);


struct Z_Construct_UClass_UDMTextureSetFunctionLibrary_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMTextureSetFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureSetFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UDMTextureSetFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMTextureSetFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMTextureSetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMTextureSetFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDMTextureSetFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMTextureSetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMTextureSetFunctionLibrary(UDMTextureSetFunctionLibrary&&) = delete; \
	UDMTextureSetFunctionLibrary(const UDMTextureSetFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMTextureSetFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureSetFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMTextureSetFunctionLibrary) \
	NO_API virtual ~UDMTextureSetFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMTextureSetFunctionLibrary;

// ********** End Class UDMTextureSetFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMTextureSetFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
