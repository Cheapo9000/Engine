// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReferenceViewer/ReferenceViewerSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETMANAGEREDITOR_ReferenceViewerSchema_generated_h
#error "ReferenceViewerSchema.generated.h already included, missing '#pragma once' in ReferenceViewerSchema.h"
#endif
#define ASSETMANAGEREDITOR_ReferenceViewerSchema_generated_h

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUReferenceViewerSchema(); \
	friend struct Z_Construct_UClass_UReferenceViewerSchema_Statics; \
public: \
	DECLARE_CLASS(UReferenceViewerSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), ASSETMANAGEREDITOR_API) \
	DECLARE_SERIALIZER(UReferenceViewerSchema)


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETMANAGEREDITOR_API UReferenceViewerSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReferenceViewerSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETMANAGEREDITOR_API, UReferenceViewerSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReferenceViewerSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReferenceViewerSchema(UReferenceViewerSchema&&); \
	UReferenceViewerSchema(const UReferenceViewerSchema&); \
public: \
	ASSETMANAGEREDITOR_API virtual ~UReferenceViewerSchema();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_14_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_17_INCLASS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETMANAGEREDITOR_API UClass* StaticClass<class UReferenceViewerSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
