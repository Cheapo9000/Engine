// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterNetDriver.h"

#ifdef DISPLAYCLUSTERREPLICATION_DisplayClusterNetDriver_generated_h
#error "DisplayClusterNetDriver.generated.h already included, missing '#pragma once' in DisplayClusterNetDriver.h"
#endif
#define DISPLAYCLUSTERREPLICATION_DisplayClusterNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterNetDriver *************************************************
struct Z_Construct_UClass_UDisplayClusterNetDriver_Statics;
DISPLAYCLUSTERREPLICATION_API UClass* Z_Construct_UClass_UDisplayClusterNetDriver_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUDisplayClusterNetDriver(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERREPLICATION_API UClass* ::Z_Construct_UClass_UDisplayClusterNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayClusterReplication"), Z_Construct_UClass_UDisplayClusterNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterNetDriver)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterNetDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterNetDriver(UDisplayClusterNetDriver&&) = delete; \
	UDisplayClusterNetDriver(const UDisplayClusterNetDriver&) = delete;


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_52_INCLASS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterNetDriver;

// ********** End Class UDisplayClusterNetDriver ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
