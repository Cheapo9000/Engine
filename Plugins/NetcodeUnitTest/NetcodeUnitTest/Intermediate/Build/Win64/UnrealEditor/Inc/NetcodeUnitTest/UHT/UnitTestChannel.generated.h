// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/UnitTestChannel.h"

#ifdef NETCODEUNITTEST_UnitTestChannel_generated_h
#error "UnitTestChannel.generated.h already included, missing '#pragma once' in UnitTestChannel.h"
#endif
#define NETCODEUNITTEST_UnitTestChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTestChannel *********************************************************
struct Z_Construct_UClass_UUnitTestChannel_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestChannel_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTestChannel(); \
	friend struct ::Z_Construct_UClass_UUnitTestChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTestChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTestChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTestChannel_NoRegister) \
	DECLARE_SERIALIZER(UUnitTestChannel)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestChannel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTestChannel(UUnitTestChannel&&) = delete; \
	UUnitTestChannel(const UUnitTestChannel&) = delete; \
	NO_API virtual ~UUnitTestChannel();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_22_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_25_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTestChannel;

// ********** End Class UUnitTestChannel ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
