// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGEngineSubsystem.h"

#ifdef SVGIMPORTER_SVGEngineSubsystem_generated_h
#error "SVGEngineSubsystem.generated.h already included, missing '#pragma once' in SVGEngineSubsystem.h"
#endif
#define SVGIMPORTER_SVGEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGEngineSubsystem ******************************************************
struct Z_Construct_UClass_USVGEngineSubsystem_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_USVGEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_USVGEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_USVGEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_USVGEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USVGEngineSubsystem)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USVGEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGEngineSubsystem(USVGEngineSubsystem&&) = delete; \
	USVGEngineSubsystem(const USVGEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USVGEngineSubsystem) \
	NO_API virtual ~USVGEngineSubsystem();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGEngineSubsystem;

// ********** End Class USVGEngineSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
