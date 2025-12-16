// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGData.h"

#ifdef SVGIMPORTER_SVGData_generated_h
#error "SVGData.generated.h already included, missing '#pragma once' in SVGData.h"
#endif
#define SVGIMPORTER_SVGData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGData *****************************************************************
struct Z_Construct_UClass_USVGData_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_USVGData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGData(); \
	friend struct ::Z_Construct_UClass_USVGData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_USVGData_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_USVGData_NoRegister) \
	DECLARE_SERIALIZER(USVGData)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USVGData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGData(USVGData&&) = delete; \
	USVGData(const USVGData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USVGData) \
	NO_API virtual ~USVGData();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h_57_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGData;

// ********** End Class USVGData *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGData_h

// ********** Begin Enum ESVGSplineConversionQuality ***********************************************
#define FOREACH_ENUM_ESVGSPLINECONVERSIONQUALITY(op) \
	op(ESVGSplineConversionQuality::None) \
	op(ESVGSplineConversionQuality::VeryLow) \
	op(ESVGSplineConversionQuality::Low) \
	op(ESVGSplineConversionQuality::Normal) \
	op(ESVGSplineConversionQuality::Increased) \
	op(ESVGSplineConversionQuality::High) \
	op(ESVGSplineConversionQuality::VeryHigh) 

enum class ESVGSplineConversionQuality : uint8;
template<> struct TIsUEnumClass<ESVGSplineConversionQuality> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESVGSplineConversionQuality>();
// ********** End Enum ESVGSplineConversionQuality *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
