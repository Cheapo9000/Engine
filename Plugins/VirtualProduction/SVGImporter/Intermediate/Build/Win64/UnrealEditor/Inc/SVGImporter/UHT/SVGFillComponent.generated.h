// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralMeshes/SVGFillComponent.h"

#ifdef SVGIMPORTER_SVGFillComponent_generated_h
#error "SVGFillComponent.generated.h already included, missing '#pragma once' in SVGFillComponent.h"
#endif
#define SVGIMPORTER_SVGFillComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSVGFillShape *****************************************************
struct Z_Construct_UScriptStruct_FSVGFillShape_Statics;
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSVGFillShape_Statics; \
	SVGIMPORTER_API static class UScriptStruct* StaticStruct();


struct FSVGFillShape;
// ********** End ScriptStruct FSVGFillShape *******************************************************

// ********** Begin ScriptStruct FSVGFillMeshData **************************************************
struct Z_Construct_UScriptStruct_FSVGFillMeshData_Statics;
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSVGFillMeshData_Statics; \
	SVGIMPORTER_API static class UScriptStruct* StaticStruct();


struct FSVGFillMeshData;
// ********** End ScriptStruct FSVGFillMeshData ****************************************************

// ********** Begin Class USVGFillComponent ********************************************************
struct Z_Construct_UClass_USVGFillComponent_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_USVGFillComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGFillComponent(); \
	friend struct ::Z_Construct_UClass_USVGFillComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_USVGFillComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGFillComponent, USVGDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_USVGFillComponent_NoRegister) \
	DECLARE_SERIALIZER(USVGFillComponent)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USVGFillComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGFillComponent(USVGFillComponent&&) = delete; \
	USVGFillComponent(const USVGFillComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGFillComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGFillComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USVGFillComponent) \
	NO_API virtual ~USVGFillComponent();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_64_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGFillComponent;

// ********** End Class USVGFillComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_ProceduralMeshes_SVGFillComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
