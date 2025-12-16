// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaSubdivideModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaSubdivideModifier_generated_h
#error "AvaSubdivideModifier.generated.h already included, missing '#pragma once' in AvaSubdivideModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaSubdivideModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaSubdivisionType : uint8;

// ********** Begin Class UAvaSubdivideModifier ****************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execGetRecomputeNormals); \
	DECLARE_FUNCTION(execSetRecomputeNormals); \
	DECLARE_FUNCTION(execGetCuts); \
	DECLARE_FUNCTION(execSetCuts);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ACCESSORS \
static void GetCuts_WrapperImpl(const void* Object, void* OutValue); \
static void SetCuts_WrapperImpl(void* Object, const void* InValue); \
static void GetbRecomputeNormals_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRecomputeNormals_WrapperImpl(void* Object, const void* InValue); \
static void GetType_WrapperImpl(const void* Object, void* OutValue); \
static void SetType_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaSubdivideModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaSubdivideModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSubdivideModifier(); \
	friend struct ::Z_Construct_UClass_UAvaSubdivideModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaSubdivideModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSubdivideModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaSubdivideModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaSubdivideModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaSubdivideModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSubdivideModifier(UAvaSubdivideModifier&&) = delete; \
	UAvaSubdivideModifier(const UAvaSubdivideModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaSubdivideModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSubdivideModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSubdivideModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaSubdivideModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSubdivideModifier;

// ********** End Class UAvaSubdivideModifier ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h

// ********** Begin Enum EAvaSubdivisionType *******************************************************
#define FOREACH_ENUM_EAVASUBDIVISIONTYPE(op) \
	op(EAvaSubdivisionType::Selective) \
	op(EAvaSubdivisionType::Uniform) \
	op(EAvaSubdivisionType::PN) 

enum class EAvaSubdivisionType : uint8;
template<> struct TIsUEnumClass<EAvaSubdivisionType> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSubdivisionType>();
// ********** End Enum EAvaSubdivisionType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
