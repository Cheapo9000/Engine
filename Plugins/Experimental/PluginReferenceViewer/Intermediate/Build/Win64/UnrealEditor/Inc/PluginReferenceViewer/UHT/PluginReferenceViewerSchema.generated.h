// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PluginReferenceViewerSchema.h"

#ifdef PLUGINREFERENCEVIEWER_PluginReferenceViewerSchema_generated_h
#error "PluginReferenceViewerSchema.generated.h already included, missing '#pragma once' in PluginReferenceViewerSchema.h"
#endif
#define PLUGINREFERENCEVIEWER_PluginReferenceViewerSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPluginReferenceViewerSchema *********************************************
struct Z_Construct_UClass_UPluginReferenceViewerSchema_Statics;
PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UPluginReferenceViewerSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPluginReferenceViewerSchema(); \
	friend struct ::Z_Construct_UClass_UPluginReferenceViewerSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLUGINREFERENCEVIEWER_API UClass* ::Z_Construct_UClass_UPluginReferenceViewerSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UPluginReferenceViewerSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PluginReferenceViewer"), Z_Construct_UClass_UPluginReferenceViewerSchema_NoRegister) \
	DECLARE_SERIALIZER(UPluginReferenceViewerSchema)


#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLUGINREFERENCEVIEWER_API UPluginReferenceViewerSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginReferenceViewerSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLUGINREFERENCEVIEWER_API, UPluginReferenceViewerSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginReferenceViewerSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPluginReferenceViewerSchema(UPluginReferenceViewerSchema&&) = delete; \
	UPluginReferenceViewerSchema(const UPluginReferenceViewerSchema&) = delete; \
	PLUGINREFERENCEVIEWER_API virtual ~UPluginReferenceViewerSchema();


#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPluginReferenceViewerSchema;

// ********** End Class UPluginReferenceViewerSchema ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
