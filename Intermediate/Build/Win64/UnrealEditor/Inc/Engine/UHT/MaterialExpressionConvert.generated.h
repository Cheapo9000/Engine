// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionConvert.h"

#ifdef ENGINE_MaterialExpressionConvert_generated_h
#error "MaterialExpressionConvert.generated.h already included, missing '#pragma once' in MaterialExpressionConvert.h"
#endif
#define ENGINE_MaterialExpressionConvert_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialExpressionConvertInput ***********************************
struct Z_Construct_UScriptStruct_FMaterialExpressionConvertInput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionConvertInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionConvertInput;
// ********** End ScriptStruct FMaterialExpressionConvertInput *************************************

// ********** Begin ScriptStruct FMaterialExpressionConvertOutput **********************************
struct Z_Construct_UScriptStruct_FMaterialExpressionConvertOutput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionConvertOutput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionConvertOutput;
// ********** End ScriptStruct FMaterialExpressionConvertOutput ************************************

// ********** Begin ScriptStruct FMaterialExpressionConvertMapping *********************************
struct Z_Construct_UScriptStruct_FMaterialExpressionConvertMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionConvertMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionConvertMapping;
// ********** End ScriptStruct FMaterialExpressionConvertMapping ***********************************

// ********** Begin Class UMaterialExpressionConvert ***********************************************
struct Z_Construct_UClass_UMaterialExpressionConvert_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConvert_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConvert(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionConvert_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionConvert_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionConvert, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionConvert_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionConvert)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_127_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionConvert(UMaterialExpressionConvert&&) = delete; \
	UMaterialExpressionConvert(const UMaterialExpressionConvert&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConvert); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConvert); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConvert) \
	ENGINE_API virtual ~UMaterialExpressionConvert();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_124_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionConvert;

// ********** End Class UMaterialExpressionConvert *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConvert_h

// ********** Begin Enum EMaterialExpressionConvertType ********************************************
#define FOREACH_ENUM_EMATERIALEXPRESSIONCONVERTTYPE(op) \
	op(EMaterialExpressionConvertType::Scalar) \
	op(EMaterialExpressionConvertType::Vector2) \
	op(EMaterialExpressionConvertType::Vector3) \
	op(EMaterialExpressionConvertType::Vector4) 

enum class EMaterialExpressionConvertType : uint8;
template<> struct TIsUEnumClass<EMaterialExpressionConvertType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialExpressionConvertType>();
// ********** End Enum EMaterialExpressionConvertType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
