// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/MaterialExpressions/MaterialExpressionIn.h"

#ifdef INTERCHANGEIMPORT_MaterialExpressionIn_generated_h
#error "MaterialExpressionIn.generated.h already included, missing '#pragma once' in MaterialExpressionIn.h"
#endif
#define INTERCHANGEIMPORT_MaterialExpressionIn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMaterialXIn *******************************************
struct Z_Construct_UClass_UMaterialExpressionMaterialXIn_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXIn_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialXIn(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialXIn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialXIn_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialXIn, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UMaterialExpressionMaterialXIn_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialXIn)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UMaterialExpressionMaterialXIn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialXIn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UMaterialExpressionMaterialXIn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialXIn); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialXIn(UMaterialExpressionMaterialXIn&&) = delete; \
	UMaterialExpressionMaterialXIn(const UMaterialExpressionMaterialXIn&) = delete; \
	INTERCHANGEIMPORT_API virtual ~UMaterialExpressionMaterialXIn();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h_23_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialXIn;

// ********** End Class UMaterialExpressionMaterialXIn *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionIn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
