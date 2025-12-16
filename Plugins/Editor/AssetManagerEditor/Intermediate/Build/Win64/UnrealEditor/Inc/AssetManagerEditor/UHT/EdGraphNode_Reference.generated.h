// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReferenceViewer/EdGraphNode_Reference.h"

#ifdef ASSETMANAGEREDITOR_EdGraphNode_Reference_generated_h
#error "EdGraphNode_Reference.generated.h already included, missing '#pragma once' in EdGraphNode_Reference.h"
#endif
#define ASSETMANAGEREDITOR_EdGraphNode_Reference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdGraphNode_Reference ***************************************************
struct Z_Construct_UClass_UEdGraphNode_Reference_Statics;
ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_Reference_NoRegister();

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Reference(); \
	friend struct ::Z_Construct_UClass_UEdGraphNode_Reference_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMANAGEREDITOR_API UClass* ::Z_Construct_UClass_UEdGraphNode_Reference_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphNode_Reference, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), Z_Construct_UClass_UEdGraphNode_Reference_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphNode_Reference)


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETMANAGEREDITOR_API UEdGraphNode_Reference(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Reference) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETMANAGEREDITOR_API, UEdGraphNode_Reference); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Reference); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphNode_Reference(UEdGraphNode_Reference&&) = delete; \
	UEdGraphNode_Reference(const UEdGraphNode_Reference&) = delete; \
	ASSETMANAGEREDITOR_API virtual ~UEdGraphNode_Reference();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_16_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_19_INCLASS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphNode_Reference;

// ********** End Class UEdGraphNode_Reference *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
