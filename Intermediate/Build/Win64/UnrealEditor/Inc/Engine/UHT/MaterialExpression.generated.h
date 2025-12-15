// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpression.h"

#ifdef ENGINE_MaterialExpression_generated_h
#error "MaterialExpression.generated.h already included, missing '#pragma once' in MaterialExpression.h"
#endif
#define ENGINE_MaterialExpression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialExpressionCollection *************************************
struct Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionCollection;
// ********** End ScriptStruct FMaterialExpressionCollection ***************************************

// ********** Begin Class UMaterialExpression ******************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpression, ENGINE_API)


struct Z_Construct_UClass_UMaterialExpression_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpression(); \
	friend struct ::Z_Construct_UClass_UMaterialExpression_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpression_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpression_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpression) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MaterialExpressions");} \



#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpression); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpression(UMaterialExpression&&) = delete; \
	UMaterialExpression(const UMaterialExpression&) = delete; \
	ENGINE_API virtual ~UMaterialExpression();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_148_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpression;

// ********** End Class UMaterialExpression ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpression_h

// ********** Begin Enum EPositionOrigin ***********************************************************
#define FOREACH_ENUM_EPOSITIONORIGIN(op) \
	op(EPositionOrigin::Absolute) \
	op(EPositionOrigin::CameraRelative) 

enum class EPositionOrigin : uint8;
template<> struct TIsUEnumClass<EPositionOrigin> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPositionOrigin>();
// ********** End Enum EPositionOrigin *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
