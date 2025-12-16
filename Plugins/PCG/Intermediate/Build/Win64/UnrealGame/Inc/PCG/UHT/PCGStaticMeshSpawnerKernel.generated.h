// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGStaticMeshSpawnerKernel.h"

#ifdef PCG_PCGStaticMeshSpawnerKernel_generated_h
#error "PCGStaticMeshSpawnerKernel.generated.h already included, missing '#pragma once' in PCGStaticMeshSpawnerKernel.h"
#endif
#define PCG_PCGStaticMeshSpawnerKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGStaticMeshSpawnerKernel **********************************************
struct Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGStaticMeshSpawnerKernel(); \
	friend struct ::Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGStaticMeshSpawnerKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGStaticMeshSpawnerKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGStaticMeshSpawnerKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGStaticMeshSpawnerKernel(UPCGStaticMeshSpawnerKernel&&) = delete; \
	UPCGStaticMeshSpawnerKernel(const UPCGStaticMeshSpawnerKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGStaticMeshSpawnerKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGStaticMeshSpawnerKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGStaticMeshSpawnerKernel) \
	NO_API virtual ~UPCGStaticMeshSpawnerKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGStaticMeshSpawnerKernel;

// ********** End Class UPCGStaticMeshSpawnerKernel ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
