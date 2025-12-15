// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDistanceCullFade.h"

#ifdef ENGINE_MaterialExpressionDistanceCullFade_generated_h
#error "MaterialExpressionDistanceCullFade.generated.h already included, missing '#pragma once' in MaterialExpressionDistanceCullFade.h"
#endif
#define ENGINE_MaterialExpressionDistanceCullFade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDistanceCullFade **************************************
struct Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDistanceCullFade(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDistanceCullFade, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDistanceCullFade)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDistanceCullFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDistanceCullFade(UMaterialExpressionDistanceCullFade&&) = delete; \
	UMaterialExpressionDistanceCullFade(const UMaterialExpressionDistanceCullFade&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDistanceCullFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDistanceCullFade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDistanceCullFade) \
	NO_API virtual ~UMaterialExpressionDistanceCullFade();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDistanceCullFade;

// ********** End Class UMaterialExpressionDistanceCullFade ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceCullFade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
