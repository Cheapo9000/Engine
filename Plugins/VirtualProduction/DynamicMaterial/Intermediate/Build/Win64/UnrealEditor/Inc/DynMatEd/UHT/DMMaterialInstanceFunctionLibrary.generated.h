// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DMMaterialInstanceFunctionLibrary.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialInstanceFunctionLibrary_generated_h
#error "DMMaterialInstanceFunctionLibrary.generated.h already included, missing '#pragma once' in DMMaterialInstanceFunctionLibrary.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialInstanceFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMMaterialInstanceFunctionLibrary ***************************************
struct Z_Construct_UClass_UDMMaterialInstanceFunctionLibrary_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialInstanceFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialInstanceFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UDMMaterialInstanceFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialInstanceFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialInstanceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialInstanceFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialInstanceFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMMaterialInstanceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialInstanceFunctionLibrary(UDMMaterialInstanceFunctionLibrary&&) = delete; \
	UDMMaterialInstanceFunctionLibrary(const UDMMaterialInstanceFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMMaterialInstanceFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialInstanceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMMaterialInstanceFunctionLibrary) \
	NO_API virtual ~UDMMaterialInstanceFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialInstanceFunctionLibrary;

// ********** End Class UDMMaterialInstanceFunctionLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialInstanceFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
