// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Elements/PCGNormalToDensityKernel.h"

#ifdef PCG_PCGNormalToDensityKernel_generated_h
#error "PCGNormalToDensityKernel.generated.h already included, missing '#pragma once' in PCGNormalToDensityKernel.h"
#endif
#define PCG_PCGNormalToDensityKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGNormalToDensityKernel ************************************************
struct Z_Construct_UClass_UPCGNormalToDensityKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGNormalToDensityKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGNormalToDensityKernel(); \
	friend struct ::Z_Construct_UClass_UPCGNormalToDensityKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGNormalToDensityKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGNormalToDensityKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGNormalToDensityKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGNormalToDensityKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGNormalToDensityKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGNormalToDensityKernel(UPCGNormalToDensityKernel&&) = delete; \
	UPCGNormalToDensityKernel(const UPCGNormalToDensityKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGNormalToDensityKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNormalToDensityKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNormalToDensityKernel) \
	NO_API virtual ~UPCGNormalToDensityKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGNormalToDensityKernel;

// ********** End Class UPCGNormalToDensityKernel **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGNormalToDensityKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
