// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h"

#ifdef IRISCORE_SequentialPartialNetBlobHandler_generated_h
#error "SequentialPartialNetBlobHandler.generated.h already included, missing '#pragma once' in SequentialPartialNetBlobHandler.h"
#endif
#define IRISCORE_SequentialPartialNetBlobHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequentialPartialNetBlobHandlerConfig ***********************************
struct Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig(); \
	friend struct ::Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(USequentialPartialNetBlobHandlerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister) \
	DECLARE_SERIALIZER(USequentialPartialNetBlobHandlerConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API USequentialPartialNetBlobHandlerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequentialPartialNetBlobHandlerConfig(USequentialPartialNetBlobHandlerConfig&&) = delete; \
	USequentialPartialNetBlobHandlerConfig(const USequentialPartialNetBlobHandlerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, USequentialPartialNetBlobHandlerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequentialPartialNetBlobHandlerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequentialPartialNetBlobHandlerConfig) \
	IRISCORE_API virtual ~USequentialPartialNetBlobHandlerConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_22_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequentialPartialNetBlobHandlerConfig;

// ********** End Class USequentialPartialNetBlobHandlerConfig *************************************

// ********** Begin Class USequentialPartialNetBlobHandler *****************************************
struct Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics;
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequentialPartialNetBlobHandler(); \
	friend struct ::Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(USequentialPartialNetBlobHandler, UNetBlobHandler, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister) \
	DECLARE_SERIALIZER(USequentialPartialNetBlobHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequentialPartialNetBlobHandler(USequentialPartialNetBlobHandler&&) = delete; \
	USequentialPartialNetBlobHandler(const USequentialPartialNetBlobHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, USequentialPartialNetBlobHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequentialPartialNetBlobHandler); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USequentialPartialNetBlobHandler) \
	IRISCORE_API virtual ~USequentialPartialNetBlobHandler();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_42_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequentialPartialNetBlobHandler;

// ********** End Class USequentialPartialNetBlobHandler *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
