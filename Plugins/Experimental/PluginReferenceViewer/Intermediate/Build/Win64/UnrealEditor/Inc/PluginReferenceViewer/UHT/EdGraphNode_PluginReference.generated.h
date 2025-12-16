// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphNode_PluginReference.h"

#ifdef PLUGINREFERENCEVIEWER_EdGraphNode_PluginReference_generated_h
#error "EdGraphNode_PluginReference.generated.h already included, missing '#pragma once' in EdGraphNode_PluginReference.h"
#endif
#define PLUGINREFERENCEVIEWER_EdGraphNode_PluginReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdGraphNode_PluginReference *********************************************
struct Z_Construct_UClass_UEdGraphNode_PluginReference_Statics;
PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UEdGraphNode_PluginReference_NoRegister();

#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode_PluginReference(); \
	friend struct ::Z_Construct_UClass_UEdGraphNode_PluginReference_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLUGINREFERENCEVIEWER_API UClass* ::Z_Construct_UClass_UEdGraphNode_PluginReference_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphNode_PluginReference, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PluginReferenceViewer"), Z_Construct_UClass_UEdGraphNode_PluginReference_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphNode_PluginReference)


#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode_PluginReference(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_PluginReference) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode_PluginReference); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_PluginReference); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphNode_PluginReference(UEdGraphNode_PluginReference&&) = delete; \
	UEdGraphNode_PluginReference(const UEdGraphNode_PluginReference&) = delete; \
	NO_API virtual ~UEdGraphNode_PluginReference();


#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphNode_PluginReference;

// ********** End Class UEdGraphNode_PluginReference ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
