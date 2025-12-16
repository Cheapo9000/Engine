// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/BuiltInKernels/PCGCountUniqueAttributeValuesKernel.h"

#ifdef PCG_PCGCountUniqueAttributeValuesKernel_generated_h
#error "PCGCountUniqueAttributeValuesKernel.generated.h already included, missing '#pragma once' in PCGCountUniqueAttributeValuesKernel.h"
#endif
#define PCG_PCGCountUniqueAttributeValuesKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCountUniqueAttributeValuesKernel *************************************
struct Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCountUniqueAttributeValuesKernel(); \
	friend struct ::Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCountUniqueAttributeValuesKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGCountUniqueAttributeValuesKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGCountUniqueAttributeValuesKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCountUniqueAttributeValuesKernel(UPCGCountUniqueAttributeValuesKernel&&) = delete; \
	UPCGCountUniqueAttributeValuesKernel(const UPCGCountUniqueAttributeValuesKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCountUniqueAttributeValuesKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCountUniqueAttributeValuesKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCountUniqueAttributeValuesKernel) \
	NO_API virtual ~UPCGCountUniqueAttributeValuesKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCountUniqueAttributeValuesKernel;

// ********** End Class UPCGCountUniqueAttributeValuesKernel ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
