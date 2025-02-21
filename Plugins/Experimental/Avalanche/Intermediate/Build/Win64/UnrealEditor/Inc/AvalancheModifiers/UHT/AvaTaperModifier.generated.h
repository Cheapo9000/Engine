// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaTaperModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaTaperExtent : uint8;
enum class EAvaTaperInterpolationType : uint8;
enum class EAvaTaperReferenceFrame : uint8;
#ifdef AVALANCHEMODIFIERS_AvaTaperModifier_generated_h
#error "AvaTaperModifier.generated.h already included, missing '#pragma once' in AvaTaperModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaTaperModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOffset); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execGetReferenceFrame); \
	DECLARE_FUNCTION(execSetReferenceFrame); \
	DECLARE_FUNCTION(execGetInterpolationType); \
	DECLARE_FUNCTION(execSetInterpolationType); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execSetExtent); \
	DECLARE_FUNCTION(execGetLowerExtent); \
	DECLARE_FUNCTION(execSetLowerExtent); \
	DECLARE_FUNCTION(execGetUpperExtent); \
	DECLARE_FUNCTION(execSetUpperExtent); \
	DECLARE_FUNCTION(execGetAmount); \
	DECLARE_FUNCTION(execSetAmount);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ACCESSORS \
static void GetAmount_WrapperImpl(const void* Object, void* OutValue); \
static void SetAmount_WrapperImpl(void* Object, const void* InValue); \
static void GetExtent_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtent_WrapperImpl(void* Object, const void* InValue); \
static void GetUpperExtent_WrapperImpl(const void* Object, void* OutValue); \
static void SetUpperExtent_WrapperImpl(void* Object, const void* InValue); \
static void GetLowerExtent_WrapperImpl(const void* Object, void* OutValue); \
static void SetLowerExtent_WrapperImpl(void* Object, const void* InValue); \
static void GetInterpolationType_WrapperImpl(const void* Object, void* OutValue); \
static void SetInterpolationType_WrapperImpl(void* Object, const void* InValue); \
static void GetResolution_WrapperImpl(const void* Object, void* OutValue); \
static void SetResolution_WrapperImpl(void* Object, const void* InValue); \
static void GetReferenceFrame_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceFrame_WrapperImpl(void* Object, const void* InValue); \
static void GetOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetOffset_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTaperModifier(); \
	friend struct Z_Construct_UClass_UAvaTaperModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaTaperModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaTaperModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaTaperModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTaperModifier(UAvaTaperModifier&&); \
	UAvaTaperModifier(const UAvaTaperModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaTaperModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTaperModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTaperModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaTaperModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaTaperModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h


#define FOREACH_ENUM_EAVATAPERREFERENCEFRAME(op) \
	op(EAvaTaperReferenceFrame::MeshCenter) \
	op(EAvaTaperReferenceFrame::Custom) 

enum class EAvaTaperReferenceFrame : uint8;
template<> struct TIsUEnumClass<EAvaTaperReferenceFrame> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaTaperReferenceFrame>();

#define FOREACH_ENUM_EAVATAPEREXTENT(op) \
	op(EAvaTaperExtent::WholeShape) \
	op(EAvaTaperExtent::Custom) 

enum class EAvaTaperExtent : uint8;
template<> struct TIsUEnumClass<EAvaTaperExtent> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaTaperExtent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
