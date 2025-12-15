// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h"

#ifdef IRISCORE_PartialNetObjectAttachmentHandler_generated_h
#error "PartialNetObjectAttachmentHandler.generated.h already included, missing '#pragma once' in PartialNetObjectAttachmentHandler.h"
#endif
#define IRISCORE_PartialNetObjectAttachmentHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPartialNetObjectAttachmentHandlerConfig *********************************
struct Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig(); \
	friend struct ::Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UPartialNetObjectAttachmentHandlerConfig, USequentialPartialNetBlobHandlerConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister) \
	DECLARE_SERIALIZER(UPartialNetObjectAttachmentHandlerConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPartialNetObjectAttachmentHandlerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPartialNetObjectAttachmentHandlerConfig(UPartialNetObjectAttachmentHandlerConfig&&) = delete; \
	UPartialNetObjectAttachmentHandlerConfig(const UPartialNetObjectAttachmentHandlerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartialNetObjectAttachmentHandlerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartialNetObjectAttachmentHandlerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartialNetObjectAttachmentHandlerConfig) \
	NO_API virtual ~UPartialNetObjectAttachmentHandlerConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_9_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPartialNetObjectAttachmentHandlerConfig;

// ********** End Class UPartialNetObjectAttachmentHandlerConfig ***********************************

// ********** Begin Class UPartialNetObjectAttachmentHandler ***************************************
struct Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPartialNetObjectAttachmentHandler(); \
	friend struct ::Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UPartialNetObjectAttachmentHandler, USequentialPartialNetBlobHandler, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister) \
	DECLARE_SERIALIZER(UPartialNetObjectAttachmentHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPartialNetObjectAttachmentHandler(UPartialNetObjectAttachmentHandler&&) = delete; \
	UPartialNetObjectAttachmentHandler(const UPartialNetObjectAttachmentHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UPartialNetObjectAttachmentHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartialNetObjectAttachmentHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPartialNetObjectAttachmentHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_42_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPartialNetObjectAttachmentHandler;

// ********** End Class UPartialNetObjectAttachmentHandler *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
