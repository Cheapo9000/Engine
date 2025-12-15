// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeVirtualTextureThumbnailRenderer.h"

#ifdef VIRTUALTEXTURINGEDITOR_RuntimeVirtualTextureThumbnailRenderer_generated_h
#error "RuntimeVirtualTextureThumbnailRenderer.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureThumbnailRenderer.h"
#endif
#define VIRTUALTEXTURINGEDITOR_RuntimeVirtualTextureThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URuntimeVirtualTextureThumbnailRenderer **********************************
struct Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics;
VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALTEXTURINGEDITOR_API UClass* ::Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeVirtualTextureThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualTexturingEditor"), Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureThumbnailRenderer)


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIRTUALTEXTURINGEDITOR_API URuntimeVirtualTextureThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIRTUALTEXTURINGEDITOR_API, URuntimeVirtualTextureThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureThumbnailRenderer(URuntimeVirtualTextureThumbnailRenderer&&) = delete; \
	URuntimeVirtualTextureThumbnailRenderer(const URuntimeVirtualTextureThumbnailRenderer&) = delete; \
	VIRTUALTEXTURINGEDITOR_API virtual ~URuntimeVirtualTextureThumbnailRenderer();


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_15_PROLOG
#define FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_18_INCLASS \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeVirtualTextureThumbnailRenderer;

// ********** End Class URuntimeVirtualTextureThumbnailRenderer ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
