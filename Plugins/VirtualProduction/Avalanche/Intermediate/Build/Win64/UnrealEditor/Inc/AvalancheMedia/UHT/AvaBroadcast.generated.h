// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcast.h"

#ifdef AVALANCHEMEDIA_AvaBroadcast_generated_h
#error "AvaBroadcast.generated.h already included, missing '#pragma once' in AvaBroadcast.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcast_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaBroadcast;

// ********** Begin Class UAvaBroadcast ************************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBroadcastingAllChannels); \
	DECLARE_FUNCTION(execIsBroadcastingAnyChannel); \
	DECLARE_FUNCTION(execStopBroadcast); \
	DECLARE_FUNCTION(execStartBroadcast); \
	DECLARE_FUNCTION(execGetBroadcast);


struct Z_Construct_UClass_UAvaBroadcast_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaBroadcast_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBroadcast(); \
	friend struct ::Z_Construct_UClass_UAvaBroadcast_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaBroadcast_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaBroadcast, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaBroadcast_NoRegister) \
	DECLARE_SERIALIZER(UAvaBroadcast)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaBroadcast(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaBroadcast(UAvaBroadcast&&) = delete; \
	UAvaBroadcast(const UAvaBroadcast&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaBroadcast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBroadcast); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaBroadcast) \
	NO_API virtual ~UAvaBroadcast();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaBroadcast;

// ********** End Class UAvaBroadcast **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
