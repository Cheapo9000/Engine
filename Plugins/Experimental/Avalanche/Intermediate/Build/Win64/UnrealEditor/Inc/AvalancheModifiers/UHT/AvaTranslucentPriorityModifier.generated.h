// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaTranslucentPriorityModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
enum class EAvaTranslucentPriorityModifierMode : uint8;
#ifdef AVALANCHEMODIFIERS_AvaTranslucentPriorityModifier_generated_h
#error "AvaTranslucentPriorityModifier.generated.h already included, missing '#pragma once' in AvaTranslucentPriorityModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaTranslucentPriorityModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIncludeChildren); \
	DECLARE_FUNCTION(execSetIncludeChildren); \
	DECLARE_FUNCTION(execGetSortPriorityStep); \
	DECLARE_FUNCTION(execSetSortPriorityStep); \
	DECLARE_FUNCTION(execGetSortPriorityOffset); \
	DECLARE_FUNCTION(execSetSortPriorityOffset); \
	DECLARE_FUNCTION(execGetSortPriority); \
	DECLARE_FUNCTION(execSetSortPriority); \
	DECLARE_FUNCTION(execGetCameraActor); \
	DECLARE_FUNCTION(execSetCameraActor); \
	DECLARE_FUNCTION(execGetMode); \
	DECLARE_FUNCTION(execSetMode);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_ACCESSORS \
static void GetMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMode_WrapperImpl(void* Object, const void* InValue); \
static void GetCameraActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetCameraActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetSortPriority_WrapperImpl(const void* Object, void* OutValue); \
static void SetSortPriority_WrapperImpl(void* Object, const void* InValue); \
static void GetSortPriorityOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetSortPriorityOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetSortPriorityStep_WrapperImpl(const void* Object, void* OutValue); \
static void SetSortPriorityStep_WrapperImpl(void* Object, const void* InValue); \
static void GetbIncludeChildren_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIncludeChildren_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTranslucentPriorityModifier(); \
	friend struct Z_Construct_UClass_UAvaTranslucentPriorityModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaTranslucentPriorityModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaTranslucentPriorityModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaTranslucentPriorityModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTranslucentPriorityModifier(UAvaTranslucentPriorityModifier&&); \
	UAvaTranslucentPriorityModifier(const UAvaTranslucentPriorityModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaTranslucentPriorityModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTranslucentPriorityModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTranslucentPriorityModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaTranslucentPriorityModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaTranslucentPriorityModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h


#define FOREACH_ENUM_EAVATRANSLUCENTPRIORITYMODIFIERMODE(op) \
	op(EAvaTranslucentPriorityModifierMode::AutoCameraDistance) \
	op(EAvaTranslucentPriorityModifierMode::AutoOutlinerTree) \
	op(EAvaTranslucentPriorityModifierMode::Manual) 

enum class EAvaTranslucentPriorityModifierMode : uint8;
template<> struct TIsUEnumClass<EAvaTranslucentPriorityModifierMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaTranslucentPriorityModifierMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
