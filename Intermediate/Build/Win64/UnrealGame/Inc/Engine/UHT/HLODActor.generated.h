// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODActor.h"

#ifdef ENGINE_HLODActor_generated_h
#error "HLODActor.generated.h already included, missing '#pragma once' in HLODActor.h"
#endif
#define ENGINE_HLODActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FExportHLODAssetsParams;

// ********** Begin ScriptStruct FExportHLODAssetsParams *******************************************
struct Z_Construct_UScriptStruct_FExportHLODAssetsParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExportHLODAssetsParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FExportHLODAssetsParams;
// ********** End ScriptStruct FExportHLODAssetsParams *********************************************

// ********** Begin Class AWorldPartitionHLOD ******************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execExportHLODAssets);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldPartitionHLOD, ENGINE_API)


struct Z_Construct_UClass_AWorldPartitionHLOD_Statics;
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPartitionHLOD(); \
	friend struct ::Z_Construct_UClass_AWorldPartitionHLOD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AWorldPartitionHLOD_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldPartitionHLOD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AWorldPartitionHLOD_NoRegister) \
	DECLARE_SERIALIZER(AWorldPartitionHLOD) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionHLOD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionHLOD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionHLOD); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldPartitionHLOD(AWorldPartitionHLOD&&) = delete; \
	AWorldPartitionHLOD(const AWorldPartitionHLOD&) = delete; \
	ENGINE_API virtual ~AWorldPartitionHLOD();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldPartitionHLOD;

// ********** End Class AWorldPartitionHLOD ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h

// ********** Begin Enum EExportHLODMeshOrigin *****************************************************
#define FOREACH_ENUM_EEXPORTHLODMESHORIGIN(op) \
	op(EExportHLODMeshOrigin::Actor) \
	op(EExportHLODMeshOrigin::World) 

enum class EExportHLODMeshOrigin : uint8;
template<> struct TIsUEnumClass<EExportHLODMeshOrigin> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EExportHLODMeshOrigin>();
// ********** End Enum EExportHLODMeshOrigin *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
