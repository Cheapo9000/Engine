// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockGameplayTasks.h"

#ifdef AITESTSUITE_MockGameplayTasks_generated_h
#error "MockGameplayTasks.generated.h already included, missing '#pragma once' in MockGameplayTasks.h"
#endif
#define AITESTSUITE_MockGameplayTasks_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMockTask_Log ************************************************************
struct Z_Construct_UClass_UMockTask_Log_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UMockTask_Log_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockTask_Log(); \
	friend struct ::Z_Construct_UClass_UMockTask_Log_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UMockTask_Log_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockTask_Log, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UMockTask_Log_NoRegister) \
	DECLARE_SERIALIZER(UMockTask_Log)


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockTask_Log(UMockTask_Log&&) = delete; \
	UMockTask_Log(const UMockTask_Log&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockTask_Log); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockTask_Log); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockTask_Log) \
	NO_API virtual ~UMockTask_Log();


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_28_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockTask_Log;

// ********** End Class UMockTask_Log **************************************************************

// ********** Begin Class UMockGameplayTasksComponent **********************************************
struct Z_Construct_UClass_UMockGameplayTasksComponent_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockGameplayTasksComponent(); \
	friend struct ::Z_Construct_UClass_UMockGameplayTasksComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockGameplayTasksComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockGameplayTasksComponent)


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockGameplayTasksComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockGameplayTasksComponent(UMockGameplayTasksComponent&&) = delete; \
	UMockGameplayTasksComponent(const UMockGameplayTasksComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockGameplayTasksComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockGameplayTasksComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockGameplayTasksComponent) \
	NO_API virtual ~UMockGameplayTasksComponent();


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_60_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockGameplayTasksComponent;

// ********** End Class UMockGameplayTasksComponent ************************************************

// ********** Begin Class UMockGameplayTaskOwner ***************************************************
struct Z_Construct_UClass_UMockGameplayTaskOwner_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockGameplayTaskOwner(); \
	friend struct ::Z_Construct_UClass_UMockGameplayTaskOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockGameplayTaskOwner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister) \
	DECLARE_SERIALIZER(UMockGameplayTaskOwner) \
	virtual UObject* _getUObject() const override { return const_cast<UMockGameplayTaskOwner*>(this); }


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockGameplayTaskOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockGameplayTaskOwner(UMockGameplayTaskOwner&&) = delete; \
	UMockGameplayTaskOwner(const UMockGameplayTaskOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockGameplayTaskOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockGameplayTaskOwner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockGameplayTaskOwner) \
	NO_API virtual ~UMockGameplayTaskOwner();


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_69_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockGameplayTaskOwner;

// ********** End Class UMockGameplayTaskOwner *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
