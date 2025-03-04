// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReferenceViewer/EdGraph_ReferenceViewer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETMANAGEREDITOR_EdGraph_ReferenceViewer_generated_h
#error "EdGraph_ReferenceViewer.generated.h already included, missing '#pragma once' in EdGraph_ReferenceViewer.h"
#endif
#define ASSETMANAGEREDITOR_EdGraph_ReferenceViewer_generated_h

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraph_ReferenceViewer(); \
	friend struct Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics; \
public: \
	DECLARE_CLASS(UEdGraph_ReferenceViewer, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), NO_API) \
	DECLARE_SERIALIZER(UEdGraph_ReferenceViewer)


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraph_ReferenceViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph_ReferenceViewer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraph_ReferenceViewer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph_ReferenceViewer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraph_ReferenceViewer(UEdGraph_ReferenceViewer&&); \
	UEdGraph_ReferenceViewer(const UEdGraph_ReferenceViewer&); \
public: \
	NO_API virtual ~UEdGraph_ReferenceViewer();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_70_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_73_INCLASS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETMANAGEREDITOR_API UClass* StaticClass<class UEdGraph_ReferenceViewer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
