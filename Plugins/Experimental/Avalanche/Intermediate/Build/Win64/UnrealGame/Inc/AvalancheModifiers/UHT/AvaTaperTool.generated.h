// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaTaperTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaTaperTool_generated_h
#error "AvaTaperTool.generated.h already included, missing '#pragma once' in AvaTaperTool.h"
#endif
#define AVALANCHEMODIFIERS_AvaTaperTool_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaTaperSettings_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaTaperSettings>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTaperTool(); \
	friend struct Z_Construct_UClass_UAvaTaperTool_Statics; \
public: \
	DECLARE_CLASS(UAvaTaperTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAvaTaperTool)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTaperTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTaperTool(UAvaTaperTool&&); \
	UAvaTaperTool(const UAvaTaperTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTaperTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTaperTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTaperTool) \
	NO_API virtual ~UAvaTaperTool();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaTaperTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaTaperTool_h


#define FOREACH_ENUM_EAVATAPERINTERPOLATIONTYPE(op) \
	op(EAvaTaperInterpolationType::Linear) \
	op(EAvaTaperInterpolationType::Quadratic) \
	op(EAvaTaperInterpolationType::Cubic) \
	op(EAvaTaperInterpolationType::QuadraticInverse) \
	op(EAvaTaperInterpolationType::CubicInverse) 

enum class EAvaTaperInterpolationType : uint8;
template<> struct TIsUEnumClass<EAvaTaperInterpolationType> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaTaperInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
