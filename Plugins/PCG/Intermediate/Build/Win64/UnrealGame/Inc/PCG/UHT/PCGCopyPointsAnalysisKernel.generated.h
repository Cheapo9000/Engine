// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCopyPointsAnalysisKernel.h"

#ifdef PCG_PCGCopyPointsAnalysisKernel_generated_h
#error "PCGCopyPointsAnalysisKernel.generated.h already included, missing '#pragma once' in PCGCopyPointsAnalysisKernel.h"
#endif
#define PCG_PCGCopyPointsAnalysisKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCopyPointsAnalysisKernel *********************************************
struct Z_Construct_UClass_UPCGCopyPointsAnalysisKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCopyPointsAnalysisKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCopyPointsAnalysisKernel(); \
	friend struct ::Z_Construct_UClass_UPCGCopyPointsAnalysisKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCopyPointsAnalysisKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCopyPointsAnalysisKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCopyPointsAnalysisKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGCopyPointsAnalysisKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGCopyPointsAnalysisKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCopyPointsAnalysisKernel(UPCGCopyPointsAnalysisKernel&&) = delete; \
	UPCGCopyPointsAnalysisKernel(const UPCGCopyPointsAnalysisKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCopyPointsAnalysisKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCopyPointsAnalysisKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCopyPointsAnalysisKernel) \
	NO_API virtual ~UPCGCopyPointsAnalysisKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCopyPointsAnalysisKernel;

// ********** End Class UPCGCopyPointsAnalysisKernel ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsAnalysisKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
