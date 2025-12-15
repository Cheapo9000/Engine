// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/StandaloneHLODActor.h"

#ifdef ENGINE_StandaloneHLODActor_generated_h
#error "StandaloneHLODActor.generated.h already included, missing '#pragma once' in StandaloneHLODActor.h"
#endif
#define ENGINE_StandaloneHLODActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWorldPartitionStandaloneHLOD ********************************************
struct Z_Construct_UClass_AWorldPartitionStandaloneHLOD_Statics;
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionStandaloneHLOD_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionStandaloneHLOD(); \
	friend struct ::Z_Construct_UClass_AWorldPartitionStandaloneHLOD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AWorldPartitionStandaloneHLOD_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldPartitionStandaloneHLOD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AWorldPartitionStandaloneHLOD_NoRegister) \
	DECLARE_SERIALIZER(AWorldPartitionStandaloneHLOD) \
	virtual UObject* _getUObject() const override { return const_cast<AWorldPartitionStandaloneHLOD*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldPartitionStandaloneHLOD(AWorldPartitionStandaloneHLOD&&) = delete; \
	AWorldPartitionStandaloneHLOD(const AWorldPartitionStandaloneHLOD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionStandaloneHLOD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionStandaloneHLOD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionStandaloneHLOD) \
	ENGINE_API virtual ~AWorldPartitionStandaloneHLOD();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldPartitionStandaloneHLOD;

// ********** End Class AWorldPartitionStandaloneHLOD **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
