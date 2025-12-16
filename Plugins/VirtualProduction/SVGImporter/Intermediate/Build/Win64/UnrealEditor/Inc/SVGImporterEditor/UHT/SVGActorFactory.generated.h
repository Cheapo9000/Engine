// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SVGActorFactory.h"

#ifdef SVGIMPORTEREDITOR_SVGActorFactory_generated_h
#error "SVGActorFactory.generated.h already included, missing '#pragma once' in SVGActorFactory.h"
#endif
#define SVGIMPORTEREDITOR_SVGActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGActorFactory *********************************************************
struct Z_Construct_UClass_USVGActorFactory_Statics;
SVGIMPORTEREDITOR_API UClass* Z_Construct_UClass_USVGActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGActorFactory(); \
	friend struct ::Z_Construct_UClass_USVGActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_USVGActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporterEditor"), Z_Construct_UClass_USVGActorFactory_NoRegister) \
	DECLARE_SERIALIZER(USVGActorFactory)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGActorFactory(USVGActorFactory&&) = delete; \
	USVGActorFactory(const USVGActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGIMPORTEREDITOR_API, USVGActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USVGActorFactory) \
	SVGIMPORTEREDITOR_API virtual ~USVGActorFactory();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGActorFactory;

// ********** End Class USVGActorFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporterEditor_Public_Factories_SVGActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
