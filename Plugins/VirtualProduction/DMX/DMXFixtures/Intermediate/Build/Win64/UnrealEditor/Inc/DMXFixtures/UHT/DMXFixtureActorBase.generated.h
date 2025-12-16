// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXFixtureActorBase.h"

#ifdef DMXFIXTURES_DMXFixtureActorBase_generated_h
#error "DMXFixtureActorBase.generated.h already included, missing '#pragma once' in DMXFixtureActorBase.h"
#endif
#define DMXFIXTURES_DMXFixtureActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDMXNormalizedAttributeValueMap;

// ********** Begin Class ADMXFixtureActorBase *****************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInterpolateDMXComponents); \
	DECLARE_FUNCTION(execPushNormalizedValuesPerAttribute);


struct Z_Construct_UClass_ADMXFixtureActorBase_Statics;
DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMXFixtureActorBase(); \
	friend struct ::Z_Construct_UClass_ADMXFixtureActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXFIXTURES_API UClass* ::Z_Construct_UClass_ADMXFixtureActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ADMXFixtureActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXFixtures"), Z_Construct_UClass_ADMXFixtureActorBase_NoRegister) \
	DECLARE_SERIALIZER(ADMXFixtureActorBase)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADMXFixtureActorBase(ADMXFixtureActorBase&&) = delete; \
	ADMXFixtureActorBase(const ADMXFixtureActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMXFixtureActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMXFixtureActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMXFixtureActorBase) \
	NO_API virtual ~ADMXFixtureActorBase();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADMXFixtureActorBase;

// ********** End Class ADMXFixtureActorBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
