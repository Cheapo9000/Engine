// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/UObject/PropertyPathFunctionsTest.h"

#ifdef COREUOBJECT_PropertyPathFunctionsTest_generated_h
#error "PropertyPathFunctionsTest.generated.h already included, missing '#pragma once' in PropertyPathFunctionsTest.h"
#endif
#define COREUOBJECT_PropertyPathFunctionsTest_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTestPropertyPathFunctionsStructKey *******************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FTestPropertyPathFunctionsStructKey_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestPropertyPathFunctionsStructKey_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FTestPropertyPathFunctionsStructKey;
#endif // WITH_TESTS
// ********** End ScriptStruct FTestPropertyPathFunctionsStructKey *********************************

// ********** Begin ScriptStruct FTestPropertyPathFunctionsStruct **********************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FTestPropertyPathFunctionsStruct_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestPropertyPathFunctionsStruct_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FTestPropertyPathFunctionsStruct;
#endif // WITH_TESTS
// ********** End ScriptStruct FTestPropertyPathFunctionsStruct ************************************

// ********** Begin Class UTestPropertyPathFunctionsClass ******************************************
#if WITH_TESTS
struct Z_Construct_UClass_UTestPropertyPathFunctionsClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UTestPropertyPathFunctionsClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestPropertyPathFunctionsClass(); \
	friend struct ::Z_Construct_UClass_UTestPropertyPathFunctionsClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UTestPropertyPathFunctionsClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestPropertyPathFunctionsClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UTestPropertyPathFunctionsClass_NoRegister) \
	DECLARE_SERIALIZER(UTestPropertyPathFunctionsClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestPropertyPathFunctionsClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestPropertyPathFunctionsClass(UTestPropertyPathFunctionsClass&&) = delete; \
	UTestPropertyPathFunctionsClass(const UTestPropertyPathFunctionsClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestPropertyPathFunctionsClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestPropertyPathFunctionsClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestPropertyPathFunctionsClass) \
	NO_API virtual ~UTestPropertyPathFunctionsClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_77_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestPropertyPathFunctionsClass;

#endif // WITH_TESTS
// ********** End Class UTestPropertyPathFunctionsClass ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyPathFunctionsTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
