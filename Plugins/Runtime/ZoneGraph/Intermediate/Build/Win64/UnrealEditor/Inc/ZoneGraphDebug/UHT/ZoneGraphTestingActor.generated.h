// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphTestingActor.h"

#ifdef ZONEGRAPHDEBUG_ZoneGraphTestingActor_generated_h
#error "ZoneGraphTestingActor.generated.h already included, missing '#pragma once' in ZoneGraphTestingActor.h"
#endif
#define ZONEGRAPHDEBUG_ZoneGraphTestingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneLaneTest ************************************************************
struct Z_Construct_UClass_UZoneLaneTest_Statics;
ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneLaneTest_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneLaneTest(); \
	friend struct ::Z_Construct_UClass_UZoneLaneTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHDEBUG_API UClass* ::Z_Construct_UClass_UZoneLaneTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneLaneTest, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), Z_Construct_UClass_UZoneLaneTest_NoRegister) \
	DECLARE_SERIALIZER(UZoneLaneTest)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ZONEGRAPHDEBUG_API UZoneLaneTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneLaneTest(UZoneLaneTest&&) = delete; \
	UZoneLaneTest(const UZoneLaneTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHDEBUG_API, UZoneLaneTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneLaneTest); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneLaneTest) \
	ZONEGRAPHDEBUG_API virtual ~UZoneLaneTest();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneLaneTest;

// ********** End Class UZoneLaneTest **************************************************************

// ********** Begin Class UZoneGraphTestingComponent ***********************************************
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableCustomTests); \
	DECLARE_FUNCTION(execEnableCustomTests);


struct Z_Construct_UClass_UZoneGraphTestingComponent_Statics;
ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphTestingComponent(); \
	friend struct ::Z_Construct_UClass_UZoneGraphTestingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHDEBUG_API UClass* ::Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphTestingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphTestingComponent)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphTestingComponent(UZoneGraphTestingComponent&&) = delete; \
	UZoneGraphTestingComponent(const UZoneGraphTestingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHDEBUG_API, UZoneGraphTestingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphTestingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphTestingComponent) \
	ZONEGRAPHDEBUG_API virtual ~UZoneGraphTestingComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphTestingComponent;

// ********** End Class UZoneGraphTestingComponent *************************************************

// ********** Begin Class AZoneGraphTestingActor ***************************************************
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableCustomTests); \
	DECLARE_FUNCTION(execEnableCustomTests);


struct Z_Construct_UClass_AZoneGraphTestingActor_Statics;
ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_AZoneGraphTestingActor_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZoneGraphTestingActor(); \
	friend struct ::Z_Construct_UClass_AZoneGraphTestingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHDEBUG_API UClass* ::Z_Construct_UClass_AZoneGraphTestingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AZoneGraphTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), Z_Construct_UClass_AZoneGraphTestingActor_NoRegister) \
	DECLARE_SERIALIZER(AZoneGraphTestingActor)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZoneGraphTestingActor(AZoneGraphTestingActor&&) = delete; \
	AZoneGraphTestingActor(const AZoneGraphTestingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZoneGraphTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZoneGraphTestingActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZoneGraphTestingActor) \
	NO_API virtual ~AZoneGraphTestingActor();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_145_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZoneGraphTestingActor;

// ********** End Class AZoneGraphTestingActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
