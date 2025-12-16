// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcastComponent.h"

#ifdef AVALANCHEMEDIA_AvaBroadcastComponent_generated_h
#error "AvaBroadcastComponent.generated.h already included, missing '#pragma once' in AvaBroadcastComponent.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcastComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaBroadcastComponent ***************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopBroadcasting); \
	DECLARE_FUNCTION(execStartBroadcasting);


struct Z_Construct_UClass_UAvaBroadcastComponent_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaBroadcastComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBroadcastComponent(); \
	friend struct ::Z_Construct_UClass_UAvaBroadcastComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaBroadcastComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaBroadcastComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaBroadcastComponent_NoRegister) \
	DECLARE_SERIALIZER(UAvaBroadcastComponent)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaBroadcastComponent(UAvaBroadcastComponent&&) = delete; \
	UAvaBroadcastComponent(const UAvaBroadcastComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaBroadcastComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBroadcastComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaBroadcastComponent) \
	NO_API virtual ~UAvaBroadcastComponent();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaBroadcastComponent;

// ********** End Class UAvaBroadcastComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Broadcast_AvaBroadcastComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
