// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/Channel/IAvaBroadcastOutputChannelViewInterface.h"

#ifdef AVALANCHEMEDIA_IAvaBroadcastOutputChannelViewInterface_generated_h
#error "IAvaBroadcastOutputChannelViewInterface.generated.h already included, missing '#pragma once' in IAvaBroadcastOutputChannelViewInterface.h"
#endif
#define AVALANCHEMEDIA_IAvaBroadcastOutputChannelViewInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaBroadcastOutputChannelViewInterface ******************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetChannelName_Implementation(FText const& InChannelName) {}; \
	DECLARE_FUNCTION(execSetChannelName);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAvaBroadcastOutputChannelViewInterface_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaBroadcastOutputChannelViewInterface_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMEDIA_API UAvaBroadcastOutputChannelViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaBroadcastOutputChannelViewInterface(UAvaBroadcastOutputChannelViewInterface&&) = delete; \
	UAvaBroadcastOutputChannelViewInterface(const UAvaBroadcastOutputChannelViewInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMEDIA_API, UAvaBroadcastOutputChannelViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBroadcastOutputChannelViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaBroadcastOutputChannelViewInterface) \
	virtual ~UAvaBroadcastOutputChannelViewInterface() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaBroadcastOutputChannelViewInterface(); \
	friend struct ::Z_Construct_UClass_UAvaBroadcastOutputChannelViewInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaBroadcastOutputChannelViewInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaBroadcastOutputChannelViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaBroadcastOutputChannelViewInterface_NoRegister) \
	DECLARE_SERIALIZER(UAvaBroadcastOutputChannelViewInterface)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaBroadcastOutputChannelViewInterface() {} \
public: \
	typedef UAvaBroadcastOutputChannelViewInterface UClassType; \
	typedef IAvaBroadcastOutputChannelViewInterface ThisClass; \
	static void Execute_SetChannelName(UObject* O, FText const& InChannelName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaBroadcastOutputChannelViewInterface;

// ********** End Interface UAvaBroadcastOutputChannelViewInterface ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_Channel_IAvaBroadcastOutputChannelViewInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
