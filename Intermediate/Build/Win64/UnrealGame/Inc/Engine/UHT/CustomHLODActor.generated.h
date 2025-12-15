// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/CustomHLODActor.h"

#ifdef ENGINE_CustomHLODActor_generated_h
#error "CustomHLODActor.generated.h already included, missing '#pragma once' in CustomHLODActor.h"
#endif
#define ENGINE_CustomHLODActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWorldPartitionCustomHLOD ************************************************
struct Z_Construct_UClass_AWorldPartitionCustomHLOD_Statics;
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionCustomHLOD_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionCustomHLOD(); \
	friend struct ::Z_Construct_UClass_AWorldPartitionCustomHLOD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AWorldPartitionCustomHLOD_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldPartitionCustomHLOD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AWorldPartitionCustomHLOD_NoRegister) \
	DECLARE_SERIALIZER(AWorldPartitionCustomHLOD)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldPartitionCustomHLOD(AWorldPartitionCustomHLOD&&) = delete; \
	AWorldPartitionCustomHLOD(const AWorldPartitionCustomHLOD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionCustomHLOD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionCustomHLOD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionCustomHLOD) \
	ENGINE_API virtual ~AWorldPartitionCustomHLOD();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldPartitionCustomHLOD;

// ********** End Class AWorldPartitionCustomHLOD **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
