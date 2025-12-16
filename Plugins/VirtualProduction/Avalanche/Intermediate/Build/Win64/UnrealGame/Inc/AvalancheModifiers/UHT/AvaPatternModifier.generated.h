// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaPatternModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaPatternModifier_generated_h
#error "AvaPatternModifier.generated.h already included, missing '#pragma once' in AvaPatternModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaPatternModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaPatternModifierTool;
class UClass;

// ********** Begin ScriptStruct FVector2b *********************************************************
struct Z_Construct_UScriptStruct_FVector2b_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVector2b_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FVector2b;
// ********** End ScriptStruct FVector2b ***********************************************************

// ********** Begin ScriptStruct FAvaPatternModifierLineLayoutOptions ******************************
struct Z_Construct_UScriptStruct_FAvaPatternModifierLineLayoutOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPatternModifierLineLayoutOptions_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaPatternModifierLineLayoutOptions;
// ********** End ScriptStruct FAvaPatternModifierLineLayoutOptions ********************************

// ********** Begin ScriptStruct FAvaPatternModifierGridLayoutOptions ******************************
struct Z_Construct_UScriptStruct_FAvaPatternModifierGridLayoutOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPatternModifierGridLayoutOptions_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaPatternModifierGridLayoutOptions;
// ********** End ScriptStruct FAvaPatternModifierGridLayoutOptions ********************************

// ********** Begin ScriptStruct FAvaPatternModifierCircleLayoutOptions ****************************
struct Z_Construct_UScriptStruct_FAvaPatternModifierCircleLayoutOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPatternModifierCircleLayoutOptions_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaPatternModifierCircleLayoutOptions;
// ********** End ScriptStruct FAvaPatternModifierCircleLayoutOptions ******************************

// ********** Begin Class UAvaPatternModifier ******************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveToolClass); \
	DECLARE_FUNCTION(execSetActiveToolClass);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_ACCESSORS \
static void GetActiveToolClass_WrapperImpl(const void* Object, void* OutValue); \
static void SetActiveToolClass_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAvaPatternModifier, AVALANCHEMODIFIERS_API)


struct Z_Construct_UClass_UAvaPatternModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaPatternModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPatternModifier(); \
	friend struct ::Z_Construct_UClass_UAvaPatternModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaPatternModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPatternModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaPatternModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaPatternModifier) \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPatternModifier(UAvaPatternModifier&&) = delete; \
	UAvaPatternModifier(const UAvaPatternModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaPatternModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPatternModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaPatternModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaPatternModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_161_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPatternModifier;

// ********** End Class UAvaPatternModifier ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h

// ********** Begin Enum EAvaPatternModifierLayout *************************************************
#define FOREACH_ENUM_EAVAPATTERNMODIFIERLAYOUT(op) \
	op(EAvaPatternModifierLayout::Line) \
	op(EAvaPatternModifierLayout::Grid) \
	op(EAvaPatternModifierLayout::Circle) 

enum class EAvaPatternModifierLayout : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierLayout> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPatternModifierLayout>();
// ********** End Enum EAvaPatternModifierLayout ***************************************************

// ********** Begin Enum EAvaPatternModifierAxis ***************************************************
#define FOREACH_ENUM_EAVAPATTERNMODIFIERAXIS(op) \
	op(EAvaPatternModifierAxis::X) \
	op(EAvaPatternModifierAxis::Y) \
	op(EAvaPatternModifierAxis::Z) 

enum class EAvaPatternModifierAxis : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierAxis> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPatternModifierAxis>();
// ********** End Enum EAvaPatternModifierAxis *****************************************************

// ********** Begin Enum EAvaPatternModifierPlane **************************************************
#define FOREACH_ENUM_EAVAPATTERNMODIFIERPLANE(op) \
	op(EAvaPatternModifierPlane::XY) \
	op(EAvaPatternModifierPlane::ZX) \
	op(EAvaPatternModifierPlane::YZ) 

enum class EAvaPatternModifierPlane : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierPlane> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPatternModifierPlane>();
// ********** End Enum EAvaPatternModifierPlane ****************************************************

// ********** Begin Enum EAvaPatternModifierLineAlignment ******************************************
#define FOREACH_ENUM_EAVAPATTERNMODIFIERLINEALIGNMENT(op) \
	op(EAvaPatternModifierLineAlignment::Start) \
	op(EAvaPatternModifierLineAlignment::Center) \
	op(EAvaPatternModifierLineAlignment::End) 

enum class EAvaPatternModifierLineAlignment : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierLineAlignment> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPatternModifierLineAlignment>();
// ********** End Enum EAvaPatternModifierLineAlignment ********************************************

// ********** Begin Enum EAvaPatternModifierGridAlignment ******************************************
#define FOREACH_ENUM_EAVAPATTERNMODIFIERGRIDALIGNMENT(op) \
	op(EAvaPatternModifierGridAlignment::TopLeft) \
	op(EAvaPatternModifierGridAlignment::TopRight) \
	op(EAvaPatternModifierGridAlignment::Center) \
	op(EAvaPatternModifierGridAlignment::BottomLeft) \
	op(EAvaPatternModifierGridAlignment::BottomRight) 

enum class EAvaPatternModifierGridAlignment : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierGridAlignment> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPatternModifierGridAlignment>();
// ********** End Enum EAvaPatternModifierGridAlignment ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
