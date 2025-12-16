// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitTask.h"

#ifdef NETCODEUNITTEST_UnitTask_generated_h
#error "UnitTask.generated.h already included, missing '#pragma once' in UnitTask.h"
#endif
#define NETCODEUNITTEST_UnitTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTask ****************************************************************
struct Z_Construct_UClass_UUnitTask_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTask_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTask(); \
	friend struct ::Z_Construct_UClass_UUnitTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTask_NoRegister) \
	DECLARE_SERIALIZER(UUnitTask)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTask(UUnitTask&&) = delete; \
	UUnitTask(const UUnitTask&) = delete; \
	NO_API virtual ~UUnitTask();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_87_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_92_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTask;

// ********** End Class UUnitTask ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
