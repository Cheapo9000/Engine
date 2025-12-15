// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"

#ifdef AIMODULE_BTTask_RotateToFaceBBEntry_generated_h
#error "BTTask_RotateToFaceBBEntry.generated.h already included, missing '#pragma once' in BTTask_RotateToFaceBBEntry.h"
#endif
#define AIMODULE_BTTask_RotateToFaceBBEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_RotateToFaceBBEntry **********************************************
struct Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_RotateToFaceBBEntry(); \
	friend struct ::Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_RotateToFaceBBEntry, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_RotateToFaceBBEntry) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_RotateToFaceBBEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_RotateToFaceBBEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_RotateToFaceBBEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_RotateToFaceBBEntry); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_RotateToFaceBBEntry(UBTTask_RotateToFaceBBEntry&&) = delete; \
	UBTTask_RotateToFaceBBEntry(const UBTTask_RotateToFaceBBEntry&) = delete; \
	AIMODULE_API virtual ~UBTTask_RotateToFaceBBEntry();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_RotateToFaceBBEntry;

// ********** End Class UBTTask_RotateToFaceBBEntry ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
