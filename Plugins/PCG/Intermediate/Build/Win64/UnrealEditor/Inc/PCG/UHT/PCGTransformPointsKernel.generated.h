// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Elements/PCGTransformPointsKernel.h"

#ifdef PCG_PCGTransformPointsKernel_generated_h
#error "PCGTransformPointsKernel.generated.h already included, missing '#pragma once' in PCGTransformPointsKernel.h"
#endif
#define PCG_PCGTransformPointsKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGTransformPointsKernel ************************************************
struct Z_Construct_UClass_UPCGTransformPointsKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGTransformPointsKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGTransformPointsKernel(); \
	friend struct ::Z_Construct_UClass_UPCGTransformPointsKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGTransformPointsKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGTransformPointsKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGTransformPointsKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGTransformPointsKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGTransformPointsKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGTransformPointsKernel(UPCGTransformPointsKernel&&) = delete; \
	UPCGTransformPointsKernel(const UPCGTransformPointsKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGTransformPointsKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGTransformPointsKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGTransformPointsKernel) \
	NO_API virtual ~UPCGTransformPointsKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGTransformPointsKernel;

// ********** End Class UPCGTransformPointsKernel **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGTransformPointsKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
