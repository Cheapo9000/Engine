// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGShapeActor.h"

#ifdef SVGIMPORTER_SVGShapeActor_generated_h
#error "SVGShapeActor.generated.h already included, missing '#pragma once' in SVGShapeActor.h"
#endif
#define SVGIMPORTER_SVGShapeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASVGShapeActor ***********************************************************
struct Z_Construct_UClass_ASVGShapeActor_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_ASVGShapeActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASVGShapeActor(); \
	friend struct ::Z_Construct_UClass_ASVGShapeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_ASVGShapeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASVGShapeActor, ASVGDynamicMeshesContainerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_ASVGShapeActor_NoRegister) \
	DECLARE_SERIALIZER(ASVGShapeActor)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASVGShapeActor(ASVGShapeActor&&) = delete; \
	ASVGShapeActor(const ASVGShapeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASVGShapeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASVGShapeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASVGShapeActor) \
	NO_API virtual ~ASVGShapeActor();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASVGShapeActor;

// ********** End Class ASVGShapeActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGShapeActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
