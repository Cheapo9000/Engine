// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayableLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef AVALANCHEMEDIA_AvaPlayableLibrary_generated_h
#error "AvaPlayableLibrary.generated.h already included, missing '#pragma once' in AvaPlayableLibrary.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlayableHidden); \
	DECLARE_FUNCTION(execIsPlayableHidden); \
	DECLARE_FUNCTION(execUpdatePlayableRemoteControlValues);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayableLibrary(); \
	friend struct Z_Construct_UClass_UAvaPlayableLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaPlayableLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), AVALANCHEMEDIA_API) \
	DECLARE_SERIALIZER(UAvaPlayableLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMEDIA_API UAvaPlayableLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlayableLibrary(UAvaPlayableLibrary&&); \
	UAvaPlayableLibrary(const UAvaPlayableLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMEDIA_API, UAvaPlayableLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayableLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayableLibrary) \
	AVALANCHEMEDIA_API virtual ~UAvaPlayableLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlayableLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
