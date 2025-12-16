// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcastLibrary.h"

#ifdef AVALANCHEMEDIA_AvaBroadcastLibrary_generated_h
#error "AvaBroadcastLibrary.generated.h already included, missing '#pragma once' in AvaBroadcastLibrary.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcastLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAvaBroadcastChannelState : uint8;
enum class EAvaBroadcastChannelType : uint8;

// ********** Begin Class UAvaBroadcastLibrary *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChannelType); \
	DECLARE_FUNCTION(execGetChannelStatus); \
	DECLARE_FUNCTION(execGetChannelName); \
	DECLARE_FUNCTION(execGetChannelViewportSize);


struct Z_Construct_UClass_UAvaBroadcastLibrary_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaBroadcastLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBroadcastLibrary(); \
	friend struct ::Z_Construct_UClass_UAvaBroadcastLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaBroadcastLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaBroadcastLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaBroadcastLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAvaBroadcastLibrary)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMEDIA_API UAvaBroadcastLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaBroadcastLibrary(UAvaBroadcastLibrary&&) = delete; \
	UAvaBroadcastLibrary(const UAvaBroadcastLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMEDIA_API, UAvaBroadcastLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBroadcastLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaBroadcastLibrary) \
	AVALANCHEMEDIA_API virtual ~UAvaBroadcastLibrary();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaBroadcastLibrary;

// ********** End Class UAvaBroadcastLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
