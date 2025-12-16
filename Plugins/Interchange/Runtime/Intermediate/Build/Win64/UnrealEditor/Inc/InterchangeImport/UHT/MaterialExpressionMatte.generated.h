// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/MaterialExpressions/MaterialExpressionMatte.h"

#ifdef INTERCHANGEIMPORT_MaterialExpressionMatte_generated_h
#error "MaterialExpressionMatte.generated.h already included, missing '#pragma once' in MaterialExpressionMatte.h"
#endif
#define INTERCHANGEIMPORT_MaterialExpressionMatte_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMaterialXMatte ****************************************
struct Z_Construct_UClass_UMaterialExpressionMaterialXMatte_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXMatte_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialXMatte(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialXMatte_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialXMatte_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialXMatte, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UMaterialExpressionMaterialXMatte_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialXMatte)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UMaterialExpressionMaterialXMatte(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialXMatte) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UMaterialExpressionMaterialXMatte); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialXMatte); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialXMatte(UMaterialExpressionMaterialXMatte&&) = delete; \
	UMaterialExpressionMaterialXMatte(const UMaterialExpressionMaterialXMatte&) = delete; \
	INTERCHANGEIMPORT_API virtual ~UMaterialExpressionMaterialXMatte();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h_23_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialXMatte;

// ********** End Class UMaterialExpressionMaterialXMatte ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMatte_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
