// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionColorRamp.h"

#ifdef ENGINE_MaterialExpressionColorRamp_generated_h
#error "MaterialExpressionColorRamp.generated.h already included, missing '#pragma once' in MaterialExpressionColorRamp.h"
#endif
#define ENGINE_MaterialExpressionColorRamp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionColorRamp *********************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialExpressionColorRamp, ENGINE_API)


struct Z_Construct_UClass_UMaterialExpressionColorRamp_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionColorRamp_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionColorRamp(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionColorRamp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionColorRamp_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionColorRamp, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionColorRamp_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionColorRamp) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionColorRamp(UMaterialExpressionColorRamp&&) = delete; \
	UMaterialExpressionColorRamp(const UMaterialExpressionColorRamp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionColorRamp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionColorRamp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionColorRamp) \
	ENGINE_API virtual ~UMaterialExpressionColorRamp();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionColorRamp;

// ********** End Class UMaterialExpressionColorRamp ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionColorRamp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
