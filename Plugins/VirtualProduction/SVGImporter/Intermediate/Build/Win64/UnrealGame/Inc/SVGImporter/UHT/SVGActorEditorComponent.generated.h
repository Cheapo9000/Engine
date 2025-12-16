// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGActorEditorComponent.h"

#ifdef SVGIMPORTER_SVGActorEditorComponent_generated_h
#error "SVGActorEditorComponent.generated.h already included, missing '#pragma once' in SVGActorEditorComponent.h"
#endif
#define SVGIMPORTER_SVGActorEditorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGActorEditorComponent *************************************************
struct Z_Construct_UClass_USVGActorEditorComponent_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_USVGActorEditorComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGActorEditorComponent(); \
	friend struct ::Z_Construct_UClass_USVGActorEditorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_USVGActorEditorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGActorEditorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_USVGActorEditorComponent_NoRegister) \
	DECLARE_SERIALIZER(USVGActorEditorComponent)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SVGIMPORTER_API USVGActorEditorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGActorEditorComponent(USVGActorEditorComponent&&) = delete; \
	USVGActorEditorComponent(const USVGActorEditorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGIMPORTER_API, USVGActorEditorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGActorEditorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USVGActorEditorComponent) \
	SVGIMPORTER_API virtual ~USVGActorEditorComponent();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGActorEditorComponent;

// ********** End Class USVGActorEditorComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActorEditorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
