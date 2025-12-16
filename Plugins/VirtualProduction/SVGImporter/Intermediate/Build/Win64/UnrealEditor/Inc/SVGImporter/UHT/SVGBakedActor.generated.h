// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGBakedActor.h"

#ifdef SVGIMPORTER_SVGBakedActor_generated_h
#error "SVGBakedActor.generated.h already included, missing '#pragma once' in SVGBakedActor.h"
#endif
#define SVGIMPORTER_SVGBakedActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSVGBakeElement ***************************************************
struct Z_Construct_UScriptStruct_FSVGBakeElement_Statics;
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSVGBakeElement_Statics; \
	SVGIMPORTER_API static class UScriptStruct* StaticStruct();


struct FSVGBakeElement;
// ********** End ScriptStruct FSVGBakeElement *****************************************************

// ********** Begin Class ASVGBakedActor ***********************************************************
struct Z_Construct_UClass_ASVGBakedActor_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_ASVGBakedActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASVGBakedActor(); \
	friend struct ::Z_Construct_UClass_ASVGBakedActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_ASVGBakedActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASVGBakedActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_ASVGBakedActor_NoRegister) \
	DECLARE_SERIALIZER(ASVGBakedActor)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASVGBakedActor(ASVGBakedActor&&) = delete; \
	ASVGBakedActor(const ASVGBakedActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGIMPORTER_API, ASVGBakedActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASVGBakedActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASVGBakedActor) \
	SVGIMPORTER_API virtual ~ASVGBakedActor();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASVGBakedActor;

// ********** End Class ASVGBakedActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGBakedActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
