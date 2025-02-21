// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaRundownComponent_generated_h
#error "AvaRundownComponent.generated.h already included, missing '#pragma once' in AvaRundownComponent.h"
#endif
#define AVALANCHEMEDIA_AvaRundownComponent_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPageIdForIndex); \
	DECLARE_FUNCTION(execGetNumberOfPages); \
	DECLARE_FUNCTION(execStopPage); \
	DECLARE_FUNCTION(execPlayPage);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaRundownComponent(); \
	friend struct Z_Construct_UClass_UAvaRundownComponent_Statics; \
public: \
	DECLARE_CLASS(UAvaRundownComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaRundownComponent)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaRundownComponent(UAvaRundownComponent&&); \
	UAvaRundownComponent(const UAvaRundownComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaRundownComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRundownComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaRundownComponent) \
	NO_API virtual ~UAvaRundownComponent();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaRundownComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Rundown_AvaRundownComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
