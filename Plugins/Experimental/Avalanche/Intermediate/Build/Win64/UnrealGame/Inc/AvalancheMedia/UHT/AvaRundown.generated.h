// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundown.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaRundown_generated_h
#error "AvaRundown.generated.h already included, missing '#pragma once' in AvaRundown.h"
#endif
#define AVALANCHEMEDIA_AvaRundown_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaRundownPageCollection_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaRundownPageCollection>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaRundownSubList_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaRundownSubList>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_298_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaRundown(); \
	friend struct Z_Construct_UClass_UAvaRundown_Statics; \
public: \
	DECLARE_CLASS(UAvaRundown, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaRundown)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_298_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaRundown(UAvaRundown&&); \
	UAvaRundown(const UAvaRundown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaRundown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRundown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaRundown)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_295_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_298_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_298_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h_298_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaRundown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundown_h


#define FOREACH_ENUM_EAVARUNDOWNPAGESTOPOPTIONS(op) \
	op(EAvaRundownPageStopOptions::None) \
	op(EAvaRundownPageStopOptions::ForceNoTransition) \
	op(EAvaRundownPageStopOptions::Default) 

enum class EAvaRundownPageStopOptions : uint8;
template<> struct TIsUEnumClass<EAvaRundownPageStopOptions> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaRundownPageStopOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
