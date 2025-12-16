// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusSource.h"

#ifdef OPTIMUSCORE_OptimusSource_generated_h
#error "OptimusSource.generated.h already included, missing '#pragma once' in OptimusSource.h"
#endif
#define OPTIMUSCORE_OptimusSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSource ***********************************************************
struct Z_Construct_UClass_UOptimusSource_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSource_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSource(); \
	friend struct ::Z_Construct_UClass_UOptimusSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSource, UComputeSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSource_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSource) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusSource*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSource(UOptimusSource&&) = delete; \
	UOptimusSource(const UOptimusSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSource) \
	OPTIMUSCORE_API virtual ~UOptimusSource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSource;

// ********** End Class UOptimusSource *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
