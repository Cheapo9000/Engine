// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataPartitionKernel.h"

#ifdef PCG_PCGMetadataPartitionKernel_generated_h
#error "PCGMetadataPartitionKernel.generated.h already included, missing '#pragma once' in PCGMetadataPartitionKernel.h"
#endif
#define PCG_PCGMetadataPartitionKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataPartitionKernel **********************************************
struct Z_Construct_UClass_UPCGMetadataPartitionKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataPartitionKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataPartitionKernel(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataPartitionKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataPartitionKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataPartitionKernel, UPCGComputeKernel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataPartitionKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataPartitionKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadataPartitionKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataPartitionKernel(UPCGMetadataPartitionKernel&&) = delete; \
	UPCGMetadataPartitionKernel(const UPCGMetadataPartitionKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadataPartitionKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataPartitionKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataPartitionKernel) \
	NO_API virtual ~UPCGMetadataPartitionKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataPartitionKernel;

// ********** End Class UPCGMetadataPartitionKernel ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartitionKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
