// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Ticker/AvaTickerActor.h"

#ifdef AVALANCHE_AvaTickerActor_generated_h
#error "AvaTickerActor.generated.h already included, missing '#pragma once' in AvaTickerActor.h"
#endif
#define AVALANCHE_AvaTickerActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaTickerActor **********************************************************
struct Z_Construct_UClass_AAvaTickerActor_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_AAvaTickerActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaTickerActor(); \
	friend struct ::Z_Construct_UClass_AAvaTickerActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_AAvaTickerActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaTickerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_AAvaTickerActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaTickerActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaTickerActor(AAvaTickerActor&&) = delete; \
	AAvaTickerActor(const AAvaTickerActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, AAvaTickerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaTickerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaTickerActor) \
	AVALANCHE_API virtual ~AAvaTickerActor();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaTickerActor;

// ********** End Class AAvaTickerActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
