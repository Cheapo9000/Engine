// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateFontBlueprintLibrary.h"

#ifdef SLATERHIRENDERER_SlateFontBlueprintLibrary_generated_h
#error "SlateFontBlueprintLibrary.generated.h already included, missing '#pragma once' in SlateFontBlueprintLibrary.h"
#endif
#define SLATERHIRENDERER_SlateFontBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFontOutlineSettings;
struct FSlateFontInfo;

// ********** Begin Class USlateFontBlueprintLibrary ***********************************************
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeSlateFontInfo);


struct Z_Construct_UClass_USlateFontBlueprintLibrary_Statics;
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateFontBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateFontBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USlateFontBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATERHIRENDERER_API UClass* ::Z_Construct_UClass_USlateFontBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateFontBlueprintLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateRHIRenderer"), Z_Construct_UClass_USlateFontBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USlateFontBlueprintLibrary)


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateFontBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateFontBlueprintLibrary(USlateFontBlueprintLibrary&&) = delete; \
	USlateFontBlueprintLibrary(const USlateFontBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateFontBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateFontBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateFontBlueprintLibrary) \
	NO_API virtual ~USlateFontBlueprintLibrary();


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateFontBlueprintLibrary;

// ********** End Class USlateFontBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateRHIRenderer_Private_SlateFontBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
