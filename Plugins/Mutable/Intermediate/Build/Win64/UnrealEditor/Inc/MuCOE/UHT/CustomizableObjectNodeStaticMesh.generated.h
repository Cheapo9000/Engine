// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeStaticMesh_generated_h
#error "CustomizableObjectNodeStaticMesh.generated.h already included, missing '#pragma once' in CustomizableObjectNodeStaticMesh.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeStaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectNodeStaticMeshMaterial *************************
struct Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectNodeStaticMeshMaterial;
// ********** End ScriptStruct FCustomizableObjectNodeStaticMeshMaterial ***************************

// ********** Begin ScriptStruct FCustomizableObjectNodeStaticMeshLOD ******************************
struct Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectNodeStaticMeshLOD;
// ********** End ScriptStruct FCustomizableObjectNodeStaticMeshLOD ********************************

// ********** Begin Class UCustomizableObjectNodeStaticMesh ****************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeStaticMesh, CUSTOMIZABLEOBJECTEDITOR_API)


struct Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeStaticMesh(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeStaticMesh, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeStaticMesh) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCustomizableObjectNodeStaticMesh*>(this); }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeStaticMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeStaticMesh(UCustomizableObjectNodeStaticMesh&&) = delete; \
	UCustomizableObjectNodeStaticMesh(const UCustomizableObjectNodeStaticMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeStaticMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeStaticMesh) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeStaticMesh();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_118_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_122_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeStaticMesh;

// ********** End Class UCustomizableObjectNodeStaticMesh ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
