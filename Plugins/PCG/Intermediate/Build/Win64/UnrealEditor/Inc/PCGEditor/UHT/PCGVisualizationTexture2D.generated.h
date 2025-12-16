// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataVisualizations/PCGVisualizationTexture2D.h"

#ifdef PCGEDITOR_PCGVisualizationTexture2D_generated_h
#error "PCGVisualizationTexture2D.generated.h already included, missing '#pragma once' in PCGVisualizationTexture2D.h"
#endif
#define PCGEDITOR_PCGVisualizationTexture2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGVisualizationTexture2D ***********************************************
struct Z_Construct_UClass_UPCGVisualizationTexture2D_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGVisualizationTexture2D_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVisualizationTexture2D(); \
	friend struct ::Z_Construct_UClass_UPCGVisualizationTexture2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGVisualizationTexture2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVisualizationTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGVisualizationTexture2D_NoRegister) \
	DECLARE_SERIALIZER(UPCGVisualizationTexture2D)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEDITOR_API UPCGVisualizationTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVisualizationTexture2D(UPCGVisualizationTexture2D&&) = delete; \
	UPCGVisualizationTexture2D(const UPCGVisualizationTexture2D&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEDITOR_API, UPCGVisualizationTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVisualizationTexture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGVisualizationTexture2D) \
	PCGEDITOR_API virtual ~UPCGVisualizationTexture2D();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVisualizationTexture2D;

// ********** End Class UPCGVisualizationTexture2D *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_DataVisualizations_PCGVisualizationTexture2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
