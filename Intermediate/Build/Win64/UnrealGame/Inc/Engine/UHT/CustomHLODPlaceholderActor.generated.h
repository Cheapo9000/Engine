// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/CustomHLODPlaceholderActor.h"

#ifdef ENGINE_CustomHLODPlaceholderActor_generated_h
#error "CustomHLODPlaceholderActor.generated.h already included, missing '#pragma once' in CustomHLODPlaceholderActor.h"
#endif
#define ENGINE_CustomHLODPlaceholderActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWorldPartitionCustomHLODPlaceholder *************************************
struct Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_Statics;
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionCustomHLODPlaceholder(); \
	friend struct ::Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldPartitionCustomHLODPlaceholder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_NoRegister) \
	DECLARE_SERIALIZER(AWorldPartitionCustomHLODPlaceholder)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldPartitionCustomHLODPlaceholder(AWorldPartitionCustomHLODPlaceholder&&) = delete; \
	AWorldPartitionCustomHLODPlaceholder(const AWorldPartitionCustomHLODPlaceholder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionCustomHLODPlaceholder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionCustomHLODPlaceholder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionCustomHLODPlaceholder) \
	ENGINE_API virtual ~AWorldPartitionCustomHLODPlaceholder();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldPartitionCustomHLODPlaceholder;

// ********** End Class AWorldPartitionCustomHLODPlaceholder ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
