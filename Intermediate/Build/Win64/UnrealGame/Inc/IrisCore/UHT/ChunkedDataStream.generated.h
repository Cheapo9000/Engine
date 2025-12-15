// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/ChunkedDataStream/ChunkedDataStream.h"

#ifdef IRISCORE_ChunkedDataStream_generated_h
#error "ChunkedDataStream.generated.h already included, missing '#pragma once' in ChunkedDataStream.h"
#endif
#define IRISCORE_ChunkedDataStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChunkedDataStream *******************************************************
struct Z_Construct_UClass_UChunkedDataStream_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UChunkedDataStream_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChunkedDataStream(); \
	friend struct ::Z_Construct_UClass_UChunkedDataStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UChunkedDataStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UChunkedDataStream, UDataStream, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UChunkedDataStream_NoRegister) \
	DECLARE_SERIALIZER(UChunkedDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UChunkedDataStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChunkedDataStream(UChunkedDataStream&&) = delete; \
	UChunkedDataStream(const UChunkedDataStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UChunkedDataStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChunkedDataStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChunkedDataStream) \
	IRISCORE_API virtual ~UChunkedDataStream();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h_45_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChunkedDataStream;

// ********** End Class UChunkedDataStream *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
