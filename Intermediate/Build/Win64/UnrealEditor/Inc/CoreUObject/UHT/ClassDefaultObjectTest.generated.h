// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/ClassDefaultObjectTest.h"

#ifdef COREUOBJECT_ClassDefaultObjectTest_generated_h
#error "ClassDefaultObjectTest.generated.h already included, missing '#pragma once' in ClassDefaultObjectTest.h"
#endif
#define COREUOBJECT_ClassDefaultObjectTest_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClassDefaultObjectTest **************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UClassDefaultObjectTest_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UClassDefaultObjectTest_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassDefaultObjectTest(); \
	friend struct ::Z_Construct_UClass_UClassDefaultObjectTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UClassDefaultObjectTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassDefaultObjectTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UClassDefaultObjectTest_NoRegister) \
	DECLARE_SERIALIZER(UClassDefaultObjectTest)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassDefaultObjectTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassDefaultObjectTest(UClassDefaultObjectTest&&) = delete; \
	UClassDefaultObjectTest(const UClassDefaultObjectTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassDefaultObjectTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassDefaultObjectTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassDefaultObjectTest) \
	NO_API virtual ~UClassDefaultObjectTest();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h_11_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassDefaultObjectTest;

#endif // WITH_TESTS
// ********** End Class UClassDefaultObjectTest ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_ClassDefaultObjectTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
