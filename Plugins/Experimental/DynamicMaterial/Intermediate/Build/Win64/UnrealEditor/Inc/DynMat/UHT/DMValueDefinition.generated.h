// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMValueDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMValueType : uint8;
struct FDMValueDefinition;
#ifdef DYNAMICMATERIAL_DMValueDefinition_generated_h
#error "DMValueDefinition.generated.h already included, missing '#pragma once' in DMValueDefinition.h"
#endif
#define DYNAMICMATERIAL_DMValueDefinition_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMValueDefinition_Statics; \
	DYNAMICMATERIAL_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIAL_API UScriptStruct* StaticStruct<struct FDMValueDefinition>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTypeForFloatCount); \
	DECLARE_FUNCTION(execBP_AreTypesCompatible); \
	DECLARE_FUNCTION(execGetValueDefinition); \
	DECLARE_FUNCTION(execGetValueTypes);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMValueDefinitionLibrary(); \
	friend struct Z_Construct_UClass_UDMValueDefinitionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDMValueDefinitionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMValueDefinitionLibrary)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMValueDefinitionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMValueDefinitionLibrary(UDMValueDefinitionLibrary&&); \
	UDMValueDefinitionLibrary(const UDMValueDefinitionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMValueDefinitionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMValueDefinitionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMValueDefinitionLibrary) \
	DYNAMICMATERIAL_API virtual ~UDMValueDefinitionLibrary();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_86_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMValueDefinitionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMValueDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
