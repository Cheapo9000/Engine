// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLength.h"

#ifdef ENGINE_MaterialExpressionLength_generated_h
#error "MaterialExpressionLength.generated.h already included, missing '#pragma once' in MaterialExpressionLength.h"
#endif
#define ENGINE_MaterialExpressionLength_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLength ************************************************
struct Z_Construct_UClass_UMaterialExpressionLength_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLength_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLength(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLength_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLength_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLength, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLength_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLength)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLength(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLength(UMaterialExpressionLength&&) = delete; \
	UMaterialExpressionLength(const UMaterialExpressionLength&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLength); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLength); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLength) \
	ENGINE_API virtual ~UMaterialExpressionLength();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLength;

// ********** End Class UMaterialExpressionLength **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLength_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
