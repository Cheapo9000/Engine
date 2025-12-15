// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FX/SlateFXSubsystem.h"

#ifdef SLATERHIRENDERER_SlateFXSubsystem_generated_h
#error "SlateFXSubsystem.generated.h already included, missing '#pragma once' in SlateFXSubsystem.h"
#endif
#define SLATERHIRENDERER_SlateFXSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USlateRHIPostBufferProcessor;
enum class ESlatePostRT : uint8;

// ********** Begin Class USlateFXSubsystem ********************************************************
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSlatePostProcessor);


struct Z_Construct_UClass_USlateFXSubsystem_Statics;
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateFXSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateFXSubsystem(); \
	friend struct ::Z_Construct_UClass_USlateFXSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATERHIRENDERER_API UClass* ::Z_Construct_UClass_USlateFXSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateFXSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateRHIRenderer"), Z_Construct_UClass_USlateFXSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USlateFXSubsystem)


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATERHIRENDERER_API USlateFXSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateFXSubsystem(USlateFXSubsystem&&) = delete; \
	USlateFXSubsystem(const USlateFXSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATERHIRENDERER_API, USlateFXSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateFXSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlateFXSubsystem) \
	SLATERHIRENDERER_API virtual ~USlateFXSubsystem();


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_16_PROLOG
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateFXSubsystem;

// ********** End Class USlateFXSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
