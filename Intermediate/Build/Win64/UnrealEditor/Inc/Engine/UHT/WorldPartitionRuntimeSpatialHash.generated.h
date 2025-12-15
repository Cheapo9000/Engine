// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeSpatialHash.h"

#ifdef ENGINE_WorldPartitionRuntimeSpatialHash_generated_h
#error "WorldPartitionRuntimeSpatialHash.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeSpatialHash.h"
#endif
#define ENGINE_WorldPartitionRuntimeSpatialHash_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSpatialHashSettings **********************************************
struct Z_Construct_UScriptStruct_FSpatialHashSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpatialHashSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpatialHashSettings;
// ********** End ScriptStruct FSpatialHashSettings ************************************************

// ********** Begin ScriptStruct FSpatialHashStreamingGridLayerCell ********************************
struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpatialHashStreamingGridLayerCell;
// ********** End ScriptStruct FSpatialHashStreamingGridLayerCell **********************************

// ********** Begin ScriptStruct FSpatialHashStreamingGridLevel ************************************
struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpatialHashStreamingGridLevel;
// ********** End ScriptStruct FSpatialHashStreamingGridLevel **************************************

// ********** Begin ScriptStruct FSpatialHashStreamingGrid *****************************************
struct Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpatialHashStreamingGrid;
// ********** End ScriptStruct FSpatialHashStreamingGrid *******************************************

// ********** Begin ScriptStruct FSpatialHashRuntimeGrid *******************************************
struct Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_234_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpatialHashRuntimeGrid;
// ********** End ScriptStruct FSpatialHashRuntimeGrid *********************************************

// ********** Begin Class ASpatialHashRuntimeGridInfo **********************************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ASpatialHashRuntimeGridInfo, NO_API)


struct Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_INCLASS \
private: \
	static void StaticRegisterNativesASpatialHashRuntimeGridInfo(); \
	friend struct ::Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpatialHashRuntimeGridInfo, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister) \
	DECLARE_SERIALIZER(ASpatialHashRuntimeGridInfo) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialHashRuntimeGridInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialHashRuntimeGridInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialHashRuntimeGridInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialHashRuntimeGridInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpatialHashRuntimeGridInfo(ASpatialHashRuntimeGridInfo&&) = delete; \
	ASpatialHashRuntimeGridInfo(const ASpatialHashRuntimeGridInfo&) = delete; \
	NO_API virtual ~ASpatialHashRuntimeGridInfo();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_286_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_289_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpatialHashRuntimeGridInfo;

// ********** End Class ASpatialHashRuntimeGridInfo ************************************************

// ********** Begin Class URuntimeSpatialHashExternalStreamingObject *******************************
struct Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject(); \
	friend struct ::Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeSpatialHashExternalStreamingObject, URuntimeHashExternalStreamingObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister) \
	DECLARE_SERIALIZER(URuntimeSpatialHashExternalStreamingObject)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeSpatialHashExternalStreamingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeSpatialHashExternalStreamingObject(URuntimeSpatialHashExternalStreamingObject&&) = delete; \
	URuntimeSpatialHashExternalStreamingObject(const URuntimeSpatialHashExternalStreamingObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeSpatialHashExternalStreamingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeSpatialHashExternalStreamingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeSpatialHashExternalStreamingObject) \
	ENGINE_API virtual ~URuntimeSpatialHashExternalStreamingObject();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_298_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeSpatialHashExternalStreamingObject;

// ********** End Class URuntimeSpatialHashExternalStreamingObject *********************************

// ********** Begin Class UWorldPartitionRuntimeSpatialHash ****************************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionRuntimeSpatialHash, ENGINE_API)


struct Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeSpatialHash(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeSpatialHash, UWorldPartitionRuntimeHash, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeSpatialHash) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeSpatialHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeSpatialHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeSpatialHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeSpatialHash); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeSpatialHash(UWorldPartitionRuntimeSpatialHash&&) = delete; \
	UWorldPartitionRuntimeSpatialHash(const UWorldPartitionRuntimeSpatialHash&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeSpatialHash();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_312_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_315_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeSpatialHash;

// ********** End Class UWorldPartitionRuntimeSpatialHash ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h

// ********** Begin Enum EWorldPartitionCVarProjectDefaultOverride *********************************
#define FOREACH_ENUM_EWORLDPARTITIONCVARPROJECTDEFAULTOVERRIDE(op) \
	op(EWorldPartitionCVarProjectDefaultOverride::ProjectDefault) \
	op(EWorldPartitionCVarProjectDefaultOverride::Disabled) \
	op(EWorldPartitionCVarProjectDefaultOverride::Enabled) 

enum class EWorldPartitionCVarProjectDefaultOverride : uint8;
template<> struct TIsUEnumClass<EWorldPartitionCVarProjectDefaultOverride> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionCVarProjectDefaultOverride>();
// ********** End Enum EWorldPartitionCVarProjectDefaultOverride ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
