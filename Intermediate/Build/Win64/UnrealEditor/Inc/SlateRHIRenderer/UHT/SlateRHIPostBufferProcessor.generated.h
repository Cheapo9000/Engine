// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FX/SlateRHIPostBufferProcessor.h"

#ifdef SLATERHIRENDERER_SlateRHIPostBufferProcessor_generated_h
#error "SlateRHIPostBufferProcessor.generated.h already included, missing '#pragma once' in SlateRHIPostBufferProcessor.h"
#endif
#define SLATERHIRENDERER_SlateRHIPostBufferProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlateRHIPostBufferProcessor *********************************************
struct Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics;
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister();

#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateRHIPostBufferProcessor(); \
	friend struct ::Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATERHIRENDERER_API UClass* ::Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateRHIPostBufferProcessor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SlateRHIRenderer"), Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister) \
	DECLARE_SERIALIZER(USlateRHIPostBufferProcessor)


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATERHIRENDERER_API USlateRHIPostBufferProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateRHIPostBufferProcessor(USlateRHIPostBufferProcessor&&) = delete; \
	USlateRHIPostBufferProcessor(const USlateRHIPostBufferProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATERHIRENDERER_API, USlateRHIPostBufferProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateRHIPostBufferProcessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateRHIPostBufferProcessor)


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_73_PROLOG
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateRHIPostBufferProcessor;

// ********** End Class USlateRHIPostBufferProcessor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
