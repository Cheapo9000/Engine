// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSkinnedMeshSpawnerKernel.h"

#ifdef PCG_PCGSkinnedMeshSpawnerKernel_generated_h
#error "PCGSkinnedMeshSpawnerKernel.generated.h already included, missing '#pragma once' in PCGSkinnedMeshSpawnerKernel.h"
#endif
#define PCG_PCGSkinnedMeshSpawnerKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSkinnedMeshSpawnerKernel *********************************************
struct Z_Construct_UClass_UPCGSkinnedMeshSpawnerKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSkinnedMeshSpawnerKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSkinnedMeshSpawnerKernel(); \
	friend struct ::Z_Construct_UClass_UPCGSkinnedMeshSpawnerKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSkinnedMeshSpawnerKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSkinnedMeshSpawnerKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSkinnedMeshSpawnerKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGSkinnedMeshSpawnerKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSkinnedMeshSpawnerKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSkinnedMeshSpawnerKernel(UPCGSkinnedMeshSpawnerKernel&&) = delete; \
	UPCGSkinnedMeshSpawnerKernel(const UPCGSkinnedMeshSpawnerKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSkinnedMeshSpawnerKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSkinnedMeshSpawnerKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSkinnedMeshSpawnerKernel) \
	NO_API virtual ~UPCGSkinnedMeshSpawnerKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSkinnedMeshSpawnerKernel;

// ********** End Class UPCGSkinnedMeshSpawnerKernel ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawnerKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
