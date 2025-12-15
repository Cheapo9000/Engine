// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBlendMaterialAttributes.h"

#ifdef ENGINE_MaterialExpressionBlendMaterialAttributes_generated_h
#error "MaterialExpressionBlendMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionBlendMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionBlendMaterialAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionBlendMaterialAttributes *******************************
struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionBlendMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionBlendMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlendMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlendMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlendMaterialAttributes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionBlendMaterialAttributes(UMaterialExpressionBlendMaterialAttributes&&) = delete; \
	UMaterialExpressionBlendMaterialAttributes(const UMaterialExpressionBlendMaterialAttributes&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionBlendMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionBlendMaterialAttributes;

// ********** End Class UMaterialExpressionBlendMaterialAttributes *********************************

// ********** Begin Class UMaterialExpressionLegacyBlendMaterialAttributes *************************
struct Z_Construct_UClass_UMaterialExpressionLegacyBlendMaterialAttributes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLegacyBlendMaterialAttributes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLegacyBlendMaterialAttributes(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLegacyBlendMaterialAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLegacyBlendMaterialAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLegacyBlendMaterialAttributes, UMaterialExpressionBlendMaterialAttributes, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLegacyBlendMaterialAttributes_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLegacyBlendMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLegacyBlendMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLegacyBlendMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLegacyBlendMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLegacyBlendMaterialAttributes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLegacyBlendMaterialAttributes(UMaterialExpressionLegacyBlendMaterialAttributes&&) = delete; \
	UMaterialExpressionLegacyBlendMaterialAttributes(const UMaterialExpressionLegacyBlendMaterialAttributes&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionLegacyBlendMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLegacyBlendMaterialAttributes;

// ********** End Class UMaterialExpressionLegacyBlendMaterialAttributes ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h

// ********** Begin Enum EMaterialAttributeBlend ***************************************************
#define FOREACH_ENUM_EMATERIALATTRIBUTEBLEND(op) \
	op(EMaterialAttributeBlend::Blend) \
	op(EMaterialAttributeBlend::UseA) \
	op(EMaterialAttributeBlend::UseB) 

namespace EMaterialAttributeBlend { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialAttributeBlend::Type>();
// ********** End Enum EMaterialAttributeBlend *****************************************************

// ********** Begin Enum EMaterialAttributeBlendFunction *******************************************
#define FOREACH_ENUM_EMATERIALATTRIBUTEBLENDFUNCTION(op) \
	op(EMaterialAttributeBlendFunction::Horizontal) \
	op(EMaterialAttributeBlendFunction::Vertical) 

namespace EMaterialAttributeBlendFunction { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialAttributeBlendFunction::Type>();
// ********** End Enum EMaterialAttributeBlendFunction *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
