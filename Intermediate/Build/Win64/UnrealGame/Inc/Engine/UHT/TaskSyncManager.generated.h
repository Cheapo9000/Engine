// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSyncManager.h"

#ifdef ENGINE_TaskSyncManager_generated_h
#error "TaskSyncManager.generated.h already included, missing '#pragma once' in TaskSyncManager.h"
#endif
#define ENGINE_TaskSyncManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSyncPointDescription *********************************************
struct Z_Construct_UScriptStruct_FSyncPointDescription_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSyncPointDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


namespace UE::Tick { struct FSyncPointDescription; }
// ********** End ScriptStruct FSyncPointDescription ***********************************************

// ********** Begin Class UTaskSyncManagerSettings *************************************************
struct Z_Construct_UClass_UTaskSyncManagerSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTaskSyncManagerSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskSyncManagerSettings(); \
	friend struct ::Z_Construct_UClass_UTaskSyncManagerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTaskSyncManagerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaskSyncManagerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTaskSyncManagerSettings_NoRegister) \
	DECLARE_SERIALIZER(UTaskSyncManagerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTaskSyncManagerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaskSyncManagerSettings(UTaskSyncManagerSettings&&) = delete; \
	UTaskSyncManagerSettings(const UTaskSyncManagerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTaskSyncManagerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskSyncManagerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskSyncManagerSettings) \
	ENGINE_API virtual ~UTaskSyncManagerSettings();


#define FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_108_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


namespace UE::Tick { class UTaskSyncManagerSettings; }

// ********** End Class UTaskSyncManagerSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_TaskSyncManager_h

// ********** Begin Enum ESyncPointEventType *******************************************************
#define FOREACH_ENUM_ESYNCPOINTEVENTTYPE(op) \
	op(ESyncPointEventType::Invalid) \
	op(ESyncPointEventType::SimpleEvent) \
	op(ESyncPointEventType::GameThreadTask) \
	op(ESyncPointEventType::GameThreadTask_HighPriority) \
	op(ESyncPointEventType::WorkerThreadTask) \
	op(ESyncPointEventType::WorkerThreadTask_HighPriority) 

namespace UE::Tick { enum class ESyncPointEventType : uint8; }
template<> struct TIsUEnumClass<UE::Tick::ESyncPointEventType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<UE::Tick::ESyncPointEventType>();
// ********** End Enum ESyncPointEventType *********************************************************

// ********** Begin Enum ESyncPointActivationRules *************************************************
#define FOREACH_ENUM_ESYNCPOINTACTIVATIONRULES(op) \
	op(ESyncPointActivationRules::Invalid) \
	op(ESyncPointActivationRules::AlwaysActivate) \
	op(ESyncPointActivationRules::WaitForTrigger) \
	op(ESyncPointActivationRules::WaitForAllWork) \
	op(ESyncPointActivationRules::ActivateForAnyWork) 

namespace UE::Tick { enum class ESyncPointActivationRules : uint8; }
template<> struct TIsUEnumClass<UE::Tick::ESyncPointActivationRules> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<UE::Tick::ESyncPointActivationRules>();
// ********** End Enum ESyncPointActivationRules ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
