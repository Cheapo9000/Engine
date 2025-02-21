// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcastComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaBroadcastComponent_generated_h
#error "AvaBroadcastComponent.generated.h already included, missing '#pragma once' in AvaBroadcastComponent.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcastComponent_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopBroadcasting); \
	DECLARE_FUNCTION(execStartBroadcasting);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBroadcastComponent(); \
	friend struct Z_Construct_UClass_UAvaBroadcastComponent_Statics; \
public: \
	DECLARE_CLASS(UAvaBroadcastComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaBroadcastComponent)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaBroadcastComponent(UAvaBroadcastComponent&&); \
	UAvaBroadcastComponent(const UAvaBroadcastComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaBroadcastComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBroadcastComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaBroadcastComponent) \
	NO_API virtual ~UAvaBroadcastComponent();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaBroadcastComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
