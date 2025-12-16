// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphAnnotationTestingActor.h"

#ifdef ZONEGRAPHANNOTATIONS_ZoneGraphAnnotationTestingActor_generated_h
#error "ZoneGraphAnnotationTestingActor.generated.h already included, missing '#pragma once' in ZoneGraphAnnotationTestingActor.h"
#endif
#define ZONEGRAPHANNOTATIONS_ZoneGraphAnnotationTestingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneGraphAnnotationTest *************************************************
struct Z_Construct_UClass_UZoneGraphAnnotationTest_Statics;
ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTest_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphAnnotationTest(); \
	friend struct ::Z_Construct_UClass_UZoneGraphAnnotationTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHANNOTATIONS_API UClass* ::Z_Construct_UClass_UZoneGraphAnnotationTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphAnnotationTest, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ZoneGraphAnnotations"), Z_Construct_UClass_UZoneGraphAnnotationTest_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphAnnotationTest)


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ZONEGRAPHANNOTATIONS_API UZoneGraphAnnotationTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphAnnotationTest(UZoneGraphAnnotationTest&&) = delete; \
	UZoneGraphAnnotationTest(const UZoneGraphAnnotationTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHANNOTATIONS_API, UZoneGraphAnnotationTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphAnnotationTest); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphAnnotationTest) \
	ZONEGRAPHANNOTATIONS_API virtual ~UZoneGraphAnnotationTest();


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphAnnotationTest;

// ********** End Class UZoneGraphAnnotationTest ***************************************************

// ********** Begin Class UZoneGraphAnnotationTestingComponent *************************************
struct Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics;
ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphAnnotationTestingComponent(); \
	friend struct ::Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHANNOTATIONS_API UClass* ::Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphAnnotationTestingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphAnnotations"), Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphAnnotationTestingComponent)


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphAnnotationTestingComponent(UZoneGraphAnnotationTestingComponent&&) = delete; \
	UZoneGraphAnnotationTestingComponent(const UZoneGraphAnnotationTestingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHANNOTATIONS_API, UZoneGraphAnnotationTestingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphAnnotationTestingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphAnnotationTestingComponent) \
	ZONEGRAPHANNOTATIONS_API virtual ~UZoneGraphAnnotationTestingComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphAnnotationTestingComponent;

// ********** End Class UZoneGraphAnnotationTestingComponent ***************************************

// ********** Begin Class AZoneGraphAnnotationTestingActor *****************************************
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTrigger);


struct Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics;
ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_AZoneGraphAnnotationTestingActor_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZoneGraphAnnotationTestingActor(); \
	friend struct ::Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHANNOTATIONS_API UClass* ::Z_Construct_UClass_AZoneGraphAnnotationTestingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AZoneGraphAnnotationTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphAnnotations"), Z_Construct_UClass_AZoneGraphAnnotationTestingActor_NoRegister) \
	DECLARE_SERIALIZER(AZoneGraphAnnotationTestingActor)


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZoneGraphAnnotationTestingActor(AZoneGraphAnnotationTestingActor&&) = delete; \
	AZoneGraphAnnotationTestingActor(const AZoneGraphAnnotationTestingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHANNOTATIONS_API, AZoneGraphAnnotationTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZoneGraphAnnotationTestingActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZoneGraphAnnotationTestingActor) \
	ZONEGRAPHANNOTATIONS_API virtual ~AZoneGraphAnnotationTestingActor();


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_77_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZoneGraphAnnotationTestingActor;

// ********** End Class AZoneGraphAnnotationTestingActor *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
