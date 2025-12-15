// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetBlob/NetBlobHandler.h"

#ifdef IRISCORE_NetBlobHandler_generated_h
#error "NetBlobHandler.generated.h already included, missing '#pragma once' in NetBlobHandler.h"
#endif
#define IRISCORE_NetBlobHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetBlobHandler **********************************************************
struct Z_Construct_UClass_UNetBlobHandler_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetBlobHandler(); \
	friend struct ::Z_Construct_UClass_UNetBlobHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetBlobHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetBlobHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetBlobHandler_NoRegister) \
	DECLARE_SERIALIZER(UNetBlobHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetBlobHandler(UNetBlobHandler&&) = delete; \
	UNetBlobHandler(const UNetBlobHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetBlobHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetBlobHandler); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetBlobHandler)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_42_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetBlobHandler;

// ********** End Class UNetBlobHandler ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
