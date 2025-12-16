// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReferenceViewer/ReferenceViewerSchema.h"

#ifdef ASSETMANAGEREDITOR_ReferenceViewerSchema_generated_h
#error "ReferenceViewerSchema.generated.h already included, missing '#pragma once' in ReferenceViewerSchema.h"
#endif
#define ASSETMANAGEREDITOR_ReferenceViewerSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReferenceViewerSchema ***************************************************
struct Z_Construct_UClass_UReferenceViewerSchema_Statics;
ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UReferenceViewerSchema_NoRegister();

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReferenceViewerSchema(); \
	friend struct ::Z_Construct_UClass_UReferenceViewerSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMANAGEREDITOR_API UClass* ::Z_Construct_UClass_UReferenceViewerSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UReferenceViewerSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), Z_Construct_UClass_UReferenceViewerSchema_NoRegister) \
	DECLARE_SERIALIZER(UReferenceViewerSchema)


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETMANAGEREDITOR_API UReferenceViewerSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReferenceViewerSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETMANAGEREDITOR_API, UReferenceViewerSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReferenceViewerSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReferenceViewerSchema(UReferenceViewerSchema&&) = delete; \
	UReferenceViewerSchema(const UReferenceViewerSchema&) = delete; \
	ASSETMANAGEREDITOR_API virtual ~UReferenceViewerSchema();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_15_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_18_INCLASS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReferenceViewerSchema;

// ********** End Class UReferenceViewerSchema *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
