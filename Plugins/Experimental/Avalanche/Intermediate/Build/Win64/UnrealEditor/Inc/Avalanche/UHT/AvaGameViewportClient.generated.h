// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/AvaGameViewportClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaGameViewportClient_generated_h
#error "AvaGameViewportClient.generated.h already included, missing '#pragma once' in AvaGameViewportClient.h"
#endif
#define AVALANCHE_AvaGameViewportClient_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGameViewportClient(); \
	friend struct Z_Construct_UClass_UAvaGameViewportClient_Statics; \
public: \
	DECLARE_CLASS(UAvaGameViewportClient, UGameViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), AVALANCHE_API) \
	DECLARE_SERIALIZER(UAvaGameViewportClient)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaGameViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaGameViewportClient(UAvaGameViewportClient&&); \
	UAvaGameViewportClient(const UAvaGameViewportClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaGameViewportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGameViewportClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaGameViewportClient) \
	AVALANCHE_API virtual ~UAvaGameViewportClient();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaGameViewportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameViewportClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
