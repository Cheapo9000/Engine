// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetTokenDataStream.h"

#ifdef IRISCORE_NetTokenDataStream_generated_h
#error "NetTokenDataStream.generated.h already included, missing '#pragma once' in NetTokenDataStream.h"
#endif
#define IRISCORE_NetTokenDataStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetTokenDataStream ******************************************************
struct Z_Construct_UClass_UNetTokenDataStream_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetTokenDataStream_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetTokenDataStream(); \
	friend struct ::Z_Construct_UClass_UNetTokenDataStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetTokenDataStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetTokenDataStream, UDataStream, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetTokenDataStream_NoRegister) \
	DECLARE_SERIALIZER(UNetTokenDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetTokenDataStream(UNetTokenDataStream&&) = delete; \
	UNetTokenDataStream(const UNetTokenDataStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetTokenDataStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetTokenDataStream); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetTokenDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h_24_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetTokenDataStream;

// ********** End Class UNetTokenDataStream ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
