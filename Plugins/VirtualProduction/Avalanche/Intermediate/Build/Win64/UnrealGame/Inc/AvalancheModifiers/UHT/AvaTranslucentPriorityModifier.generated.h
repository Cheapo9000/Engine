// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaTranslucentPriorityModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaTranslucentPriorityModifier_generated_h
#error "AvaTranslucentPriorityModifier.generated.h already included, missing '#pragma once' in AvaTranslucentPriorityModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaTranslucentPriorityModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
enum class EAvaTranslucentPriorityModifierMode : uint8;

// ********** Begin Class UAvaTranslucentPriorityModifier ******************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_ACCESSORS \
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


struct Z_Construct_UClass_UAvaTranslucentPriorityModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaTranslucentPriorityModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTranslucentPriorityModifier(); \
	friend struct ::Z_Construct_UClass_UAvaTranslucentPriorityModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaTranslucentPriorityModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTranslucentPriorityModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaTranslucentPriorityModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaTranslucentPriorityModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaTranslucentPriorityModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTranslucentPriorityModifier(UAvaTranslucentPriorityModifier&&) = delete; \
	UAvaTranslucentPriorityModifier(const UAvaTranslucentPriorityModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaTranslucentPriorityModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTranslucentPriorityModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTranslucentPriorityModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaTranslucentPriorityModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTranslucentPriorityModifier;

// ********** End Class UAvaTranslucentPriorityModifier ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTranslucentPriorityModifier_h

// ********** Begin Enum EAvaTranslucentPriorityModifierMode ***************************************
#define FOREACH_ENUM_EAVATRANSLUCENTPRIORITYMODIFIERMODE(op) \
	op(EAvaTranslucentPriorityModifierMode::AutoCameraDistance) \
	op(EAvaTranslucentPriorityModifierMode::AutoOutlinerTree) \
	op(EAvaTranslucentPriorityModifierMode::AutoOutlinerTreeInverted) \
	op(EAvaTranslucentPriorityModifierMode::Manual) 

enum class EAvaTranslucentPriorityModifierMode : uint8;
template<> struct TIsUEnumClass<EAvaTranslucentPriorityModifierMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTranslucentPriorityModifierMode>();
// ********** End Enum EAvaTranslucentPriorityModifierMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
