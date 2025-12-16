// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusKernelSource.h"

#ifdef OPTIMUSCORE_OptimusKernelSource_generated_h
#error "OptimusKernelSource.generated.h already included, missing '#pragma once' in OptimusKernelSource.h"
#endif
#define OPTIMUSCORE_OptimusKernelSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusKernelSource *****************************************************
struct Z_Construct_UClass_UOptimusKernelSource_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusKernelSource_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusKernelSource(); \
	friend struct ::Z_Construct_UClass_UOptimusKernelSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusKernelSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusKernelSource, UComputeKernelSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusKernelSource_NoRegister) \
	DECLARE_SERIALIZER(UOptimusKernelSource)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusKernelSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusKernelSource(UOptimusKernelSource&&) = delete; \
	UOptimusKernelSource(const UOptimusKernelSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusKernelSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusKernelSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusKernelSource) \
	OPTIMUSCORE_API virtual ~UOptimusKernelSource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_8_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusKernelSource;

// ********** End Class UOptimusKernelSource *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
