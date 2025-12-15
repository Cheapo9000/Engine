// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/ReplicationDataStream.h"

#ifdef IRISCORE_ReplicationDataStream_generated_h
#error "ReplicationDataStream.generated.h already included, missing '#pragma once' in ReplicationDataStream.h"
#endif
#define IRISCORE_ReplicationDataStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplicationDataStream ***************************************************
struct Z_Construct_UClass_UReplicationDataStream_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UReplicationDataStream_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationDataStream(); \
	friend struct ::Z_Construct_UClass_UReplicationDataStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UReplicationDataStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationDataStream, UDataStream, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UReplicationDataStream_NoRegister) \
	DECLARE_SERIALIZER(UReplicationDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationDataStream(UReplicationDataStream&&) = delete; \
	UReplicationDataStream(const UReplicationDataStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationDataStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationDataStream); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h_14_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationDataStream;

// ********** End Class UReplicationDataStream *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
