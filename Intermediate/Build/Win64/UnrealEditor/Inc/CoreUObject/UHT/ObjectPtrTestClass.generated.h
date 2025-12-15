// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/ObjectPtrTestClass.h"

#ifdef COREUOBJECT_ObjectPtrTestClass_generated_h
#error "ObjectPtrTestClass.generated.h already included, missing '#pragma once' in ObjectPtrTestClass.h"
#endif
#define COREUOBJECT_ObjectPtrTestClass_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectPtrTestClass ******************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrTestClass(); \
	friend struct ::Z_Construct_UClass_UObjectPtrTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrTestClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrTestClass_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrTestClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrTestClass(UObjectPtrTestClass&&) = delete; \
	UObjectPtrTestClass(const UObjectPtrTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrTestClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrTestClass) \
	NO_API virtual ~UObjectPtrTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_17_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrTestClass;

#endif // WITH_TESTS
// ********** End Class UObjectPtrTestClass ********************************************************

// ********** Begin Class UObjectPtrAbstractTestClass **********************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrAbstractTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrAbstractTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrAbstractTestClass(); \
	friend struct ::Z_Construct_UClass_UObjectPtrAbstractTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrAbstractTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrAbstractTestClass, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrAbstractTestClass_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrAbstractTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrAbstractTestClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrAbstractTestClass(UObjectPtrAbstractTestClass&&) = delete; \
	UObjectPtrAbstractTestClass(const UObjectPtrAbstractTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrAbstractTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrAbstractTestClass); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrAbstractTestClass) \
	NO_API virtual ~UObjectPtrAbstractTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_24_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrAbstractTestClass;

#endif // WITH_TESTS
// ********** End Class UObjectPtrAbstractTestClass ************************************************

// ********** Begin Class UObjectPtrAbstractDerivedTestClass ***************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrAbstractDerivedTestClass(); \
	friend struct ::Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrAbstractDerivedTestClass, UObjectPtrAbstractTestClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrAbstractDerivedTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrAbstractDerivedTestClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrAbstractDerivedTestClass(UObjectPtrAbstractDerivedTestClass&&) = delete; \
	UObjectPtrAbstractDerivedTestClass(const UObjectPtrAbstractDerivedTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrAbstractDerivedTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrAbstractDerivedTestClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrAbstractDerivedTestClass) \
	NO_API virtual ~UObjectPtrAbstractDerivedTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_31_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrAbstractDerivedTestClass;

#endif // WITH_TESTS
// ********** End Class UObjectPtrAbstractDerivedTestClass *****************************************

// ********** Begin Class UObjectPtrTestClassWithRef ***********************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrTestClassWithRef_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrTestClassWithRef_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrTestClassWithRef(); \
	friend struct ::Z_Construct_UClass_UObjectPtrTestClassWithRef_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrTestClassWithRef_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrTestClassWithRef, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrTestClassWithRef_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrTestClassWithRef)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrTestClassWithRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrTestClassWithRef(UObjectPtrTestClassWithRef&&) = delete; \
	UObjectPtrTestClassWithRef(const UObjectPtrTestClassWithRef&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrTestClassWithRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrTestClassWithRef); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrTestClassWithRef) \
	NO_API virtual ~UObjectPtrTestClassWithRef();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_38_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrTestClassWithRef;

#endif // WITH_TESTS
// ********** End Class UObjectPtrTestClassWithRef *************************************************

// ********** Begin Class UObjectWithClassProperty *************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectWithClassProperty_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectWithClassProperty_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectWithClassProperty(); \
	friend struct ::Z_Construct_UClass_UObjectWithClassProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectWithClassProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectWithClassProperty, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectWithClassProperty_NoRegister) \
	DECLARE_SERIALIZER(UObjectWithClassProperty)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectWithClassProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectWithClassProperty(UObjectWithClassProperty&&) = delete; \
	UObjectWithClassProperty(const UObjectWithClassProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectWithClassProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectWithClassProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectWithClassProperty) \
	NO_API virtual ~UObjectWithClassProperty();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_59_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectWithClassProperty;

#endif // WITH_TESTS
// ********** End Class UObjectWithClassProperty ***************************************************

