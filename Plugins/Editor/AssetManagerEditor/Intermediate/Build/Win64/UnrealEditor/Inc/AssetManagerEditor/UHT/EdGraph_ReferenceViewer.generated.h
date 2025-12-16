// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReferenceViewer/EdGraph_ReferenceViewer.h"

#ifdef ASSETMANAGEREDITOR_EdGraph_ReferenceViewer_generated_h
#error "EdGraph_ReferenceViewer.generated.h already included, missing '#pragma once' in EdGraph_ReferenceViewer.h"
#endif
#define ASSETMANAGEREDITOR_EdGraph_ReferenceViewer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdGraph_ReferenceViewer *************************************************
struct Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics;
ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer_NoRegister();

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraph_ReferenceViewer(); \
	friend struct ::Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMANAGEREDITOR_API UClass* ::Z_Construct_UClass_UEdGraph_ReferenceViewer_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraph_ReferenceViewer, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), Z_Construct_UClass_UEdGraph_ReferenceViewer_NoRegister) \
	DECLARE_SERIALIZER(UEdGraph_ReferenceViewer)


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETMANAGEREDITOR_API UEdGraph_ReferenceViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph_ReferenceViewer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETMANAGEREDITOR_API, UEdGraph_ReferenceViewer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph_ReferenceViewer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraph_ReferenceViewer(UEdGraph_ReferenceViewer&&) = delete; \
	UEdGraph_ReferenceViewer(const UEdGraph_ReferenceViewer&) = delete; \
	ASSETMANAGEREDITOR_API virtual ~UEdGraph_ReferenceViewer();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_72_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_75_INCLASS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraph_ReferenceViewer;

// ********** End Class UEdGraph_ReferenceViewer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
