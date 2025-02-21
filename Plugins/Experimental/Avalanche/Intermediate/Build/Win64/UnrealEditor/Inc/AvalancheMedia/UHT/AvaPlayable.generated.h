// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlayable_generated_h
#error "AvaPlayable.generated.h already included, missing '#pragma once' in AvaPlayable.h"
#endif
#define AVALANCHEMEDIA_AvaPlayable_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayable(); \
	friend struct Z_Construct_UClass_UAvaPlayable_Statics; \
public: \
	DECLARE_CLASS(UAvaPlayable, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaPlayable)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlayable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlayable(UAvaPlayable&&); \
	UAvaPlayable(const UAvaPlayable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlayable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayable) \
	NO_API virtual ~UAvaPlayable();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_74_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlayable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h


#define FOREACH_ENUM_EAVAPLAYABLEENDPLAYOPTIONS(op) \
	op(EAvaPlayableEndPlayOptions::None) \
	op(EAvaPlayableEndPlayOptions::ConditionalEndPlayWorld) \
	op(EAvaPlayableEndPlayOptions::ForceImmediate) 

enum class EAvaPlayableEndPlayOptions : uint8;
template<> struct TIsUEnumClass<EAvaPlayableEndPlayOptions> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaPlayableEndPlayOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
