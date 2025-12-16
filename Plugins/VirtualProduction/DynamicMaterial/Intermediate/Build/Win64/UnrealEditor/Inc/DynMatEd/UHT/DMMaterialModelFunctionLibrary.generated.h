// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DMMaterialModelFunctionLibrary.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialModelFunctionLibrary_generated_h
#error "DMMaterialModelFunctionLibrary.generated.h already included, missing '#pragma once' in DMMaterialModelFunctionLibrary.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialModelFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMMaterialModelFunctionLibrary ******************************************
struct Z_Construct_UClass_UDMMaterialModelFunctionLibrary_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialModelFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialModelFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UDMMaterialModelFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialModelFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialModelFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialModelFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialModelFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMMaterialModelFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialModelFunctionLibrary(UDMMaterialModelFunctionLibrary&&) = delete; \
	UDMMaterialModelFunctionLibrary(const UDMMaterialModelFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMMaterialModelFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialModelFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMMaterialModelFunctionLibrary) \
	NO_API virtual ~UDMMaterialModelFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialModelFunctionLibrary;

// ********** End Class UDMMaterialModelFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialModelFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
