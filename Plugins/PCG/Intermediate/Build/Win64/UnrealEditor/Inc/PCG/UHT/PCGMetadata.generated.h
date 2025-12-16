// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadata.h"

#ifdef PCG_PCGMetadata_generated_h
#error "PCGMetadata.generated.h already included, missing '#pragma once' in PCGMetadata.h"
#endif
#define PCG_PCGMetadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
enum class EPCGMetadataFilterMode : uint8;
enum class EPCGMetadataOp : uint8;
enum class EPCGMetadataTypes : uint8;
enum class EPCGStringMatchingOperator : uint8;
struct FPCGPoint;
struct FSoftClassPath;
struct FSoftObjectPath;

// ********** Begin Class UPCGMetadata *************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_InitializeAsCopyWithAttributeFilter); \
	DECLARE_FUNCTION(execK2_InitializeAsCopy); \
	DECLARE_FUNCTION(execGetItemCountForChild); \
	DECLARE_FUNCTION(execAccumulatePointWeightedAttributes); \
	DECLARE_FUNCTION(execResetPointWeightedAttributes); \
	DECLARE_FUNCTION(execSetPointAttributes); \
	DECLARE_FUNCTION(execMergePointAttributes); \
	DECLARE_FUNCTION(execSetAttributesByKey); \
	DECLARE_FUNCTION(execAccumulateWeightedAttributesByKey); \
	DECLARE_FUNCTION(execResetWeightedAttributesByKey); \
	DECLARE_FUNCTION(execMergeAttributesByKey); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execBP_ClearAttribute); \
	DECLARE_FUNCTION(execBP_RenameAttribute); \
	DECLARE_FUNCTION(execBP_CopyExistingAttribute); \
	DECLARE_FUNCTION(execBP_DeleteAttribute); \
	DECLARE_FUNCTION(execGetAttributes); \
	DECLARE_FUNCTION(execGetAttributeCount); \
	DECLARE_FUNCTION(execHasCommonAttributes); \
	DECLARE_FUNCTION(execBP_HasAttribute); \
	DECLARE_FUNCTION(execCreateSoftClassPathAttribute); \
	DECLARE_FUNCTION(execCreateSoftObjectPathAttribute); \
	DECLARE_FUNCTION(execCreateBoolAttribute); \
	DECLARE_FUNCTION(execCreateNameAttribute); \
	DECLARE_FUNCTION(execCreateStringAttribute); \
	DECLARE_FUNCTION(execCreateTransformAttribute); \
	DECLARE_FUNCTION(execCreateQuatAttribute); \
	DECLARE_FUNCTION(execCreateRotatorAttribute); \
	DECLARE_FUNCTION(execCreateVector2Attribute); \
	DECLARE_FUNCTION(execCreateVector4Attribute); \
	DECLARE_FUNCTION(execCreateVectorAttribute); \
	DECLARE_FUNCTION(execCreateDoubleAttribute); \
	DECLARE_FUNCTION(execCreateFloatAttribute); \
	DECLARE_FUNCTION(execCreateInteger64Attribute); \
	DECLARE_FUNCTION(execCreateInteger32Attribute); \
	DECLARE_FUNCTION(execFlatten); \
	DECLARE_FUNCTION(execBP_CopyAttribute); \
	DECLARE_FUNCTION(execCopyAttributes); \
	DECLARE_FUNCTION(execBP_AddAttribute); \
	DECLARE_FUNCTION(execAddAttributesFiltered); \
	DECLARE_FUNCTION(execAddAttributes); \
	DECLARE_FUNCTION(execInitializeWithAttributeFilter); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGMetadata, PCG_API)


struct Z_Construct_UClass_UPCGMetadata_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadata(); \
	friend struct ::Z_Construct_UClass_UPCGMetadata_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadata_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadata, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadata_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadata) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadata(UPCGMetadata&&) = delete; \
	UPCGMetadata(const UPCGMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadata) \
	PCG_API virtual ~UPCGMetadata();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_52_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadata;

// ********** End Class UPCGMetadata ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
