// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionVertexNormalWS.h"

#ifdef ENGINE_MaterialExpressionVertexNormalWS_generated_h
#error "MaterialExpressionVertexNormalWS.generated.h already included, missing '#pragma once' in MaterialExpressionVertexNormalWS.h"
#endif
#define ENGINE_MaterialExpressionVertexNormalWS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionVertexNormalWS ****************************************
struct Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexNormalWS_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVertexNormalWS(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionVertexNormalWS_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionVertexNormalWS, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionVertexNormalWS_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionVertexNormalWS)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVertexNormalWS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionVertexNormalWS(UMaterialExpressionVertexNormalWS&&) = delete; \
	UMaterialExpressionVertexNormalWS(const UMaterialExpressionVertexNormalWS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVertexNormalWS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVertexNormalWS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVertexNormalWS) \
	ENGINE_API virtual ~UMaterialExpressionVertexNormalWS();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionVertexNormalWS;

// ********** End Class UMaterialExpressionVertexNormalWS ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexNormalWS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
