// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Renderers/StaticMeshes/Text3DStaticMeshesRenderer.h"

#ifdef TEXT3D_Text3DStaticMeshesRenderer_generated_h
#error "Text3DStaticMeshesRenderer.generated.h already included, missing '#pragma once' in Text3DStaticMeshesRenderer.h"
#endif
#define TEXT3D_Text3DStaticMeshesRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;

// ********** Begin Class UText3DStaticMeshesRenderer **********************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlyphMeshComponents); \
	DECLARE_FUNCTION(execGetGlyphMeshComponent); \
	DECLARE_FUNCTION(execGetGlyphCount);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execConvertToStaticMesh);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UText3DStaticMeshesRenderer_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DStaticMeshesRenderer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DStaticMeshesRenderer(); \
	friend struct ::Z_Construct_UClass_UText3DStaticMeshesRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DStaticMeshesRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DStaticMeshesRenderer, UText3DRendererBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DStaticMeshesRenderer_NoRegister) \
	DECLARE_SERIALIZER(UText3DStaticMeshesRenderer)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText3DStaticMeshesRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DStaticMeshesRenderer(UText3DStaticMeshesRenderer&&) = delete; \
	UText3DStaticMeshesRenderer(const UText3DStaticMeshesRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DStaticMeshesRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DStaticMeshesRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText3DStaticMeshesRenderer) \
	NO_API virtual ~UText3DStaticMeshesRenderer();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DStaticMeshesRenderer;

// ********** End Class UText3DStaticMeshesRenderer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_StaticMeshes_Text3DStaticMeshesRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