// ********** Begin Class UObjectWithRawProperty ***************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectWithRawProperty_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectWithRawProperty_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectWithRawProperty(); \
	friend struct ::Z_Construct_UClass_UObjectWithRawProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectWithRawProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectWithRawProperty, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectWithRawProperty_NoRegister) \
	DECLARE_SERIALIZER(UObjectWithRawProperty)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectWithRawProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectWithRawProperty(UObjectWithRawProperty&&) = delete; \
	UObjectWithRawProperty(const UObjectWithRawProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectWithRawProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectWithRawProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectWithRawProperty) \
	NO_API virtual ~UObjectWithRawProperty();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_74_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectWithRawProperty;

#endif // WITH_TESTS
// ********** End Class UObjectWithRawProperty *****************************************************

// ********** Begin Class UObjectPtrDerrivedTestClass **********************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrDerrivedTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrDerrivedTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrDerrivedTestClass(); \
	friend struct ::Z_Construct_UClass_UObjectPtrDerrivedTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrDerrivedTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrDerrivedTestClass, UObjectPtrTestClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrDerrivedTestClass_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrDerrivedTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrDerrivedTestClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrDerrivedTestClass(UObjectPtrDerrivedTestClass&&) = delete; \
	UObjectPtrDerrivedTestClass(const UObjectPtrDerrivedTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrDerrivedTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrDerrivedTestClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrDerrivedTestClass) \
	NO_API virtual ~UObjectPtrDerrivedTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_88_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrDerrivedTestClass;

#endif // WITH_TESTS
// ********** End Class UObjectPtrDerrivedTestClass ************************************************

// ********** Begin Class UObjectPtrNotLazyTestClass ***********************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrNotLazyTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrNotLazyTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrNotLazyTestClass(); \
	friend struct ::Z_Construct_UClass_UObjectPtrNotLazyTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrNotLazyTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrNotLazyTestClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrNotLazyTestClass_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrNotLazyTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrNotLazyTestClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrNotLazyTestClass(UObjectPtrNotLazyTestClass&&) = delete; \
	UObjectPtrNotLazyTestClass(const UObjectPtrNotLazyTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrNotLazyTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrNotLazyTestClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrNotLazyTestClass) \
	NO_API virtual ~UObjectPtrNotLazyTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_96_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrNotLazyTestClass;

#endif // WITH_TESTS
// ********** End Class UObjectPtrNotLazyTestClass *************************************************

// ********** Begin Class UObjectPtrStressTestClass ************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UObjectPtrStressTestClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectPtrStressTestClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPtrStressTestClass(); \
	friend struct ::Z_Construct_UClass_UObjectPtrStressTestClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectPtrStressTestClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPtrStressTestClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectPtrStressTestClass_NoRegister) \
	DECLARE_SERIALIZER(UObjectPtrStressTestClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPtrStressTestClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPtrStressTestClass(UObjectPtrStressTestClass&&) = delete; \
	UObjectPtrStressTestClass(const UObjectPtrStressTestClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPtrStressTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPtrStressTestClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPtrStressTestClass) \
	NO_API virtual ~UObjectPtrStressTestClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_104_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPtrStressTestClass;

#endif // WITH_TESTS
// ********** End Class UObjectPtrStressTestClass **************************************************

// ********** Begin Class UMiddleClass *************************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UMiddleClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UMiddleClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMiddleClass(); \
	friend struct ::Z_Construct_UClass_UMiddleClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UMiddleClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UMiddleClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UMiddleClass_NoRegister) \
	DECLARE_SERIALIZER(UMiddleClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiddleClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMiddleClass(UMiddleClass&&) = delete; \
	UMiddleClass(const UMiddleClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiddleClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiddleClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiddleClass) \
	NO_API virtual ~UMiddleClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_120_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMiddleClass;

#endif // WITH_TESTS
// ********** End Class UMiddleClass ***************************************************************

// ********** Begin Class UDerrivedClass ***********************************************************
#if WITH_TESTS
struct Z_Construct_UClass_UDerrivedClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UDerrivedClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDerrivedClass(); \
	friend struct ::Z_Construct_UClass_UDerrivedClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UDerrivedClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UDerrivedClass, UMiddleClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UDerrivedClass_NoRegister) \
	DECLARE_SERIALIZER(UDerrivedClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDerrivedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDerrivedClass(UDerrivedClass&&) = delete; \
	UDerrivedClass(const UDerrivedClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDerrivedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDerrivedClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDerrivedClass) \
	NO_API virtual ~UDerrivedClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_138_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_141_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDerrivedClass;

#endif // WITH_TESTS
// ********** End Class UDerrivedClass *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
