// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/SlateBlueprintLibrary.h"

#ifdef UMG_SlateBlueprintLibrary_generated_h
#error "SlateBlueprintLibrary.generated.h already included, missing '#pragma once' in SlateBlueprintLibrary.h"
#endif
#define UMG_SlateBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGeometry;
struct FSlateBrush;

// ********** Begin Class USlateBlueprintLibrary ***************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execScreenToViewport); \
	DECLARE_FUNCTION(execScreenToWidgetAbsolute); \
	DECLARE_FUNCTION(execScreenToWidgetLocal); \
	DECLARE_FUNCTION(execAbsoluteToViewport); \
	DECLARE_FUNCTION(execLocalToViewport); \
	DECLARE_FUNCTION(execEqualEqual_SlateBrush); \
	DECLARE_FUNCTION(execTransformVectorLocalToAbsolute); \
	DECLARE_FUNCTION(execTransformVectorAbsoluteToLocal); \
	DECLARE_FUNCTION(execTransformScalarLocalToAbsolute); \
	DECLARE_FUNCTION(execTransformScalarAbsoluteToLocal); \
	DECLARE_FUNCTION(execVector_LocalToAbsolute); \
	DECLARE_FUNCTION(execVector_AbsoluteToLocal); \
	DECLARE_FUNCTION(execScalar_LocalToAbsolute); \
	DECLARE_FUNCTION(execScalar_AbsoluteToLocal); \
	DECLARE_FUNCTION(execGetAbsoluteSize); \
	DECLARE_FUNCTION(execGetLocalSize); \
	DECLARE_FUNCTION(execGetLocalTopLeft); \
	DECLARE_FUNCTION(execLocalToAbsolute); \
	DECLARE_FUNCTION(execAbsoluteToLocal); \
	DECLARE_FUNCTION(execIsUnderLocation);


struct Z_Construct_UClass_USlateBlueprintLibrary_Statics;
UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSlateBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USlateBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USlateBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USlateBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USlateBlueprintLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USlateBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USlateBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateBlueprintLibrary(USlateBlueprintLibrary&&) = delete; \
	USlateBlueprintLibrary(const USlateBlueprintLibrary&) = delete; \
	UMG_API virtual ~USlateBlueprintLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateBlueprintLibrary;

// ********** End Class USlateBlueprintLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
