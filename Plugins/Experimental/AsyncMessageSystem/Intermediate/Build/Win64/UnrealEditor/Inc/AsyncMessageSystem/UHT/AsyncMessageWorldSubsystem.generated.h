// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncMessageWorldSubsystem.h"

#ifdef ASYNCMESSAGESYSTEM_AsyncMessageWorldSubsystem_generated_h
#error "AsyncMessageWorldSubsystem.generated.h already included, missing '#pragma once' in AsyncMessageWorldSubsystem.h"
#endif
#define ASYNCMESSAGESYSTEM_AsyncMessageWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAsyncMessageWorldSubsystem **********************************************
struct Z_Construct_UClass_UAsyncMessageWorldSubsystem_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UAsyncMessageWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncMessageWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UAsyncMessageWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UAsyncMessageWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncMessageWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UAsyncMessageWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAsyncMessageWorldSubsystem)


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASYNCMESSAGESYSTEM_API UAsyncMessageWorldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncMessageWorldSubsystem(UAsyncMessageWorldSubsystem&&) = delete; \
	UAsyncMessageWorldSubsystem(const UAsyncMessageWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASYNCMESSAGESYSTEM_API, UAsyncMessageWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMessageWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncMessageWorldSubsystem) \
	ASYNCMESSAGESYSTEM_API virtual ~UAsyncMessageWorldSubsystem();


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncMessageWorldSubsystem;

// ********** End Class UAsyncMessageWorldSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
