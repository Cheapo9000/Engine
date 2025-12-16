// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizations/PVBoneComponent.h"

#ifdef PROCEDURALVEGETATIONEDITOR_PVBoneComponent_generated_h
#error "PVBoneComponent.generated.h already included, missing '#pragma once' in PVBoneComponent.h"
#endif
#define PROCEDURALVEGETATIONEDITOR_PVBoneComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVBoneInfo *******************************************************
struct Z_Construct_UScriptStruct_FPVBoneInfo_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVBoneInfo_Statics; \
	PROCEDURALVEGETATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FPVBoneInfo;
// ********** End ScriptStruct FPVBoneInfo *********************************************************

// ********** Begin Class UPVBoneComponent *********************************************************
struct Z_Construct_UClass_UPVBoneComponent_Statics;
PROCEDURALVEGETATIONEDITOR_API UClass* Z_Construct_UClass_UPVBoneComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVBoneComponent(); \
	friend struct ::Z_Construct_UClass_UPVBoneComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATIONEDITOR_API UClass* ::Z_Construct_UClass_UPVBoneComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVBoneComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralVegetationEditor"), Z_Construct_UClass_UPVBoneComponent_NoRegister) \
	DECLARE_SERIALIZER(UPVBoneComponent)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVBoneComponent(UPVBoneComponent&&) = delete; \
	UPVBoneComponent(const UPVBoneComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALVEGETATIONEDITOR_API, UPVBoneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVBoneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVBoneComponent) \
	PROCEDURALVEGETATIONEDITOR_API virtual ~UPVBoneComponent();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVBoneComponent;

// ********** End Class UPVBoneComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVBoneComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
