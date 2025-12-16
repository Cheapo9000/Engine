// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayable.h"

#ifdef AVALANCHEMEDIA_AvaPlayable_generated_h
#error "AvaPlayable.generated.h already included, missing '#pragma once' in AvaPlayable.h"
#endif
#define AVALANCHEMEDIA_AvaPlayable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlayable *************************************************************
struct Z_Construct_UClass_UAvaPlayable_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlayable_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayable(); \
	friend struct ::Z_Construct_UClass_UAvaPlayable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlayable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlayable, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlayable_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlayable)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlayable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlayable(UAvaPlayable&&) = delete; \
	UAvaPlayable(const UAvaPlayable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlayable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayable) \
	NO_API virtual ~UAvaPlayable();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_71_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlayable;

// ********** End Class UAvaPlayable ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayable_h

// ********** Begin Enum EAvaPlayableEndPlayOptions ************************************************
#define FOREACH_ENUM_EAVAPLAYABLEENDPLAYOPTIONS(op) \
	op(EAvaPlayableEndPlayOptions::None) \
	op(EAvaPlayableEndPlayOptions::ConditionalEndPlayWorld) \
	op(EAvaPlayableEndPlayOptions::ForceImmediate) 

enum class EAvaPlayableEndPlayOptions : uint8;
template<> struct TIsUEnumClass<EAvaPlayableEndPlayOptions> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlayableEndPlayOptions>();
// ********** End Enum EAvaPlayableEndPlayOptions **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
