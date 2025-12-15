// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLightmassReplace.h"

#ifdef ENGINE_MaterialExpressionLightmassReplace_generated_h
#error "MaterialExpressionLightmassReplace.generated.h already included, missing '#pragma once' in MaterialExpressionLightmassReplace.h"
#endif
#define ENGINE_MaterialExpressionLightmassReplace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLightmassReplace **************************************
struct Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLightmassReplace(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLightmassReplace, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLightmassReplace)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLightmassReplace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLightmassReplace(UMaterialExpressionLightmassReplace&&) = delete; \
	UMaterialExpressionLightmassReplace(const UMaterialExpressionLightmassReplace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLightmassReplace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLightmassReplace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLightmassReplace) \
	NO_API virtual ~UMaterialExpressionLightmassReplace();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLightmassReplace;

// ********** End Class UMaterialExpressionLightmassReplace ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmassReplace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
