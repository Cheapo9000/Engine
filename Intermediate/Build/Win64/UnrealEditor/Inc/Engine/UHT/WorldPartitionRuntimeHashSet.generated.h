// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h"

#ifdef ENGINE_WorldPartitionRuntimeHashSet_generated_h
#error "WorldPartitionRuntimeHashSet.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeHashSet.h"
#endif
#define ENGINE_WorldPartitionRuntimeHashSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRuntimePartitionHLODSetup ****************************************
struct Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRuntimePartitionHLODSetup;
// ********** End ScriptStruct FRuntimePartitionHLODSetup ******************************************

// ********** Begin ScriptStruct FRuntimePartitionDesc *********************************************
struct Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRuntimePartitionDesc;
// ********** End ScriptStruct FRuntimePartitionDesc ***********************************************

// ********** Begin ScriptStruct FRuntimePartitionStreamingData ************************************
struct Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRuntimePartitionStreamingData;
// ********** End ScriptStruct FRuntimePartitionStreamingData **************************************

// ********** Begin Class URuntimeHashSetExternalStreamingObject ***********************************
struct Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeHashSetExternalStreamingObject(); \
	friend struct ::Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeHashSetExternalStreamingObject, URuntimeHashExternalStreamingObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister) \
	DECLARE_SERIALIZER(URuntimeHashSetExternalStreamingObject)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeHashSetExternalStreamingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeHashSetExternalStreamingObject(URuntimeHashSetExternalStreamingObject&&) = delete; \
	URuntimeHashSetExternalStreamingObject(const URuntimeHashSetExternalStreamingObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeHashSetExternalStreamingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeHashSetExternalStreamingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeHashSetExternalStreamingObject) \
	ENGINE_API virtual ~URuntimeHashSetExternalStreamingObject();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_128_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeHashSetExternalStreamingObject;

// ********** End Class URuntimeHashSetExternalStreamingObject *************************************

// ********** Begin Class UWorldPartitionRuntimeHashSet ********************************************
struct Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeHashSet(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeHashSet, UWorldPartitionRuntimeHash, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeHashSet)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeHashSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeHashSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeHashSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeHashSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeHashSet(UWorldPartitionRuntimeHashSet&&) = delete; \
	UWorldPartitionRuntimeHashSet(const UWorldPartitionRuntimeHashSet&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeHashSet();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_149_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_152_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeHashSet;

// ********** End Class UWorldPartitionRuntimeHashSet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
