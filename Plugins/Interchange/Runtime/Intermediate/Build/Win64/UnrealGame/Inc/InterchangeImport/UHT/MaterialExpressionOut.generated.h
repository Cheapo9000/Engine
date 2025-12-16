// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/MaterialExpressions/MaterialExpressionOut.h"

#ifdef INTERCHANGEIMPORT_MaterialExpressionOut_generated_h
#error "MaterialExpressionOut.generated.h already included, missing '#pragma once' in MaterialExpressionOut.h"
#endif
#define INTERCHANGEIMPORT_MaterialExpressionOut_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMaterialXOut ******************************************
struct Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXOut_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialXOut(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialXOut_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialXOut, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UMaterialExpressionMaterialXOut_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialXOut)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UMaterialExpressionMaterialXOut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialXOut) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UMaterialExpressionMaterialXOut); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialXOut); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialXOut(UMaterialExpressionMaterialXOut&&) = delete; \
	UMaterialExpressionMaterialXOut(const UMaterialExpressionMaterialXOut&) = delete; \
	INTERCHANGEIMPORT_API virtual ~UMaterialExpressionMaterialXOut();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_23_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialXOut;

// ********** End Class UMaterialExpressionMaterialXOut ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
