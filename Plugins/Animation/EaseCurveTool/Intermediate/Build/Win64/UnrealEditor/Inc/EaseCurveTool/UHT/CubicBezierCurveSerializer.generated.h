// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Serializers/CubicBezierCurveSerializer.h"

#ifdef EASECURVETOOL_CubicBezierCurveSerializer_generated_h
#error "CubicBezierCurveSerializer.generated.h already included, missing '#pragma once' in CubicBezierCurveSerializer.h"
#endif
#define EASECURVETOOL_CubicBezierCurveSerializer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCubicBezierCurveSerializer **********************************************
struct Z_Construct_UClass_UCubicBezierCurveSerializer_Statics;
EASECURVETOOL_API UClass* Z_Construct_UClass_UCubicBezierCurveSerializer_NoRegister();

#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCubicBezierCurveSerializer(); \
	friend struct ::Z_Construct_UClass_UCubicBezierCurveSerializer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASECURVETOOL_API UClass* ::Z_Construct_UClass_UCubicBezierCurveSerializer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCubicBezierCurveSerializer, UEaseCurveSerializer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EaseCurveTool"), Z_Construct_UClass_UCubicBezierCurveSerializer_NoRegister) \
	DECLARE_SERIALIZER(UCubicBezierCurveSerializer)


#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EASECURVETOOL_API UCubicBezierCurveSerializer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCubicBezierCurveSerializer(UCubicBezierCurveSerializer&&) = delete; \
	UCubicBezierCurveSerializer(const UCubicBezierCurveSerializer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EASECURVETOOL_API, UCubicBezierCurveSerializer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCubicBezierCurveSerializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCubicBezierCurveSerializer) \
	EASECURVETOOL_API virtual ~UCubicBezierCurveSerializer();


#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h_16_PROLOG
#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCubicBezierCurveSerializer;

// ********** End Class UCubicBezierCurveSerializer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_Serializers_CubicBezierCurveSerializer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
