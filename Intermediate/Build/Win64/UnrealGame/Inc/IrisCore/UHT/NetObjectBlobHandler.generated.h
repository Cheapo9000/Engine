// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h"

#ifdef IRISCORE_NetObjectBlobHandler_generated_h
#error "NetObjectBlobHandler.generated.h already included, missing '#pragma once' in NetObjectBlobHandler.h"
#endif
#define IRISCORE_NetObjectBlobHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetObjectBlobHandler ****************************************************
struct Z_Construct_UClass_UNetObjectBlobHandler_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectBlobHandler_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectBlobHandler(); \
	friend struct ::Z_Construct_UClass_UNetObjectBlobHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectBlobHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectBlobHandler, UNetBlobHandler, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectBlobHandler_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectBlobHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectBlobHandler(UNetObjectBlobHandler&&) = delete; \
	UNetObjectBlobHandler(const UNetObjectBlobHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectBlobHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectBlobHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetObjectBlobHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_30_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectBlobHandler;

// ********** End Class UNetObjectBlobHandler ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
