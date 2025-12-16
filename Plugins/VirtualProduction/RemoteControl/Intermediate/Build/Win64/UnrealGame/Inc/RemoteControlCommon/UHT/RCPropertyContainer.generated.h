// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCPropertyContainer.h"

#ifdef REMOTECONTROLCOMMON_RCPropertyContainer_generated_h
#error "RCPropertyContainer.generated.h already included, missing '#pragma once' in RCPropertyContainer.h"
#endif
#define REMOTECONTROLCOMMON_RCPropertyContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCPropertyContainerBase *************************************************
struct Z_Construct_UClass_URCPropertyContainerBase_Statics;
REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URCPropertyContainerBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyContainerBase(); \
	friend struct ::Z_Construct_UClass_URCPropertyContainerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLCOMMON_API UClass* ::Z_Construct_UClass_URCPropertyContainerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URCPropertyContainerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), Z_Construct_UClass_URCPropertyContainerBase_NoRegister) \
	DECLARE_SERIALIZER(URCPropertyContainerBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyContainerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCPropertyContainerBase(URCPropertyContainerBase&&) = delete; \
	URCPropertyContainerBase(const URCPropertyContainerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyContainerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCPropertyContainerBase) \
	NO_API virtual ~URCPropertyContainerBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCPropertyContainerBase;

// ********** End Class URCPropertyContainerBase ***************************************************

// ********** Begin ScriptStruct FRCPropertyContainerKey *******************************************
struct Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRCPropertyContainerKey;
// ********** End ScriptStruct FRCPropertyContainerKey *********************************************

// ********** Begin Class URCPropertyContainerRegistry *********************************************
struct Z_Construct_UClass_URCPropertyContainerRegistry_Statics;
REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URCPropertyContainerRegistry_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyContainerRegistry(); \
	friend struct ::Z_Construct_UClass_URCPropertyContainerRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLCOMMON_API UClass* ::Z_Construct_UClass_URCPropertyContainerRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(URCPropertyContainerRegistry, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), Z_Construct_UClass_URCPropertyContainerRegistry_NoRegister) \
	DECLARE_SERIALIZER(URCPropertyContainerRegistry)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyContainerRegistry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCPropertyContainerRegistry(URCPropertyContainerRegistry&&) = delete; \
	URCPropertyContainerRegistry(const URCPropertyContainerRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyContainerRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyContainerRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCPropertyContainerRegistry) \
	NO_API virtual ~URCPropertyContainerRegistry();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_95_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCPropertyContainerRegistry;

// ********** End Class URCPropertyContainerRegistry ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
