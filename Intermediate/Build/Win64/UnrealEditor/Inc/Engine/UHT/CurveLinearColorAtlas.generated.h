// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveLinearColorAtlas.h"

#ifdef ENGINE_CurveLinearColorAtlas_generated_h
#error "CurveLinearColorAtlas.generated.h already included, missing '#pragma once' in CurveLinearColorAtlas.h"
#endif
#define ENGINE_CurveLinearColorAtlas_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveLinearColor;

// ********** Begin ScriptStruct FCurveAtlasColorAdjustments ***************************************
struct Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCurveAtlasColorAdjustments;
// ********** End ScriptStruct FCurveAtlasColorAdjustments *****************************************

// ********** Begin Class UCurveLinearColorAtlas ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCurvePosition);


struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUCurveLinearColorAtlas(); \
	friend struct ::Z_Construct_UClass_UCurveLinearColorAtlas_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveLinearColorAtlas, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister) \
	DECLARE_SERIALIZER(UCurveLinearColorAtlas)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveLinearColorAtlas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColorAtlas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveLinearColorAtlas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColorAtlas); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveLinearColorAtlas(UCurveLinearColorAtlas&&) = delete; \
	UCurveLinearColorAtlas(const UCurveLinearColorAtlas&) = delete; \
	ENGINE_API virtual ~UCurveLinearColorAtlas();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_70_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveLinearColorAtlas;

// ********** End Class UCurveLinearColorAtlas *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
