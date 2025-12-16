// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGShapesParentActor.h"

#ifdef SVGIMPORTER_SVGShapesParentActor_generated_h
#error "SVGShapesParentActor.generated.h already included, missing '#pragma once' in SVGShapesParentActor.h"
#endif
#define SVGIMPORTER_SVGShapesParentActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASVGShapesParentActor ****************************************************
struct Z_Construct_UClass_ASVGShapesParentActor_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_ASVGShapesParentActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASVGShapesParentActor(); \
	friend struct ::Z_Construct_UClass_ASVGShapesParentActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_ASVGShapesParentActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASVGShapesParentActor, ASVGDynamicMeshesContainerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_ASVGShapesParentActor_NoRegister) \
	DECLARE_SERIALIZER(ASVGShapesParentActor)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SVGIMPORTER_API ASVGShapesParentActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASVGShapesParentActor(ASVGShapesParentActor&&) = delete; \
	ASVGShapesParentActor(const ASVGShapesParentActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGIMPORTER_API, ASVGShapesParentActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASVGShapesParentActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASVGShapesParentActor) \
	SVGIMPORTER_API virtual ~ASVGShapesParentActor();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASVGShapesParentActor;

// ********** End Class ASVGShapesParentActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGShapesParentActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
