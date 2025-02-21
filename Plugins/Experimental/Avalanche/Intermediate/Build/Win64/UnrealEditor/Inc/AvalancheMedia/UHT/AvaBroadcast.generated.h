// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcast.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaBroadcast;
#ifdef AVALANCHEMEDIA_AvaBroadcast_generated_h
#error "AvaBroadcast.generated.h already included, missing '#pragma once' in AvaBroadcast.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcast_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBroadcastingAllChannels); \
	DECLARE_FUNCTION(execIsBroadcastingAnyChannel); \
	DECLARE_FUNCTION(execStopBroadcast); \
	DECLARE_FUNCTION(execStartBroadcast); \
	DECLARE_FUNCTION(execGetBroadcast);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBroadcast(); \
	friend struct Z_Construct_UClass_UAvaBroadcast_Statics; \
public: \
	DECLARE_CLASS(UAvaBroadcast, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaBroadcast)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaBroadcast(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaBroadcast(UAvaBroadcast&&); \
	UAvaBroadcast(const UAvaBroadcast&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaBroadcast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBroadcast); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaBroadcast) \
	NO_API virtual ~UAvaBroadcast();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaBroadcast>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcast_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
