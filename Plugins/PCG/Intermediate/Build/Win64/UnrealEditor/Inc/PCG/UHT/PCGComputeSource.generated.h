// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGComputeSource.h"

#ifdef PCG_PCGComputeSource_generated_h
#error "PCGComputeSource.generated.h already included, missing '#pragma once' in PCGComputeSource.h"
#endif
#define PCG_PCGComputeSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGComputeSource ********************************************************
struct Z_Construct_UClass_UPCGComputeSource_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeSource_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeSource(); \
	friend struct ::Z_Construct_UClass_UPCGComputeSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeSource, UComputeSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeSource_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeSource) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGComputeSource*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGComputeSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeSource(UPCGComputeSource&&) = delete; \
	UPCGComputeSource(const UPCGComputeSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGComputeSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComputeSource) \
	PCG_API virtual ~UPCGComputeSource();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeSource;

// ********** End Class UPCGComputeSource **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
