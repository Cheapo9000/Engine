// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SvgDistanceFieldGenerator.h"

#ifdef SVGDISTANCEFIELD_SvgDistanceFieldGenerator_generated_h
#error "SvgDistanceFieldGenerator.generated.h already included, missing '#pragma once' in SvgDistanceFieldGenerator.h"
#endif
#define SVGDISTANCEFIELD_SvgDistanceFieldGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FSvgDistanceFieldConfiguration;

// ********** Begin Class USvgDistanceFieldGenerator ***********************************************
#define FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateTextureFromSvgFile);


struct Z_Construct_UClass_USvgDistanceFieldGenerator_Statics;
SVGDISTANCEFIELD_API UClass* Z_Construct_UClass_USvgDistanceFieldGenerator_NoRegister();

#define FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSvgDistanceFieldGenerator(); \
	friend struct ::Z_Construct_UClass_USvgDistanceFieldGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGDISTANCEFIELD_API UClass* ::Z_Construct_UClass_USvgDistanceFieldGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(USvgDistanceFieldGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SVGDistanceField"), Z_Construct_UClass_USvgDistanceFieldGenerator_NoRegister) \
	DECLARE_SERIALIZER(USvgDistanceFieldGenerator)


#define FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SVGDISTANCEFIELD_API USvgDistanceFieldGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USvgDistanceFieldGenerator(USvgDistanceFieldGenerator&&) = delete; \
	USvgDistanceFieldGenerator(const USvgDistanceFieldGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGDISTANCEFIELD_API, USvgDistanceFieldGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USvgDistanceFieldGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USvgDistanceFieldGenerator) \
	SVGDISTANCEFIELD_API virtual ~USvgDistanceFieldGenerator();


#define FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_14_PROLOG
#define FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USvgDistanceFieldGenerator;

// ********** End Class USvgDistanceFieldGenerator *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
