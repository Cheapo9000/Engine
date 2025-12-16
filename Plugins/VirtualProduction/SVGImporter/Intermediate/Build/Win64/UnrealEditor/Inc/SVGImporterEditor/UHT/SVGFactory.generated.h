// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SVGFactory.h"

#ifdef SVGIMPORTEREDITOR_SVGFactory_generated_h
#error "SVGFactory.generated.h already included, missing '#pragma once' in SVGFactory.h"
#endif
#define SVGIMPORTEREDITOR_SVGFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGFactory **************************************************************
struct Z_Construct_UClass_USVGFactory_Statics;
SVGIMPORTEREDITOR_API UClass* Z_Construct_UClass_USVGFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGFactory(); \
	friend struct ::Z_Construct_UClass_USVGFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_USVGFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SVGImporterEditor"), Z_Construct_UClass_USVGFactory_NoRegister) \
	DECLARE_SERIALIZER(USVGFactory)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGFactory(USVGFactory&&) = delete; \
	USVGFactory(const USVGFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USVGFactory) \
	NO_API virtual ~USVGFactory();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGFactory;

// ********** End Class USVGFactory ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Private_Factories_SVGFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
