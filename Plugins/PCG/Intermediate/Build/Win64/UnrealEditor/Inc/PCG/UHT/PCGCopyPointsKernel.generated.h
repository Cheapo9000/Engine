// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCopyPointsKernel.h"

#ifdef PCG_PCGCopyPointsKernel_generated_h
#error "PCGCopyPointsKernel.generated.h already included, missing '#pragma once' in PCGCopyPointsKernel.h"
#endif
#define PCG_PCGCopyPointsKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCopyPointsKernel *****************************************************
struct Z_Construct_UClass_UPCGCopyPointsKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCopyPointsKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCopyPointsKernel(); \
	friend struct ::Z_Construct_UClass_UPCGCopyPointsKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCopyPointsKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCopyPointsKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCopyPointsKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGCopyPointsKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGCopyPointsKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCopyPointsKernel(UPCGCopyPointsKernel&&) = delete; \
	UPCGCopyPointsKernel(const UPCGCopyPointsKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCopyPointsKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCopyPointsKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCopyPointsKernel) \
	NO_API virtual ~UPCGCopyPointsKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCopyPointsKernel;

// ********** End Class UPCGCopyPointsKernel *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPointsKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
