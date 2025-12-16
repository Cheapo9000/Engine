// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/PolyEditPreviewMesh.h"

#ifdef MODELINGCOMPONENTS_PolyEditPreviewMesh_generated_h
#error "PolyEditPreviewMesh.generated.h already included, missing '#pragma once' in PolyEditPreviewMesh.h"
#endif
#define MODELINGCOMPONENTS_PolyEditPreviewMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPolyEditPreviewMesh *****************************************************
struct Z_Construct_UClass_UPolyEditPreviewMesh_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolyEditPreviewMesh(); \
	friend struct ::Z_Construct_UClass_UPolyEditPreviewMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UPolyEditPreviewMesh, UPreviewMesh, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister) \
	DECLARE_SERIALIZER(UPolyEditPreviewMesh)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UPolyEditPreviewMesh(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPolyEditPreviewMesh(UPolyEditPreviewMesh&&) = delete; \
	UPolyEditPreviewMesh(const UPolyEditPreviewMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UPolyEditPreviewMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyEditPreviewMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPolyEditPreviewMesh) \
	MODELINGCOMPONENTS_API virtual ~UPolyEditPreviewMesh();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPolyEditPreviewMesh;

// ********** End Class UPolyEditPreviewMesh *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
