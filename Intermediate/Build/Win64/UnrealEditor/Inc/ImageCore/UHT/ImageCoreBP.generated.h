// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageCoreBP.h"

#ifdef IMAGECORE_ImageCoreBP_generated_h
#error "ImageCoreBP.generated.h already included, missing '#pragma once' in ImageCoreBP.h"
#endif
#define IMAGECORE_ImageCoreBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSharedImageConstRefBlueprint;

// ********** Begin ScriptStruct FSharedImageConstRefBlueprint *************************************
struct Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics;
#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics; \
	IMAGECORE_API static class UScriptStruct* StaticStruct();


struct FSharedImageConstRefBlueprint;
// ********** End ScriptStruct FSharedImageConstRefBlueprint ***************************************

// ********** Begin Class USharedImageConstRefBlueprintFns *****************************************
#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPixelValue); \
	DECLARE_FUNCTION(execGetPixelLinearColor); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics;
IMAGECORE_API UClass* Z_Construct_UClass_USharedImageConstRefBlueprintFns_NoRegister();

#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedImageConstRefBlueprintFns(); \
	friend struct ::Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMAGECORE_API UClass* ::Z_Construct_UClass_USharedImageConstRefBlueprintFns_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedImageConstRefBlueprintFns, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageCore"), Z_Construct_UClass_USharedImageConstRefBlueprintFns_NoRegister) \
	DECLARE_SERIALIZER(USharedImageConstRefBlueprintFns)


#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IMAGECORE_API USharedImageConstRefBlueprintFns(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedImageConstRefBlueprintFns(USharedImageConstRefBlueprintFns&&) = delete; \
	USharedImageConstRefBlueprintFns(const USharedImageConstRefBlueprintFns&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGECORE_API, USharedImageConstRefBlueprintFns); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedImageConstRefBlueprintFns); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedImageConstRefBlueprintFns) \
	IMAGECORE_API virtual ~USharedImageConstRefBlueprintFns();


#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_27_PROLOG
#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedImageConstRefBlueprintFns;

// ********** End Class USharedImageConstRefBlueprintFns *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
