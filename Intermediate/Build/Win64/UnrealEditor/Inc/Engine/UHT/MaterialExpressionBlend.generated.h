// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBlend.h"

#ifdef ENGINE_MaterialExpressionBlend_generated_h
#error "MaterialExpressionBlend.generated.h already included, missing '#pragma once' in MaterialExpressionBlend.h"
#endif
#define ENGINE_MaterialExpressionBlend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionBlend *************************************************
struct Z_Construct_UClass_UMaterialExpressionBlend_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlend_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlend(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionBlend_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionBlend_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionBlend, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionBlend_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionBlend)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionBlend(UMaterialExpressionBlend&&) = delete; \
	UMaterialExpressionBlend(const UMaterialExpressionBlend&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlend); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlend) \
	ENGINE_API virtual ~UMaterialExpressionBlend();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionBlend;

// ********** End Class UMaterialExpressionBlend ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlend_h

// ********** Begin Enum EMaterialExpressionBlendMode **********************************************
#define FOREACH_ENUM_EMATERIALEXPRESSIONBLENDMODE(op) \
	op(EMaterialExpressionBlendMode::Blend) \
	op(EMaterialExpressionBlendMode::UseA) \
	op(EMaterialExpressionBlendMode::UseB) 

enum class EMaterialExpressionBlendMode : uint8;
template<> struct TIsUEnumClass<EMaterialExpressionBlendMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialExpressionBlendMode>();
// ********** End Enum EMaterialExpressionBlendMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
