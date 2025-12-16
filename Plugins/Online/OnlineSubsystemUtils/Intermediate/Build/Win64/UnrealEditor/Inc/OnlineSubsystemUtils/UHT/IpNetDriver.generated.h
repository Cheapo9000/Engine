// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IpNetDriver.h"

#ifdef ONLINESUBSYSTEMUTILS_IpNetDriver_generated_h
#error "IpNetDriver.generated.h already included, missing '#pragma once' in IpNetDriver.h"
#endif
#define ONLINESUBSYSTEMUTILS_IpNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIpNetDriver *************************************************************
struct Z_Construct_UClass_UIpNetDriver_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIpNetDriver(); \
	friend struct ::Z_Construct_UClass_UIpNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UIpNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UIpNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UIpNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UIpNetDriver)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIpNetDriver(UIpNetDriver&&) = delete; \
	UIpNetDriver(const UIpNetDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UIpNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIpNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIpNetDriver) \
	ONLINESUBSYSTEMUTILS_API virtual ~UIpNetDriver();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_64_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIpNetDriver;

// ********** End Class UIpNetDriver ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
