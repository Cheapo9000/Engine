// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Elements/PCGGetActorPropertyTest.h"

#ifdef PCG_PCGGetActorPropertyTest_generated_h
#error "PCGGetActorPropertyTest.generated.h already included, missing '#pragma once' in PCGGetActorPropertyTest.h"
#endif
#define PCG_PCGGetActorPropertyTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDummyGetPropertyLevel2Struct **********************************
struct Z_Construct_UScriptStruct_FPCGDummyGetPropertyLevel2Struct_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDummyGetPropertyLevel2Struct_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDummyGetPropertyLevel2Struct;
// ********** End ScriptStruct FPCGDummyGetPropertyLevel2Struct ************************************

// ********** Begin ScriptStruct FPCGDummyGetPropertyStruct ****************************************
struct Z_Construct_UScriptStruct_FPCGDummyGetPropertyStruct_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDummyGetPropertyStruct_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDummyGetPropertyStruct;
// ********** End ScriptStruct FPCGDummyGetPropertyStruct ******************************************

// ********** Begin ScriptStruct FPCGTestMyColorStruct *********************************************
struct Z_Construct_UScriptStruct_FPCGTestMyColorStruct_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGTestMyColorStruct_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGTestMyColorStruct;
// ********** End ScriptStruct FPCGTestMyColorStruct ***********************************************

// ********** Begin Class UPCGDummyGetPropertyTest *************************************************
struct Z_Construct_UClass_UPCGDummyGetPropertyTest_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDummyGetPropertyTest_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDummyGetPropertyTest(); \
	friend struct ::Z_Construct_UClass_UPCGDummyGetPropertyTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDummyGetPropertyTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDummyGetPropertyTest, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDummyGetPropertyTest_NoRegister) \
	DECLARE_SERIALIZER(UPCGDummyGetPropertyTest)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDummyGetPropertyTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDummyGetPropertyTest(UPCGDummyGetPropertyTest&&) = delete; \
	UPCGDummyGetPropertyTest(const UPCGDummyGetPropertyTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDummyGetPropertyTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDummyGetPropertyTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDummyGetPropertyTest) \
	PCG_API virtual ~UPCGDummyGetPropertyTest();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_59_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDummyGetPropertyTest;

// ********** End Class UPCGDummyGetPropertyTest ***************************************************

// ********** Begin Class APCGUnitTestDummyActor ***************************************************
struct Z_Construct_UClass_APCGUnitTestDummyActor_Statics;
PCG_API UClass* Z_Construct_UClass_APCGUnitTestDummyActor_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGUnitTestDummyActor(); \
	friend struct ::Z_Construct_UClass_APCGUnitTestDummyActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_APCGUnitTestDummyActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APCGUnitTestDummyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_APCGUnitTestDummyActor_NoRegister) \
	DECLARE_SERIALIZER(APCGUnitTestDummyActor)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API APCGUnitTestDummyActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APCGUnitTestDummyActor(APCGUnitTestDummyActor&&) = delete; \
	APCGUnitTestDummyActor(const APCGUnitTestDummyActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, APCGUnitTestDummyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGUnitTestDummyActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCGUnitTestDummyActor) \
	PCG_API virtual ~APCGUnitTestDummyActor();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_72_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APCGUnitTestDummyActor;

// ********** End Class APCGUnitTestDummyActor *****************************************************

// ********** Begin Class UPCGUnitTestDummyComponent ***********************************************
struct Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGUnitTestDummyComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGUnitTestDummyComponent(); \
	friend struct ::Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGUnitTestDummyComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGUnitTestDummyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGUnitTestDummyComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGUnitTestDummyComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGUnitTestDummyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGUnitTestDummyComponent(UPCGUnitTestDummyComponent&&) = delete; \
	UPCGUnitTestDummyComponent(const UPCGUnitTestDummyComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGUnitTestDummyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUnitTestDummyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUnitTestDummyComponent) \
	PCG_API virtual ~UPCGUnitTestDummyComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_160_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGUnitTestDummyComponent;

// ********** End Class UPCGUnitTestDummyComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGGetActorPropertyTest_h

// ********** Begin Enum EPCGUnitTestDummyEnum *****************************************************
#define FOREACH_ENUM_EPCGUNITTESTDUMMYENUM(op) \
	op(EPCGUnitTestDummyEnum::One) \
	op(EPCGUnitTestDummyEnum::Two) \
	op(EPCGUnitTestDummyEnum::Three) 

enum class EPCGUnitTestDummyEnum : int64;
template<> struct TIsUEnumClass<EPCGUnitTestDummyEnum> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGUnitTestDummyEnum>();
// ********** End Enum EPCGUnitTestDummyEnum *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
