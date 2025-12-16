// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaAutoSizeModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaAutoSizeModifier_generated_h
#error "AvaAutoSizeModifier.generated.h already included, missing '#pragma once' in AvaAutoSizeModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaAutoSizeModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaAutoSizeFitMode : uint8;
struct FActorModifierSceneTreeActor;

// ********** Begin Class UAvaAutoSizeModifier *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIncludeChildren); \
	DECLARE_FUNCTION(execSetIncludeChildren); \
	DECLARE_FUNCTION(execGetFitMode); \
	DECLARE_FUNCTION(execSetFitMode); \
	DECLARE_FUNCTION(execGetPaddingVertical); \
	DECLARE_FUNCTION(execSetPaddingVertical); \
	DECLARE_FUNCTION(execGetPaddingHorizontal); \
	DECLARE_FUNCTION(execSetPaddingHorizontal); \
	DECLARE_FUNCTION(execGetReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActor);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_ACCESSORS \
static void GetReferenceActor_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceActor_WrapperImpl(void* Object, const void* InValue); \
static void GetPaddingVertical_WrapperImpl(const void* Object, void* OutValue); \
static void SetPaddingVertical_WrapperImpl(void* Object, const void* InValue); \
static void GetPaddingHorizontal_WrapperImpl(const void* Object, void* OutValue); \
static void SetPaddingHorizontal_WrapperImpl(void* Object, const void* InValue); \
static void GetFitMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetFitMode_WrapperImpl(void* Object, const void* InValue); \
static void GetbIncludeChildren_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIncludeChildren_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaAutoSizeModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaAutoSizeModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaAutoSizeModifier(); \
	friend struct ::Z_Construct_UClass_UAvaAutoSizeModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaAutoSizeModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaAutoSizeModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaAutoSizeModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaAutoSizeModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaAutoSizeModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaAutoSizeModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaAutoSizeModifier(UAvaAutoSizeModifier&&) = delete; \
	UAvaAutoSizeModifier(const UAvaAutoSizeModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaAutoSizeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaAutoSizeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaAutoSizeModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaAutoSizeModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaAutoSizeModifier;

// ********** End Class UAvaAutoSizeModifier *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoSizeModifier_h

// ********** Begin Enum EAvaAutoSizeFitMode *******************************************************
#define FOREACH_ENUM_EAVAAUTOSIZEFITMODE(op) \
	op(EAvaAutoSizeFitMode::WidthAndHeight) \
	op(EAvaAutoSizeFitMode::WidthOnly) \
	op(EAvaAutoSizeFitMode::HeightOnly) 

enum class EAvaAutoSizeFitMode : uint8;
template<> struct TIsUEnumClass<EAvaAutoSizeFitMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaAutoSizeFitMode>();
// ********** End Enum EAvaAutoSizeFitMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
