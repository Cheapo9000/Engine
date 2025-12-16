// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXFixtureComponentSingle.h"

#ifdef DMXFIXTURES_DMXFixtureComponentSingle_generated_h
#error "DMXFixtureComponentSingle.generated.h already included, missing '#pragma once' in DMXFixtureComponentSingle.h"
#endif
#define DMXFIXTURES_DMXFixtureComponentSingle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXFixtureComponentSingle ***********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDMXInterpolationDone); \
	DECLARE_FUNCTION(execGetDMXTargetValue); \
	DECLARE_FUNCTION(execGetDMXInterpolatedValue); \
	DECLARE_FUNCTION(execGetDMXInterpolatedStep);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDMXFixtureComponentSingle_Statics;
DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentSingle_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXFixtureComponentSingle(); \
	friend struct ::Z_Construct_UClass_UDMXFixtureComponentSingle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXFIXTURES_API UClass* ::Z_Construct_UClass_UDMXFixtureComponentSingle_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXFixtureComponentSingle, UDMXFixtureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXFixtures"), Z_Construct_UClass_UDMXFixtureComponentSingle_NoRegister) \
	DECLARE_SERIALIZER(UDMXFixtureComponentSingle)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXFixtureComponentSingle(UDMXFixtureComponentSingle&&) = delete; \
	UDMXFixtureComponentSingle(const UDMXFixtureComponentSingle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXFixtureComponentSingle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXFixtureComponentSingle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXFixtureComponentSingle) \
	NO_API virtual ~UDMXFixtureComponentSingle();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXFixtureComponentSingle;

// ********** End Class UDMXFixtureComponentSingle *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
