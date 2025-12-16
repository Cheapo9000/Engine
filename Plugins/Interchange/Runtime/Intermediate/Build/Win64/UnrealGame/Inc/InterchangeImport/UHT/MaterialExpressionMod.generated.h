// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/MaterialExpressions/MaterialExpressionMod.h"

#ifdef INTERCHANGEIMPORT_MaterialExpressionMod_generated_h
#error "MaterialExpressionMod.generated.h already included, missing '#pragma once' in MaterialExpressionMod.h"
#endif
#define INTERCHANGEIMPORT_MaterialExpressionMod_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMaterialXMod ******************************************
struct Z_Construct_UClass_UMaterialExpressionMaterialXMod_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXMod_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialXMod(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialXMod_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialXMod_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialXMod, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UMaterialExpressionMaterialXMod_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialXMod)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UMaterialExpressionMaterialXMod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialXMod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UMaterialExpressionMaterialXMod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialXMod); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialXMod(UMaterialExpressionMaterialXMod&&) = delete; \
	UMaterialExpressionMaterialXMod(const UMaterialExpressionMaterialXMod&) = delete; \
	INTERCHANGEIMPORT_API virtual ~UMaterialExpressionMaterialXMod();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h_17_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialXMod;

// ********** End Class UMaterialExpressionMaterialXMod ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionMod_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
