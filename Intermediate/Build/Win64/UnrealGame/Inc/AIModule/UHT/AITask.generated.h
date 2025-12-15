// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AITask.h"

#ifdef AIMODULE_AITask_generated_h
#error "AITask.generated.h already included, missing '#pragma once' in AITask.h"
#endif
#define AIMODULE_AITask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAITask ******************************************************************
struct Z_Construct_UClass_UAITask_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAITask_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask(); \
	friend struct ::Z_Construct_UClass_UAITask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAITask_NoRegister(); \
public: \
	DECLARE_CLASS2(UAITask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAITask_NoRegister) \
	DECLARE_SERIALIZER(UAITask)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAITask(UAITask&&) = delete; \
	UAITask(const UAITask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAITask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask) \
	AIMODULE_API virtual ~UAITask();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_23_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAITask;

// ********** End Class UAITask ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h

// ********** Begin Enum EAITaskPriority ***********************************************************
#define FOREACH_ENUM_EAITASKPRIORITY(op) \
	op(EAITaskPriority::Lowest) \
	op(EAITaskPriority::Low) \
	op(EAITaskPriority::AutonomousAI) \
	op(EAITaskPriority::High) \
	op(EAITaskPriority::Ultimate) 

enum class EAITaskPriority : uint8;
template<> struct TIsUEnumClass<EAITaskPriority> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAITaskPriority>();
// ********** End Enum EAITaskPriority *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
