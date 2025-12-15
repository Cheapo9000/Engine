// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionClamp.h"

#ifdef ENGINE_MaterialExpressionClamp_generated_h
#error "MaterialExpressionClamp.generated.h already included, missing '#pragma once' in MaterialExpressionClamp.h"
#endif
#define ENGINE_MaterialExpressionClamp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionClamp *************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionClamp, ENGINE_API)


struct Z_Construct_UClass_UMaterialExpressionClamp_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionClamp(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionClamp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionClamp_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionClamp, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionClamp_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionClamp) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionClamp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionClamp(UMaterialExpressionClamp&&) = delete; \
	UMaterialExpressionClamp(const UMaterialExpressionClamp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionClamp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionClamp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionClamp) \
	ENGINE_API virtual ~UMaterialExpressionClamp();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionClamp;

// ********** End Class UMaterialExpressionClamp ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClamp_h

// ********** Begin Enum EClampMode ****************************************************************
#define FOREACH_ENUM_ECLAMPMODE(op) \
	op(CMODE_Clamp) \
	op(CMODE_ClampMin) \
	op(CMODE_ClampMax) 

enum EClampMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EClampMode>();
// ********** End Enum EClampMode ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
