// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/Playables/AvaPlayableRemoteProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlayableRemoteProxy_generated_h
#error "AvaPlayableRemoteProxy.generated.h already included, missing '#pragma once' in AvaPlayableRemoteProxy.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableRemoteProxy_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayableRemoteProxy(); \
	friend struct Z_Construct_UClass_UAvaPlayableRemoteProxy_Statics; \
public: \
	DECLARE_CLASS(UAvaPlayableRemoteProxy, UAvaPlayable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaPlayableRemoteProxy)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlayableRemoteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlayableRemoteProxy(UAvaPlayableRemoteProxy&&); \
	UAvaPlayableRemoteProxy(const UAvaPlayableRemoteProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlayableRemoteProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayableRemoteProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayableRemoteProxy) \
	NO_API virtual ~UAvaPlayableRemoteProxy();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlayableRemoteProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playable_Playables_AvaPlayableRemoteProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
