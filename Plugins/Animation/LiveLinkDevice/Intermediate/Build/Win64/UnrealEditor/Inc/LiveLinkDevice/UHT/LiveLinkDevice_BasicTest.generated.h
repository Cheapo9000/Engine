// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/LiveLinkDevice_BasicTest.h"

#ifdef LIVELINKDEVICE_LiveLinkDevice_BasicTest_generated_h
#error "LiveLinkDevice_BasicTest.generated.h already included, missing '#pragma once' in LiveLinkDevice_BasicTest.h"
#endif
#define LIVELINKDEVICE_LiveLinkDevice_BasicTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface ULiveLinkDeviceCapability_BasicTest **********************************
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULiveLinkDeviceCapability_BasicTest_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceCapability_BasicTest_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDeviceCapability_BasicTest(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceCapability_BasicTest(ULiveLinkDeviceCapability_BasicTest&&) = delete; \
	ULiveLinkDeviceCapability_BasicTest(const ULiveLinkDeviceCapability_BasicTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceCapability_BasicTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceCapability_BasicTest); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkDeviceCapability_BasicTest) \
	virtual ~ULiveLinkDeviceCapability_BasicTest() = default;


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULiveLinkDeviceCapability_BasicTest(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceCapability_BasicTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceCapability_BasicTest_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceCapability_BasicTest, ULiveLinkDeviceCapability, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceCapability_BasicTest_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceCapability_BasicTest)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILiveLinkDeviceCapability_BasicTest() {} \
public: \
	typedef ULiveLinkDeviceCapability_BasicTest UClassType; \
	typedef ILiveLinkDeviceCapability_BasicTest ThisClass; \
	static int32 Execute_GetValue(const UObject* O); \
	static void Execute_SetValue(UObject* O, int32 InValue); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_10_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceCapability_BasicTest;

// ********** End Interface ULiveLinkDeviceCapability_BasicTest ************************************

// ********** Begin Class ULiveLinkDeviceSettings_BasicTest ****************************************
struct Z_Construct_UClass_ULiveLinkDeviceSettings_BasicTest_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceSettings_BasicTest_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDeviceSettings_BasicTest(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceSettings_BasicTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceSettings_BasicTest_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceSettings_BasicTest, ULiveLinkDeviceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceSettings_BasicTest_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceSettings_BasicTest)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDeviceSettings_BasicTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceSettings_BasicTest(ULiveLinkDeviceSettings_BasicTest&&) = delete; \
	ULiveLinkDeviceSettings_BasicTest(const ULiveLinkDeviceSettings_BasicTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceSettings_BasicTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceSettings_BasicTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDeviceSettings_BasicTest) \
	NO_API virtual ~ULiveLinkDeviceSettings_BasicTest();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_32_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceSettings_BasicTest;

// ********** End Class ULiveLinkDeviceSettings_BasicTest ******************************************

// ********** Begin Class ULiveLinkDevice_BasicTest ************************************************
struct Z_Construct_UClass_ULiveLinkDevice_BasicTest_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDevice_BasicTest_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDevice_BasicTest(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDevice_BasicTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDevice_BasicTest_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDevice_BasicTest, ULiveLinkDevice, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDevice_BasicTest_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDevice_BasicTest) \
	virtual UObject* _getUObject() const override { return const_cast<ULiveLinkDevice_BasicTest*>(this); }


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDevice_BasicTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDevice_BasicTest(ULiveLinkDevice_BasicTest&&) = delete; \
	ULiveLinkDevice_BasicTest(const ULiveLinkDevice_BasicTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDevice_BasicTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDevice_BasicTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDevice_BasicTest) \
	NO_API virtual ~ULiveLinkDevice_BasicTest();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_38_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDevice_BasicTest;

// ********** End Class ULiveLinkDevice_BasicTest **************************************************

// ********** Begin Class ULiveLinkDeviceSettings_Invalid ******************************************
struct Z_Construct_UClass_ULiveLinkDeviceSettings_Invalid_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceSettings_Invalid_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDeviceSettings_Invalid(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceSettings_Invalid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceSettings_Invalid_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceSettings_Invalid, ULiveLinkDeviceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceSettings_Invalid_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceSettings_Invalid)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDeviceSettings_Invalid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceSettings_Invalid(ULiveLinkDeviceSettings_Invalid&&) = delete; \
	ULiveLinkDeviceSettings_Invalid(const ULiveLinkDeviceSettings_Invalid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceSettings_Invalid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceSettings_Invalid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDeviceSettings_Invalid) \
	NO_API virtual ~ULiveLinkDeviceSettings_Invalid();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_63_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceSettings_Invalid;

// ********** End Class ULiveLinkDeviceSettings_Invalid ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Private_Tests_LiveLinkDevice_BasicTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
