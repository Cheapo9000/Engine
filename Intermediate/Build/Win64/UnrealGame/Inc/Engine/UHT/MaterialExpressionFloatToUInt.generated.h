// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFloatToUInt.h"

#ifdef ENGINE_MaterialExpressionFloatToUInt_generated_h
#error "MaterialExpressionFloatToUInt.generated.h already included, missing '#pragma once' in MaterialExpressionFloatToUInt.h"
#endif
#define ENGINE_MaterialExpressionFloatToUInt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFloatToUInt *******************************************
struct Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFloatToUInt_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFloatToUInt(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFloatToUInt_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFloatToUInt, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFloatToUInt_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFloatToUInt)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFloatToUInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFloatToUInt(UMaterialExpressionFloatToUInt&&) = delete; \
	UMaterialExpressionFloatToUInt(const UMaterialExpressionFloatToUInt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFloatToUInt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFloatToUInt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFloatToUInt) \
	ENGINE_API virtual ~UMaterialExpressionFloatToUInt();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFloatToUInt;

// ********** End Class UMaterialExpressionFloatToUInt *********************************************

// ********** Begin Class UMaterialExpressionUIntToFloat *******************************************
struct Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionUIntToFloat_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionUIntToFloat(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionUIntToFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionUIntToFloat, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionUIntToFloat_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionUIntToFloat)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionUIntToFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionUIntToFloat(UMaterialExpressionUIntToFloat&&) = delete; \
	UMaterialExpressionUIntToFloat(const UMaterialExpressionUIntToFloat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionUIntToFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionUIntToFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionUIntToFloat) \
	ENGINE_API virtual ~UMaterialExpressionUIntToFloat();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_44_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionUIntToFloat;

// ********** End Class UMaterialExpressionUIntToFloat *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h

// ********** Begin Enum EFloatToIntMode ***********************************************************
#define FOREACH_ENUM_EFLOATTOINTMODE(op) \
	op(EFloatToIntMode::Truncate) \
	op(EFloatToIntMode::Floor) \
	op(EFloatToIntMode::Round) \
	op(EFloatToIntMode::Ceil) 

enum class EFloatToIntMode : uint8;
template<> struct TIsUEnumClass<EFloatToIntMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFloatToIntMode>();
// ********** End Enum EFloatToIntMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
