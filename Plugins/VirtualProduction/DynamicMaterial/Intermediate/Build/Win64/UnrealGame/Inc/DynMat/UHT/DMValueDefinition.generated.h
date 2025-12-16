// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMValueDefinition.h"

#ifdef DYNAMICMATERIAL_DMValueDefinition_generated_h
#error "DMValueDefinition.generated.h already included, missing '#pragma once' in DMValueDefinition.h"
#endif
#define DYNAMICMATERIAL_DMValueDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMValueType : uint8;
struct FDMValueDefinition;

// ********** Begin ScriptStruct FDMValueDefinition ************************************************
struct Z_Construct_UScriptStruct_FDMValueDefinition_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMValueDefinition_Statics; \
	DYNAMICMATERIAL_API static class UScriptStruct* StaticStruct();


struct FDMValueDefinition;
// ********** End ScriptStruct FDMValueDefinition **************************************************

// ********** Begin Class UDMValueDefinitionLibrary ************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTypeForFloatCount); \
	DECLARE_FUNCTION(execBP_AreTypesCompatible); \
	DECLARE_FUNCTION(execGetValueDefinition); \
	DECLARE_FUNCTION(execGetValueTypes);


struct Z_Construct_UClass_UDMValueDefinitionLibrary_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMValueDefinitionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMValueDefinitionLibrary(); \
	friend struct ::Z_Construct_UClass_UDMValueDefinitionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMValueDefinitionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMValueDefinitionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMValueDefinitionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDMValueDefinitionLibrary)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMValueDefinitionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMValueDefinitionLibrary(UDMValueDefinitionLibrary&&) = delete; \
	UDMValueDefinitionLibrary(const UDMValueDefinitionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMValueDefinitionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMValueDefinitionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMValueDefinitionLibrary) \
	DYNAMICMATERIAL_API virtual ~UDMValueDefinitionLibrary();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_86_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMValueDefinitionLibrary;

// ********** End Class UDMValueDefinitionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
