// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealEd/CollisionAutomationTests.h"

#ifdef EDITORTESTS_CollisionAutomationTests_generated_h
#error "CollisionAutomationTests.generated.h already included, missing '#pragma once' in CollisionAutomationTests.h"
#endif
#define EDITORTESTS_CollisionAutomationTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCollisionTestEntry ***********************************************
struct Z_Construct_UScriptStruct_FCollisionTestEntry_Statics;
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollisionTestEntry_Statics; \
	EDITORTESTS_API static class UScriptStruct* StaticStruct();


struct FCollisionTestEntry;
// ********** End ScriptStruct FCollisionTestEntry *************************************************

// ********** Begin ScriptStruct FCollisionPerfTest ************************************************
struct Z_Construct_UScriptStruct_FCollisionPerfTest_Statics;
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollisionPerfTest_Statics; \
	EDITORTESTS_API static class UScriptStruct* StaticStruct();


struct FCollisionPerfTest;
// ********** End ScriptStruct FCollisionPerfTest **************************************************

// ********** Begin Class UCollisionAutomationTestConfigData ***************************************
struct Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics;
EDITORTESTS_API UClass* Z_Construct_UClass_UCollisionAutomationTestConfigData_NoRegister();

#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionAutomationTestConfigData(); \
	friend struct ::Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORTESTS_API UClass* ::Z_Construct_UClass_UCollisionAutomationTestConfigData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCollisionAutomationTestConfigData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EditorTests"), Z_Construct_UClass_UCollisionAutomationTestConfigData_NoRegister) \
	DECLARE_SERIALIZER(UCollisionAutomationTestConfigData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollisionAutomationTestConfigData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCollisionAutomationTestConfigData(UCollisionAutomationTestConfigData&&) = delete; \
	UCollisionAutomationTestConfigData(const UCollisionAutomationTestConfigData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollisionAutomationTestConfigData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionAutomationTestConfigData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionAutomationTestConfigData) \
	NO_API virtual ~UCollisionAutomationTestConfigData();


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_57_PROLOG
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCollisionAutomationTestConfigData;

// ********** End Class UCollisionAutomationTestConfigData *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
