// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NamedInterfaces.h"

#ifdef ONLINESUBSYSTEM_NamedInterfaces_generated_h
#error "NamedInterfaces.generated.h already included, missing '#pragma once' in NamedInterfaces.h"
#endif
#define ONLINESUBSYSTEM_NamedInterfaces_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNamedInterface ***************************************************
struct Z_Construct_UScriptStruct_FNamedInterface_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedInterface_Statics; \
	ONLINESUBSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNamedInterface;
// ********** End ScriptStruct FNamedInterface *****************************************************

// ********** Begin ScriptStruct FNamedInterfaceDef ************************************************
struct Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics; \
	ONLINESUBSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNamedInterfaceDef;
// ********** End ScriptStruct FNamedInterfaceDef **************************************************

// ********** Begin Class UNamedInterfaces *********************************************************
struct Z_Construct_UClass_UNamedInterfaces_Statics;
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUNamedInterfaces(); \
	friend struct ::Z_Construct_UClass_UNamedInterfaces_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEM_API UClass* ::Z_Construct_UClass_UNamedInterfaces_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamedInterfaces, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystem"), Z_Construct_UClass_UNamedInterfaces_NoRegister) \
	DECLARE_SERIALIZER(UNamedInterfaces)


#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamedInterfaces(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedInterfaces) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamedInterfaces); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedInterfaces); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamedInterfaces(UNamedInterfaces&&) = delete; \
	UNamedInterfaces(const UNamedInterfaces&) = delete; \
	NO_API virtual ~UNamedInterfaces();


#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_53_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_56_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamedInterfaces;

// ********** End Class UNamedInterfaces ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
