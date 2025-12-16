// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Renderers/DynamicMesh/Text3DDynamicMeshRenderer.h"

#ifdef TEXT3D_Text3DDynamicMeshRenderer_generated_h
#error "Text3DDynamicMeshRenderer.generated.h already included, missing '#pragma once' in Text3DDynamicMeshRenderer.h"
#endif
#define TEXT3D_Text3DDynamicMeshRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DDynamicMeshRenderer ***********************************************
struct Z_Construct_UClass_UText3DDynamicMeshRenderer_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDynamicMeshRenderer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDynamicMeshRenderer(); \
	friend struct ::Z_Construct_UClass_UText3DDynamicMeshRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDynamicMeshRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDynamicMeshRenderer, UText3DRendererBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDynamicMeshRenderer_NoRegister) \
	DECLARE_SERIALIZER(UText3DDynamicMeshRenderer)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText3DDynamicMeshRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDynamicMeshRenderer(UText3DDynamicMeshRenderer&&) = delete; \
	UText3DDynamicMeshRenderer(const UText3DDynamicMeshRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DDynamicMeshRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDynamicMeshRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText3DDynamicMeshRenderer) \
	NO_API virtual ~UText3DDynamicMeshRenderer();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDynamicMeshRenderer;

// ********** End Class UText3DDynamicMeshRenderer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Renderers_DynamicMesh_Text3DDynamicMeshRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
