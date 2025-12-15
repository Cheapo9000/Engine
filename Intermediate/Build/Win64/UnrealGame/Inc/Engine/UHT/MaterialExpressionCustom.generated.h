// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCustom.h"

#ifdef ENGINE_MaterialExpressionCustom_generated_h
#error "MaterialExpressionCustom.generated.h already included, missing '#pragma once' in MaterialExpressionCustom.h"
#endif
#define ENGINE_MaterialExpressionCustom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomInput ******************************************************
struct Z_Construct_UScriptStruct_FCustomInput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomInput;
// ********** End ScriptStruct FCustomInput ********************************************************

// ********** Begin ScriptStruct FCustomOutput *****************************************************
struct Z_Construct_UScriptStruct_FCustomOutput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomOutput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomOutput;
// ********** End ScriptStruct FCustomOutput *******************************************************

// ********** Begin ScriptStruct FCustomDefine *****************************************************
struct Z_Construct_UScriptStruct_FCustomDefine_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomDefine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomDefine;
// ********** End ScriptStruct FCustomDefine *******************************************************

// ********** Begin Class UMaterialExpressionCustom ************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionCustom, ENGINE_API)


struct Z_Construct_UClass_UMaterialExpressionCustom_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCustom(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCustom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCustom_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCustom, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCustom_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCustom) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCustom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCustom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCustom); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCustom(UMaterialExpressionCustom&&) = delete; \
	UMaterialExpressionCustom(const UMaterialExpressionCustom&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionCustom();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_62_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCustom;

// ********** End Class UMaterialExpressionCustom **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustom_h

// ********** Begin Enum ECustomMaterialOutputType *************************************************
#define FOREACH_ENUM_ECUSTOMMATERIALOUTPUTTYPE(op) \
	op(CMOT_Float1) \
	op(CMOT_Float2) \
	op(CMOT_Float3) \
	op(CMOT_Float4) \
	op(CMOT_MaterialAttributes) 

enum ECustomMaterialOutputType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomMaterialOutputType>();
// ********** End Enum ECustomMaterialOutputType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
