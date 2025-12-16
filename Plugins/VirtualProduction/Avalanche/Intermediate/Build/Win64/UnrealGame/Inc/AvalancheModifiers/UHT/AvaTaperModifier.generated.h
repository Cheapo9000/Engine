// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaTaperModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaTaperModifier_generated_h
#error "AvaTaperModifier.generated.h already included, missing '#pragma once' in AvaTaperModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaTaperModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaTaperExtent : uint8;
enum class EAvaTaperInterpolationType : uint8;
enum class EAvaTaperReferenceFrame : uint8;

// ********** Begin Class UAvaTaperModifier ********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ACCESSORS \
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
static void GetReferenceFrame_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceFrame_WrapperImpl(void* Object, const void* InValue); \
static void GetOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetOffset_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaTaperModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaTaperModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTaperModifier(); \
	friend struct ::Z_Construct_UClass_UAvaTaperModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaTaperModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTaperModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaTaperModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaTaperModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaTaperModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTaperModifier(UAvaTaperModifier&&) = delete; \
	UAvaTaperModifier(const UAvaTaperModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaTaperModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTaperModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTaperModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaTaperModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTaperModifier;

// ********** End Class UAvaTaperModifier **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaTaperModifier_h

// ********** Begin Enum EAvaTaperReferenceFrame ***************************************************
#define FOREACH_ENUM_EAVATAPERREFERENCEFRAME(op) \
	op(EAvaTaperReferenceFrame::MeshCenter) \
	op(EAvaTaperReferenceFrame::Custom) 

enum class EAvaTaperReferenceFrame : uint8;
template<> struct TIsUEnumClass<EAvaTaperReferenceFrame> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTaperReferenceFrame>();
// ********** End Enum EAvaTaperReferenceFrame *****************************************************

// ********** Begin Enum EAvaTaperExtent ***********************************************************
#define FOREACH_ENUM_EAVATAPEREXTENT(op) \
	op(EAvaTaperExtent::WholeShape) \
	op(EAvaTaperExtent::Custom) 

enum class EAvaTaperExtent : uint8;
template<> struct TIsUEnumClass<EAvaTaperExtent> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTaperExtent>();
// ********** End Enum EAvaTaperExtent *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
