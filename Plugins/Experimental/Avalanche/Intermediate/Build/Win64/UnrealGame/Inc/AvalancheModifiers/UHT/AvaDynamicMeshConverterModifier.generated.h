// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaDynamicMeshConverterModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAvaDynamicMeshConverterModifierFilter : uint8;
enum class EAvaDynamicMeshConverterModifierType : uint8;
#ifdef AVALANCHEMODIFIERS_AvaDynamicMeshConverterModifier_generated_h
#error "AvaDynamicMeshConverterModifier.generated.h already included, missing '#pragma once' in AvaDynamicMeshConverterModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaDynamicMeshConverterModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaDynamicMeshConverterModifierComponentState_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaDynamicMeshConverterModifierComponentState>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHideConvertedMesh); \
	DECLARE_FUNCTION(execSetHideConvertedMesh); \
	DECLARE_FUNCTION(execGetIncludeAttachedActors); \
	DECLARE_FUNCTION(execSetIncludeAttachedActors); \
	DECLARE_FUNCTION(execGetFilterActorClasses); \
	DECLARE_FUNCTION(execSetFilterActorClasses); \
	DECLARE_FUNCTION(execGetFilterActorMode); \
	DECLARE_FUNCTION(execSetFilterActorMode); \
	DECLARE_FUNCTION(execGetComponentTypes); \
	DECLARE_FUNCTION(execSetComponentTypes); \
	DECLARE_FUNCTION(execGetSourceActor); \
	DECLARE_FUNCTION(execSetSourceActor);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_ACCESSORS \
static void GetSourceActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetSourceActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetComponentType_WrapperImpl(const void* Object, void* OutValue); \
static void SetComponentType_WrapperImpl(void* Object, const void* InValue); \
static void GetFilterActorMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetFilterActorMode_WrapperImpl(void* Object, const void* InValue); \
static void GetFilterActorClasses_WrapperImpl(const void* Object, void* OutValue); \
static void SetFilterActorClasses_WrapperImpl(void* Object, const void* InValue); \
static void GetbIncludeAttachedActors_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIncludeAttachedActors_WrapperImpl(void* Object, const void* InValue); \
static void GetbHideConvertedMesh_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHideConvertedMesh_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaDynamicMeshConverterModifier(); \
	friend struct Z_Construct_UClass_UAvaDynamicMeshConverterModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaDynamicMeshConverterModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaDynamicMeshConverterModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaDynamicMeshConverterModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaDynamicMeshConverterModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaDynamicMeshConverterModifier(UAvaDynamicMeshConverterModifier&&); \
	UAvaDynamicMeshConverterModifier(const UAvaDynamicMeshConverterModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaDynamicMeshConverterModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaDynamicMeshConverterModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaDynamicMeshConverterModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaDynamicMeshConverterModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaDynamicMeshConverterModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaDynamicMeshConverterModifier_h


#define FOREACH_ENUM_EAVADYNAMICMESHCONVERTERMODIFIERTYPE(op) \
	op(EAvaDynamicMeshConverterModifierType::None) \
	op(EAvaDynamicMeshConverterModifierType::StaticMeshComponent) \
	op(EAvaDynamicMeshConverterModifierType::DynamicMeshComponent) \
	op(EAvaDynamicMeshConverterModifierType::SkeletalMeshComponent) \
	op(EAvaDynamicMeshConverterModifierType::BrushComponent) \
	op(EAvaDynamicMeshConverterModifierType::ProceduralMeshComponent) 

enum class EAvaDynamicMeshConverterModifierType : uint8;
template<> struct TIsUEnumClass<EAvaDynamicMeshConverterModifierType> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaDynamicMeshConverterModifierType>();

#define FOREACH_ENUM_EAVADYNAMICMESHCONVERTERMODIFIERFILTER(op) \
	op(EAvaDynamicMeshConverterModifierFilter::None) \
	op(EAvaDynamicMeshConverterModifierFilter::Include) \
	op(EAvaDynamicMeshConverterModifierFilter::Exclude) 

enum class EAvaDynamicMeshConverterModifierFilter : uint8;
template<> struct TIsUEnumClass<EAvaDynamicMeshConverterModifierFilter> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaDynamicMeshConverterModifierFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
