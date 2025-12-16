// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/BuiltInKernels/PCGDataNumKernel.h"

#ifdef PCG_PCGDataNumKernel_generated_h
#error "PCGDataNumKernel.generated.h already included, missing '#pragma once' in PCGDataNumKernel.h"
#endif
#define PCG_PCGDataNumKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataNumKernel ********************************************************
struct Z_Construct_UClass_UPCGDataNumKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataNumKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataNumKernel(); \
	friend struct ::Z_Construct_UClass_UPCGDataNumKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataNumKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataNumKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataNumKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataNumKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataNumKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataNumKernel(UPCGDataNumKernel&&) = delete; \
	UPCGDataNumKernel(const UPCGDataNumKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataNumKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataNumKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataNumKernel) \
	NO_API virtual ~UPCGDataNumKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataNumKernel;

// ********** End Class UPCGDataNumKernel **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
