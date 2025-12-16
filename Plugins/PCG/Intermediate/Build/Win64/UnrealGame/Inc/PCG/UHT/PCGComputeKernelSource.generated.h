// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGComputeKernelSource.h"

#ifdef PCG_PCGComputeKernelSource_generated_h
#error "PCGComputeKernelSource.generated.h already included, missing '#pragma once' in PCGComputeKernelSource.h"
#endif
#define PCG_PCGComputeKernelSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGComputeKernelSource **************************************************
struct Z_Construct_UClass_UPCGComputeKernelSource_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeKernelSource_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeKernelSource(); \
	friend struct ::Z_Construct_UClass_UPCGComputeKernelSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeKernelSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeKernelSource, UComputeKernelSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeKernelSource_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeKernelSource)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGComputeKernelSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeKernelSource(UPCGComputeKernelSource&&) = delete; \
	UPCGComputeKernelSource(const UPCGComputeKernelSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGComputeKernelSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeKernelSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComputeKernelSource) \
	PCG_API virtual ~UPCGComputeKernelSource();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeKernelSource;

// ********** End Class UPCGComputeKernelSource ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeKernelSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
