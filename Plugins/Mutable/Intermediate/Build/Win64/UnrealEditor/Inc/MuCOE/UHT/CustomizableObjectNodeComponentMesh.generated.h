// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeComponentMesh.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeComponentMesh_generated_h
#error "CustomizableObjectNodeComponentMesh.generated.h already included, missing '#pragma once' in CustomizableObjectNodeComponentMesh.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeComponentMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBoneToRemove *****************************************************
struct Z_Construct_UScriptStruct_FBoneToRemove_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneToRemove_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FBoneToRemove;
// ********** End ScriptStruct FBoneToRemove *******************************************************

// ********** Begin ScriptStruct FLODReductionSettings *********************************************
struct Z_Construct_UScriptStruct_FLODReductionSettings_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLODReductionSettings_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FLODReductionSettings;
// ********** End ScriptStruct FLODReductionSettings ***********************************************

// ********** Begin Class UCustomizableObjectNodeComponentMesh *************************************
struct Z_Construct_UClass_UCustomizableObjectNodeComponentMesh_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeComponentMesh_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeComponentMesh(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeComponentMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeComponentMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeComponentMesh, UCustomizableObjectNodeComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeComponentMesh_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeComponentMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomizableObjectNodeComponentMesh*>(this); }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeComponentMesh(UCustomizableObjectNodeComponentMesh&&) = delete; \
	UCustomizableObjectNodeComponentMesh(const UCustomizableObjectNodeComponentMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeComponentMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeComponentMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeComponentMesh) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeComponentMesh();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_51_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeComponentMesh;

// ********** End Class UCustomizableObjectNodeComponentMesh ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMesh_h

// ********** Begin Enum ECustomizableObjectSelectionOverride **************************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTSELECTIONOVERRIDE(op) \
	op(ECustomizableObjectSelectionOverride::NoOverride) \
	op(ECustomizableObjectSelectionOverride::Disable) \
	op(ECustomizableObjectSelectionOverride::Enable) 

enum class ECustomizableObjectSelectionOverride : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectSelectionOverride> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectSelectionOverride>();
// ********** End Enum ECustomizableObjectSelectionOverride ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
