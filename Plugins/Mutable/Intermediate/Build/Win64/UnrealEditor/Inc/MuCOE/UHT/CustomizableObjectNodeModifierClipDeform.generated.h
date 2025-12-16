// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeModifierClipDeform.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeModifierClipDeform_generated_h
#error "CustomizableObjectNodeModifierClipDeform.generated.h already included, missing '#pragma once' in CustomizableObjectNodeModifierClipDeform.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeModifierClipDeform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeModifierClipDeform ********************************
struct Z_Construct_UClass_UCustomizableObjectNodeModifierClipDeform_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeModifierClipDeform_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeModifierClipDeform(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeModifierClipDeform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeModifierClipDeform_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeModifierClipDeform, UCustomizableObjectNodeModifierBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeModifierClipDeform_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeModifierClipDeform)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeModifierClipDeform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeModifierClipDeform(UCustomizableObjectNodeModifierClipDeform&&) = delete; \
	UCustomizableObjectNodeModifierClipDeform(const UCustomizableObjectNodeModifierClipDeform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeModifierClipDeform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeModifierClipDeform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeModifierClipDeform) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeModifierClipDeform();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h_24_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeModifierClipDeform;

// ********** End Class UCustomizableObjectNodeModifierClipDeform **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierClipDeform_h

// ********** Begin Enum EShapeBindingMethod *******************************************************
#define FOREACH_ENUM_ESHAPEBINDINGMETHOD(op) \
	op(EShapeBindingMethod::ClosestProject) \
	op(EShapeBindingMethod::ClosestToSurface) \
	op(EShapeBindingMethod::NormalProject) 

enum class EShapeBindingMethod : uint32;
template<> struct TIsUEnumClass<EShapeBindingMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EShapeBindingMethod>();
// ********** End Enum EShapeBindingMethod *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
