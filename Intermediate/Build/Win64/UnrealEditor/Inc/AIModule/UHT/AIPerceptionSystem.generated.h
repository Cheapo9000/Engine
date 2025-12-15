// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionSystem.h"

#ifdef AIMODULE_AIPerceptionSystem_generated_h
#error "AIPerceptionSystem.generated.h already included, missing '#pragma once' in AIPerceptionSystem.h"
#endif
#define AIMODULE_AIPerceptionSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAISense;
class UAISenseEvent;
class UClass;
class UObject;
struct FAIStimulus;

// ********** Begin Class UAIPerceptionSystem ******************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPerceptionStimuliSourceEndPlay); \
	DECLARE_FUNCTION(execGetSenseClassForStimulus); \
	DECLARE_FUNCTION(execRegisterPerceptionStimuliSource); \
	DECLARE_FUNCTION(execReportPerceptionEvent); \
	DECLARE_FUNCTION(execReportEvent);


struct Z_Construct_UClass_UAIPerceptionSystem_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionSystem(); \
	friend struct ::Z_Construct_UClass_UAIPerceptionSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIPerceptionSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIPerceptionSystem, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIPerceptionSystem_NoRegister) \
	DECLARE_SERIALIZER(UAIPerceptionSystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIPerceptionSystem(UAIPerceptionSystem&&) = delete; \
	UAIPerceptionSystem(const UAIPerceptionSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIPerceptionSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionSystem) \
	AIMODULE_API virtual ~UAIPerceptionSystem();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_29_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIPerceptionSystem;

// ********** End Class UAIPerceptionSystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
