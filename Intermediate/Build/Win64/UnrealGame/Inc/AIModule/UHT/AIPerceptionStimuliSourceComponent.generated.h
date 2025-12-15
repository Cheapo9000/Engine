// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionStimuliSourceComponent.h"

#ifdef AIMODULE_AIPerceptionStimuliSourceComponent_generated_h
#error "AIPerceptionStimuliSourceComponent.generated.h already included, missing '#pragma once' in AIPerceptionStimuliSourceComponent.h"
#endif
#define AIMODULE_AIPerceptionStimuliSourceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAISense;
class UClass;

// ********** Begin Class UAIPerceptionStimuliSourceComponent **************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterFromSense); \
	DECLARE_FUNCTION(execUnregisterFromPerceptionSystem); \
	DECLARE_FUNCTION(execRegisterForSense); \
	DECLARE_FUNCTION(execRegisterWithPerceptionSystem);


struct Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionStimuliSourceComponent(); \
	friend struct ::Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIPerceptionStimuliSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister) \
	DECLARE_SERIALIZER(UAIPerceptionStimuliSourceComponent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIPerceptionStimuliSourceComponent(UAIPerceptionStimuliSourceComponent&&) = delete; \
	UAIPerceptionStimuliSourceComponent(const UAIPerceptionStimuliSourceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIPerceptionStimuliSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionStimuliSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionStimuliSourceComponent) \
	AIMODULE_API virtual ~UAIPerceptionStimuliSourceComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIPerceptionStimuliSourceComponent;

// ********** End Class UAIPerceptionStimuliSourceComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
