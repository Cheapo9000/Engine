// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaTaperTool.h"

#ifdef AVALANCHEMODIFIERS_AvaTaperTool_generated_h
#error "AvaTaperTool.generated.h already included, missing '#pragma once' in AvaTaperTool.h"
#endif
#define AVALANCHEMODIFIERS_AvaTaperTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaTaperSettings *************************************************
struct Z_Construct_UScriptStruct_FAvaTaperSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaTaperSettings_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaTaperSettings;
// ********** End ScriptStruct FAvaTaperSettings ***************************************************

// ********** Begin Class UAvaTaperTool ************************************************************
struct Z_Construct_UClass_UAvaTaperTool_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaTaperTool_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTaperTool(); \
	friend struct ::Z_Construct_UClass_UAvaTaperTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaTaperTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTaperTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaTaperTool_NoRegister) \
	DECLARE_SERIALIZER(UAvaTaperTool)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTaperTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTaperTool(UAvaTaperTool&&) = delete; \
	UAvaTaperTool(const UAvaTaperTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTaperTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTaperTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTaperTool) \
	NO_API virtual ~UAvaTaperTool();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_56_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTaperTool;

// ********** End Class UAvaTaperTool **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h

// ********** Begin Enum EAvaTaperInterpolationType ************************************************
#define FOREACH_ENUM_EAVATAPERINTERPOLATIONTYPE(op) \
	op(EAvaTaperInterpolationType::Linear) \
	op(EAvaTaperInterpolationType::Quadratic) \
	op(EAvaTaperInterpolationType::Cubic) \
	op(EAvaTaperInterpolationType::QuadraticInverse) \
	op(EAvaTaperInterpolationType::CubicInverse) 

enum class EAvaTaperInterpolationType : uint8;
template<> struct TIsUEnumClass<EAvaTaperInterpolationType> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTaperInterpolationType>();
// ********** End Enum EAvaTaperInterpolationType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
