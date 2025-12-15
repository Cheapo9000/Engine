// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/DataStream/DataStreamManager.h"

#ifdef IRISCORE_DataStreamManager_generated_h
#error "DataStreamManager.generated.h already included, missing '#pragma once' in DataStreamManager.h"
#endif
#define IRISCORE_DataStreamManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataStreamManager *******************************************************
struct Z_Construct_UClass_UDataStreamManager_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UDataStreamManager_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataStreamManager(); \
	friend struct ::Z_Construct_UClass_UDataStreamManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UDataStreamManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataStreamManager, UDataStream, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UDataStreamManager_NoRegister) \
	DECLARE_SERIALIZER(UDataStreamManager)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataStreamManager(UDataStreamManager&&) = delete; \
	UDataStreamManager(const UDataStreamManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UDataStreamManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStreamManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataStreamManager)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h_38_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataStreamManager;

// ********** End Class UDataStreamManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
