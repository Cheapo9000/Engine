// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Iris/ReplicationSystem/EngineReplicationBridge.h"

#ifdef ENGINE_EngineReplicationBridge_generated_h
#error "EngineReplicationBridge.generated.h already included, missing '#pragma once' in EngineReplicationBridge.h"
#endif
#define ENGINE_EngineReplicationBridge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEngineReplicationBridge *************************************************
struct Z_Construct_UClass_UEngineReplicationBridge_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEngineReplicationBridge_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineReplicationBridge(); \
	friend struct ::Z_Construct_UClass_UEngineReplicationBridge_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEngineReplicationBridge_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineReplicationBridge, UObjectReplicationBridge, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEngineReplicationBridge_NoRegister) \
	DECLARE_SERIALIZER(UEngineReplicationBridge) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineReplicationBridge(UEngineReplicationBridge&&) = delete; \
	UEngineReplicationBridge(const UEngineReplicationBridge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineReplicationBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineReplicationBridge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEngineReplicationBridge)


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_85_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineReplicationBridge;

// ********** End Class UEngineReplicationBridge ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
