// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BrushBuilder.h"

#ifdef ENGINE_BrushBuilder_generated_h
#error "BrushBuilder.generated.h already included, missing '#pragma once' in BrushBuilder.h"
#endif
#define ENGINE_BrushBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBuilderPoly ******************************************************
struct Z_Construct_UScriptStruct_FBuilderPoly_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuilderPoly_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBuilderPoly;
// ********** End ScriptStruct FBuilderPoly ********************************************************

// ********** Begin Class UBrushBuilder ************************************************************
struct Z_Construct_UClass_UBrushBuilder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUBrushBuilder(); \
	friend struct ::Z_Construct_UClass_UBrushBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBrushBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UBrushBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBrushBuilder_NoRegister) \
	DECLARE_SERIALIZER(UBrushBuilder)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBrushBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBrushBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBrushBuilder(UBrushBuilder&&) = delete; \
	UBrushBuilder(const UBrushBuilder&) = delete; \
	ENGINE_API virtual ~UBrushBuilder();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_51_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBrushBuilder;

// ********** End Class UBrushBuilder **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
