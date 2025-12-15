// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/AvoidanceManager.h"

#ifdef ENGINE_AvoidanceManager_generated_h
#error "AvoidanceManager.generated.h already included, missing '#pragma once' in AvoidanceManager.h"
#endif
#define ENGINE_AvoidanceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovementComponent;

// ********** Begin ScriptStruct FNavAvoidanceData *************************************************
struct Z_Construct_UScriptStruct_FNavAvoidanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavAvoidanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNavAvoidanceData;
// ********** End ScriptStruct FNavAvoidanceData ***************************************************

// ********** Begin Class UAvoidanceManager ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent); \
	DECLARE_FUNCTION(execRegisterMovementComponent); \
	DECLARE_FUNCTION(execGetNewAvoidanceUID); \
	DECLARE_FUNCTION(execGetObjectCount);


struct Z_Construct_UClass_UAvoidanceManager_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend struct ::Z_Construct_UClass_UAvoidanceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAvoidanceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAvoidanceManager_NoRegister) \
	DECLARE_SERIALIZER(UAvoidanceManager)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAvoidanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvoidanceManager(UAvoidanceManager&&) = delete; \
	UAvoidanceManager(const UAvoidanceManager&) = delete; \
	ENGINE_API virtual ~UAvoidanceManager();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvoidanceManager;

// ********** End Class UAvoidanceManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
