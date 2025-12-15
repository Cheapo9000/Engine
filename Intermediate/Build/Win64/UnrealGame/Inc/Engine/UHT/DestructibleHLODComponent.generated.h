// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/DestructibleHLODComponent.h"

#ifdef ENGINE_DestructibleHLODComponent_generated_h
#error "DestructibleHLODComponent.generated.h already included, missing '#pragma once' in DestructibleHLODComponent.h"
#endif
#define ENGINE_DestructibleHLODComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldPartitionDestructibleHLODDamagedActorState ******************
struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FWorldPartitionDestructibleHLODDamagedActorState;
// ********** End ScriptStruct FWorldPartitionDestructibleHLODDamagedActorState ********************

// ********** Begin ScriptStruct FWorldPartitionDestructibleHLODState ******************************
struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FWorldPartitionDestructibleHLODState, DamagedActors, ENGINE_API );


struct FWorldPartitionDestructibleHLODState;
// ********** End ScriptStruct FWorldPartitionDestructibleHLODState ********************************

// ********** Begin ScriptStruct FComponentInstanceMapping *****************************************
struct Z_Construct_UScriptStruct_FComponentInstanceMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComponentInstanceMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FComponentInstanceMapping;
// ********** End ScriptStruct FComponentInstanceMapping *******************************************

// ********** Begin ScriptStruct FActorInstanceMappingsRef *****************************************
struct Z_Construct_UScriptStruct_FActorInstanceMappingsRef_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorInstanceMappingsRef_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActorInstanceMappingsRef;
// ********** End ScriptStruct FActorInstanceMappingsRef *******************************************

// ********** Begin ScriptStruct FHLODInstancingPackedMappingData **********************************
struct Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_230_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHLODInstancingPackedMappingData;
// ********** End ScriptStruct FHLODInstancingPackedMappingData ************************************

// ********** Begin Class UWorldPartitionDestructibleHLODComponent *********************************
struct Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_281_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionDestructibleHLODComponent(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionDestructibleHLODComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionDestructibleHLODComponent) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DestructibleHLODState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DestructibleHLODState	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_281_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionDestructibleHLODComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionDestructibleHLODComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionDestructibleHLODComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionDestructibleHLODComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionDestructibleHLODComponent(UWorldPartitionDestructibleHLODComponent&&) = delete; \
	UWorldPartitionDestructibleHLODComponent(const UWorldPartitionDestructibleHLODComponent&) = delete; \
	ENGINE_API virtual ~UWorldPartitionDestructibleHLODComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_278_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_281_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_281_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_281_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionDestructibleHLODComponent;

// ********** End Class UWorldPartitionDestructibleHLODComponent ***********************************

// ********** Begin Class UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *****************
struct Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_332_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent, UWorldPartitionDestructibleHLODComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_332_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent(UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent&&) = delete; \
	UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent(const UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent&) = delete; \
	ENGINE_API virtual ~UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_329_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_332_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_332_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_332_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent;

// ********** End Class UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *******************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
