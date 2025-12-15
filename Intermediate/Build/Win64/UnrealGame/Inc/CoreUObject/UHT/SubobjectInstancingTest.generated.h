// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/UObject/SubobjectInstancingTest.h"

#ifdef COREUOBJECT_SubobjectInstancingTest_generated_h
#error "SubobjectInstancingTest.generated.h already included, missing '#pragma once' in SubobjectInstancingTest.h"
#endif
#define COREUOBJECT_SubobjectInstancingTest_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubobjectInstancingTestObject *******************************************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestObject(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestObject_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectInstancingTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestObject(USubobjectInstancingTestObject&&) = delete; \
	USubobjectInstancingTestObject(const USubobjectInstancingTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectInstancingTestObject) \
	NO_API virtual ~USubobjectInstancingTestObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_27_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestObject;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestObject *********************************************

// ********** Begin Class USubobjectInstancingTestDerivedObject ************************************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestDerivedObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestDerivedObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestDerivedObject(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestDerivedObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestDerivedObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestDerivedObject, USubobjectInstancingTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestDerivedObject_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestDerivedObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectInstancingTestDerivedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestDerivedObject(USubobjectInstancingTestDerivedObject&&) = delete; \
	USubobjectInstancingTestDerivedObject(const USubobjectInstancingTestDerivedObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestDerivedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestDerivedObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectInstancingTestDerivedObject) \
	NO_API virtual ~USubobjectInstancingTestDerivedObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_37_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestDerivedObject;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestDerivedObject **************************************

// ********** Begin Class USubobjectInstancingTestDirectlyNestedObject *****************************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestDirectlyNestedObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestDirectlyNestedObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestDirectlyNestedObject(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestDirectlyNestedObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestDirectlyNestedObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestDirectlyNestedObject, USubobjectInstancingTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestDirectlyNestedObject_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestDirectlyNestedObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestDirectlyNestedObject(USubobjectInstancingTestDirectlyNestedObject&&) = delete; \
	USubobjectInstancingTestDirectlyNestedObject(const USubobjectInstancingTestDirectlyNestedObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestDirectlyNestedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestDirectlyNestedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubobjectInstancingTestDirectlyNestedObject) \
	NO_API virtual ~USubobjectInstancingTestDirectlyNestedObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_43_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestDirectlyNestedObject;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestDirectlyNestedObject *******************************

// ********** Begin Class USubobjectInstancingTestIndirectlyNestedObject ***************************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestIndirectlyNestedObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestIndirectlyNestedObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestIndirectlyNestedObject(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestIndirectlyNestedObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestIndirectlyNestedObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestIndirectlyNestedObject, USubobjectInstancingTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestIndirectlyNestedObject_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestIndirectlyNestedObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestIndirectlyNestedObject(USubobjectInstancingTestIndirectlyNestedObject&&) = delete; \
	USubobjectInstancingTestIndirectlyNestedObject(const USubobjectInstancingTestIndirectlyNestedObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestIndirectlyNestedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestIndirectlyNestedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubobjectInstancingTestIndirectlyNestedObject) \
	NO_API virtual ~USubobjectInstancingTestIndirectlyNestedObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_61_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestIndirectlyNestedObject;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestIndirectlyNestedObject *****************************

// ********** Begin Class USubobjectInstancingDefaultToInstancedTestObject *************************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingDefaultToInstancedTestObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingDefaultToInstancedTestObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingDefaultToInstancedTestObject(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingDefaultToInstancedTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingDefaultToInstancedTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingDefaultToInstancedTestObject, USubobjectInstancingTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingDefaultToInstancedTestObject_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingDefaultToInstancedTestObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectInstancingDefaultToInstancedTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingDefaultToInstancedTestObject(USubobjectInstancingDefaultToInstancedTestObject&&) = delete; \
	USubobjectInstancingDefaultToInstancedTestObject(const USubobjectInstancingDefaultToInstancedTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingDefaultToInstancedTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingDefaultToInstancedTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectInstancingDefaultToInstancedTestObject) \
	NO_API virtual ~USubobjectInstancingDefaultToInstancedTestObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_73_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingDefaultToInstancedTestObject;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingDefaultToInstancedTestObject ***************************

// ********** Begin ScriptStruct FSubobjectInstancingTestStructType ********************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FSubobjectInstancingTestStructType_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubobjectInstancingTestStructType_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FSubobjectInstancingTestStructType;
#endif // WITH_TESTS
// ********** End ScriptStruct FSubobjectInstancingTestStructType **********************************

// ********** Begin Class USubobjectInstancingTestOuterObject **************************************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestOuterObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestOuterObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestOuterObject(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestOuterObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestOuterObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestOuterObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestOuterObject_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestOuterObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestOuterObject(USubobjectInstancingTestOuterObject&&) = delete; \
	USubobjectInstancingTestOuterObject(const USubobjectInstancingTestOuterObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestOuterObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestOuterObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectInstancingTestOuterObject) \
	NO_API virtual ~USubobjectInstancingTestOuterObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_94_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestOuterObject;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestOuterObject ****************************************

// ********** Begin Class USubobjectInstancingTestDerivedOuterObjectWithTypeOverride ***************
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithTypeOverride(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestDerivedOuterObjectWithTypeOverride, USubobjectInstancingTestOuterObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestDerivedOuterObjectWithTypeOverride)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_180_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestDerivedOuterObjectWithTypeOverride(USubobjectInstancingTestDerivedOuterObjectWithTypeOverride&&) = delete; \
	USubobjectInstancingTestDerivedOuterObjectWithTypeOverride(const USubobjectInstancingTestDerivedOuterObjectWithTypeOverride&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestDerivedOuterObjectWithTypeOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestDerivedOuterObjectWithTypeOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectInstancingTestDerivedOuterObjectWithTypeOverride) \
	NO_API virtual ~USubobjectInstancingTestDerivedOuterObjectWithTypeOverride();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_177_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestDerivedOuterObjectWithTypeOverride;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestDerivedOuterObjectWithTypeOverride *****************

// ********** Begin Class USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride ********
#if WITH_TESTS
struct Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride(); \
	friend struct ::Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride, USubobjectInstancingTestOuterObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride_NoRegister) \
	DECLARE_SERIALIZER(USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_189_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride(USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride&&) = delete; \
	USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride(const USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride) \
	NO_API virtual ~USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_186_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride;

#endif // WITH_TESTS
// ********** End Class USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride **********

// ********** Begin Class UDynamicSubobjectInstancingTestClass *************************************
#if WITH_TESTS
struct Z_Construct_UClass_UDynamicSubobjectInstancingTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UDynamicSubobjectInstancingTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicSubobjectInstancingTestClass(); \
	friend struct ::Z_Construct_UClass_UDynamicSubobjectInstancingTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UDynamicSubobjectInstancingTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicSubobjectInstancingTestClass, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UDynamicSubobjectInstancingTestClass_NoRegister) \
	DECLARE_SERIALIZER(UDynamicSubobjectInstancingTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_198_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicSubobjectInstancingTestClass(UDynamicSubobjectInstancingTestClass&&) = delete; \
	UDynamicSubobjectInstancingTestClass(const UDynamicSubobjectInstancingTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicSubobjectInstancingTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicSubobjectInstancingTestClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicSubobjectInstancingTestClass) \
	NO_API virtual ~UDynamicSubobjectInstancingTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_195_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_198_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicSubobjectInstancingTestClass;

#endif // WITH_TESTS
// ********** End Class UDynamicSubobjectInstancingTestClass ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_SubobjectInstancingTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
