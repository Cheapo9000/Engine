// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h"

#ifdef IRISCORE_NetBlobHandlerDefinitions_generated_h
#error "NetBlobHandlerDefinitions.generated.h already included, missing '#pragma once' in NetBlobHandlerDefinitions.h"
#endif
#define IRISCORE_NetBlobHandlerDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetBlobHandlerDefinition *****************************************
struct Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FNetBlobHandlerDefinition;
// ********** End ScriptStruct FNetBlobHandlerDefinition *******************************************

// ********** Begin Class UNetBlobHandlerDefinitions ***********************************************
struct Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetBlobHandlerDefinitions(); \
	friend struct ::Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetBlobHandlerDefinitions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UNetBlobHandlerDefinitions)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetBlobHandlerDefinitions(UNetBlobHandlerDefinitions&&) = delete; \
	UNetBlobHandlerDefinitions(const UNetBlobHandlerDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetBlobHandlerDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetBlobHandlerDefinitions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetBlobHandlerDefinitions) \
	IRISCORE_API virtual ~UNetBlobHandlerDefinitions();


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_28_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetBlobHandlerDefinitions;

// ********** End Class UNetBlobHandlerDefinitions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
