// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Elements/PCGCustomHLSLKernel.h"

#ifdef PCG_PCGCustomHLSLKernel_generated_h
#error "PCGCustomHLSLKernel.generated.h already included, missing '#pragma once' in PCGCustomHLSLKernel.h"
#endif
#define PCG_PCGCustomHLSLKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGParsedAttributeFunction ***************************************
struct Z_Construct_UScriptStruct_FPCGParsedAttributeFunction_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGParsedAttributeFunction_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGParsedAttributeFunction;
// ********** End ScriptStruct FPCGParsedAttributeFunction *****************************************

// ********** Begin ScriptStruct FPCGParsedCopyElementFunction *************************************
struct Z_Construct_UScriptStruct_FPCGParsedCopyElementFunction_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGParsedCopyElementFunction_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGParsedCopyElementFunction;
// ********** End ScriptStruct FPCGParsedCopyElementFunction ***************************************

// ********** Begin ScriptStruct FPCGCustomHLSLParsedSource ****************************************
struct Z_Construct_UScriptStruct_FPCGCustomHLSLParsedSource_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGCustomHLSLParsedSource_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGCustomHLSLParsedSource;
// ********** End ScriptStruct FPCGCustomHLSLParsedSource ******************************************

// ********** Begin Class UPCGCustomHLSLKernel *****************************************************
struct Z_Construct_UClass_UPCGCustomHLSLKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCustomHLSLKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCustomHLSLKernel(); \
	friend struct ::Z_Construct_UClass_UPCGCustomHLSLKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCustomHLSLKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCustomHLSLKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCustomHLSLKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGCustomHLSLKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGCustomHLSLKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCustomHLSLKernel(UPCGCustomHLSLKernel&&) = delete; \
	UPCGCustomHLSLKernel(const UPCGCustomHLSLKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCustomHLSLKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCustomHLSLKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCustomHLSLKernel) \
	NO_API virtual ~UPCGCustomHLSLKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_110_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCustomHLSLKernel;

// ********** End Class UPCGCustomHLSLKernel *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSLKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
