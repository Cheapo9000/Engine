// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/UnitTestActorChannel.h"

#ifdef NETCODEUNITTEST_UnitTestActorChannel_generated_h
#error "UnitTestActorChannel.generated.h already included, missing '#pragma once' in UnitTestActorChannel.h"
#endif
#define NETCODEUNITTEST_UnitTestActorChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTestActorChannel ****************************************************
struct Z_Construct_UClass_UUnitTestActorChannel_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestActorChannel_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTestActorChannel(); \
	friend struct ::Z_Construct_UClass_UUnitTestActorChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTestActorChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTestActorChannel, UActorChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTestActorChannel_NoRegister) \
	DECLARE_SERIALIZER(UUnitTestActorChannel)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestActorChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestActorChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestActorChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestActorChannel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTestActorChannel(UUnitTestActorChannel&&) = delete; \
	UUnitTestActorChannel(const UUnitTestActorChannel&) = delete; \
	NO_API virtual ~UUnitTestActorChannel();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_21_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_26_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTestActorChannel;

// ********** End Class UUnitTestActorChannel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
