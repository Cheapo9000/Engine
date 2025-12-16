// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PVEditorSchema.h"

#ifdef PROCEDURALVEGETATIONEDITOR_PVEditorSchema_generated_h
#error "PVEditorSchema.generated.h already included, missing '#pragma once' in PVEditorSchema.h"
#endif
#define PROCEDURALVEGETATIONEDITOR_PVEditorSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVEditorSchema **********************************************************
struct Z_Construct_UClass_UPVEditorSchema_Statics;
PROCEDURALVEGETATIONEDITOR_API UClass* Z_Construct_UClass_UPVEditorSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVEditorSchema(); \
	friend struct ::Z_Construct_UClass_UPVEditorSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATIONEDITOR_API UClass* ::Z_Construct_UClass_UPVEditorSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVEditorSchema, UPCGEditorGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetationEditor"), Z_Construct_UClass_UPVEditorSchema_NoRegister) \
	DECLARE_SERIALIZER(UPVEditorSchema)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVEditorSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVEditorSchema(UPVEditorSchema&&) = delete; \
	UPVEditorSchema(const UPVEditorSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVEditorSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVEditorSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVEditorSchema) \
	NO_API virtual ~UPVEditorSchema();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVEditorSchema;

// ********** End Class UPVEditorSchema ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_PVEditorSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
