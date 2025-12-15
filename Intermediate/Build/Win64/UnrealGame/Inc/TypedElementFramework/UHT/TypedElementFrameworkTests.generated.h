// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypedElementFrameworkTests.h"

#ifdef TYPEDELEMENTFRAMEWORK_TypedElementFrameworkTests_generated_h
#error "TypedElementFrameworkTests.generated.h already included, missing '#pragma once' in TypedElementFrameworkTests.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementFrameworkTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScriptTypedElementHandle;

// ********** Begin Interface UTestTypedElementInterfaceA ******************************************
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName);


struct Z_Construct_UClass_UTestTypedElementInterfaceA_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UTestTypedElementInterfaceA(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestTypedElementInterfaceA(UTestTypedElementInterfaceA&&) = delete; \
	UTestTypedElementInterfaceA(const UTestTypedElementInterfaceA&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTestTypedElementInterfaceA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTypedElementInterfaceA); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTypedElementInterfaceA) \
	virtual ~UTestTypedElementInterfaceA() = default;


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTestTypedElementInterfaceA(); \
	friend struct ::Z_Construct_UClass_UTestTypedElementInterfaceA_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestTypedElementInterfaceA, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister) \
	DECLARE_SERIALIZER(UTestTypedElementInterfaceA)


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITestTypedElementInterfaceA() {} \
public: \
	typedef UTestTypedElementInterfaceA UClassType; \
	typedef ITestTypedElementInterfaceA ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_10_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestTypedElementInterfaceA;

// ********** End Interface UTestTypedElementInterfaceA ********************************************

// ********** Begin Interface UTestTypedElementInterfaceB ******************************************
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMarkAsTested);


struct Z_Construct_UClass_UTestTypedElementInterfaceB_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UTestTypedElementInterfaceB(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestTypedElementInterfaceB(UTestTypedElementInterfaceB&&) = delete; \
	UTestTypedElementInterfaceB(const UTestTypedElementInterfaceB&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTestTypedElementInterfaceB); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTypedElementInterfaceB); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTypedElementInterfaceB) \
	virtual ~UTestTypedElementInterfaceB() = default;


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTestTypedElementInterfaceB(); \
	friend struct ::Z_Construct_UClass_UTestTypedElementInterfaceB_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestTypedElementInterfaceB, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister) \
	DECLARE_SERIALIZER(UTestTypedElementInterfaceB)


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITestTypedElementInterfaceB() {} \
public: \
	typedef UTestTypedElementInterfaceB UClassType; \
	typedef ITestTypedElementInterfaceB ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_35_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestTypedElementInterfaceB;

// ********** End Interface UTestTypedElementInterfaceB ********************************************

// ********** Begin Interface UTestTypedElementInterfaceC ******************************************
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsTested);


struct Z_Construct_UClass_UTestTypedElementInterfaceC_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UTestTypedElementInterfaceC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestTypedElementInterfaceC(UTestTypedElementInterfaceC&&) = delete; \
	UTestTypedElementInterfaceC(const UTestTypedElementInterfaceC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTestTypedElementInterfaceC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTypedElementInterfaceC); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTypedElementInterfaceC) \
	virtual ~UTestTypedElementInterfaceC() = default;


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTestTypedElementInterfaceC(); \
	friend struct ::Z_Construct_UClass_UTestTypedElementInterfaceC_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestTypedElementInterfaceC, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister) \
	DECLARE_SERIALIZER(UTestTypedElementInterfaceC)


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITestTypedElementInterfaceC() {} \
public: \
	typedef UTestTypedElementInterfaceC UClassType; \
	typedef ITestTypedElementInterfaceC ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_52_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_55_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestTypedElementInterfaceC;

// ********** End Interface UTestTypedElementInterfaceC ********************************************

// ********** Begin Class UTestTypedElementInterfaceA_ImplTyped ************************************
struct Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped(); \
	friend struct ::Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestTypedElementInterfaceA_ImplTyped, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister) \
	DECLARE_SERIALIZER(UTestTypedElementInterfaceA_ImplTyped) \
	virtual UObject* _getUObject() const override { return const_cast<UTestTypedElementInterfaceA_ImplTyped*>(this); }


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestTypedElementInterfaceA_ImplTyped(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestTypedElementInterfaceA_ImplTyped(UTestTypedElementInterfaceA_ImplTyped&&) = delete; \
	UTestTypedElementInterfaceA_ImplTyped(const UTestTypedElementInterfaceA_ImplTyped&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestTypedElementInterfaceA_ImplTyped); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTypedElementInterfaceA_ImplTyped); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTypedElementInterfaceA_ImplTyped) \
	NO_API virtual ~UTestTypedElementInterfaceA_ImplTyped();


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_98_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestTypedElementInterfaceA_ImplTyped;

// ********** End Class UTestTypedElementInterfaceA_ImplTyped **************************************

// ********** Begin Class UTestTypedElementInterfaceA_ImplUntyped **********************************
struct Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped(); \
	friend struct ::Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestTypedElementInterfaceA_ImplUntyped, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister) \
	DECLARE_SERIALIZER(UTestTypedElementInterfaceA_ImplUntyped) \
	virtual UObject* _getUObject() const override { return const_cast<UTestTypedElementInterfaceA_ImplUntyped*>(this); }


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestTypedElementInterfaceA_ImplUntyped(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestTypedElementInterfaceA_ImplUntyped(UTestTypedElementInterfaceA_ImplUntyped&&) = delete; \
	UTestTypedElementInterfaceA_ImplUntyped(const UTestTypedElementInterfaceA_ImplUntyped&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestTypedElementInterfaceA_ImplUntyped); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTypedElementInterfaceA_ImplUntyped); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTypedElementInterfaceA_ImplUntyped) \
	NO_API virtual ~UTestTypedElementInterfaceA_ImplUntyped();


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_111_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestTypedElementInterfaceA_ImplUntyped;

// ********** End Class UTestTypedElementInterfaceA_ImplUntyped ************************************

// ********** Begin Class UTestTypedElementInterfaceBAndC_Typed ************************************
struct Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed(); \
	friend struct ::Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestTypedElementInterfaceBAndC_Typed, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister) \
	DECLARE_SERIALIZER(UTestTypedElementInterfaceBAndC_Typed) \
	virtual UObject* _getUObject() const override { return const_cast<UTestTypedElementInterfaceBAndC_Typed*>(this); }


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestTypedElementInterfaceBAndC_Typed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestTypedElementInterfaceBAndC_Typed(UTestTypedElementInterfaceBAndC_Typed&&) = delete; \
	UTestTypedElementInterfaceBAndC_Typed(const UTestTypedElementInterfaceBAndC_Typed&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestTypedElementInterfaceBAndC_Typed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTypedElementInterfaceBAndC_Typed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTypedElementInterfaceBAndC_Typed) \
	NO_API virtual ~UTestTypedElementInterfaceBAndC_Typed();


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_124_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestTypedElementInterfaceBAndC_Typed;

// ********** End Class UTestTypedElementInterfaceBAndC_Typed **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
