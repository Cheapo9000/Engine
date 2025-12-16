// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SVGReimportFactory.h"

#ifdef SVGIMPORTEREDITOR_SVGReimportFactory_generated_h
#error "SVGReimportFactory.generated.h already included, missing '#pragma once' in SVGReimportFactory.h"
#endif
#define SVGIMPORTEREDITOR_SVGReimportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGReimportFactory ******************************************************
struct Z_Construct_UClass_USVGReimportFactory_Statics;
SVGIMPORTEREDITOR_API UClass* Z_Construct_UClass_USVGReimportFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGReimportFactory(); \
	friend struct ::Z_Construct_UClass_USVGReimportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_USVGReimportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGReimportFactory, USVGFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SVGImporterEditor"), Z_Construct_UClass_USVGReimportFactory_NoRegister) \
	DECLARE_SERIALIZER(USVGReimportFactory)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USVGReimportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGReimportFactory(USVGReimportFactory&&) = delete; \
	USVGReimportFactory(const USVGReimportFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGReimportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGReimportFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USVGReimportFactory) \
	NO_API virtual ~USVGReimportFactory();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGReimportFactory;

// ********** End Class USVGReimportFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGReimportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
