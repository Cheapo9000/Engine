// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AITask_UseGameplayBehaviorSmartObject.h"

#ifdef GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_AITask_UseGameplayBehaviorSmartObject_generated_h
#error "AITask_UseGameplayBehaviorSmartObject.generated.h already included, missing '#pragma once' in AITask_UseGameplayBehaviorSmartObject.h"
#endif
#define GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_AITask_UseGameplayBehaviorSmartObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class UAITask_UseGameplayBehaviorSmartObject;
class USmartObjectComponent;
enum class ESmartObjectClaimPriority : uint8;
struct FSmartObjectClaimHandle;

// ********** Begin Class UAITask_UseGameplayBehaviorSmartObject ***********************************
#define FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUseGameplayBehaviorSmartObject); \
	DECLARE_FUNCTION(execMoveToAndUseSmartObjectWithGameplayBehavior); \
	DECLARE_FUNCTION(execUseSmartObjectWithGameplayBehavior);


struct Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics;
GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_UseGameplayBehaviorSmartObject(); \
	friend struct ::Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UAITask_UseGameplayBehaviorSmartObject, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayBehaviorSmartObjectsModule"), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister) \
	DECLARE_SERIALIZER(UAITask_UseGameplayBehaviorSmartObject)


#define FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAITask_UseGameplayBehaviorSmartObject(UAITask_UseGameplayBehaviorSmartObject&&) = delete; \
	UAITask_UseGameplayBehaviorSmartObject(const UAITask_UseGameplayBehaviorSmartObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API, UAITask_UseGameplayBehaviorSmartObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_UseGameplayBehaviorSmartObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_UseGameplayBehaviorSmartObject) \
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API virtual ~UAITask_UseGameplayBehaviorSmartObject();


#define FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAITask_UseGameplayBehaviorSmartObject;

// ********** End Class UAITask_UseGameplayBehaviorSmartObject *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
