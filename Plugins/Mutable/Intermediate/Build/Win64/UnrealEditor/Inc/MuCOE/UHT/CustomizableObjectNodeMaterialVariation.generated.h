// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialVariation_generated_h
#error "CustomizableObjectNodeMaterialVariation.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMaterialVariation.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialVariation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeMaterialVariation *********************************
struct Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeMaterialVariation(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeMaterialVariation, UCustomizableObjectNodeVariation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeMaterialVariation)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeMaterialVariation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeMaterialVariation(UCustomizableObjectNodeMaterialVariation&&) = delete; \
	UCustomizableObjectNodeMaterialVariation(const UCustomizableObjectNodeMaterialVariation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeMaterialVariation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeMaterialVariation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeMaterialVariation) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeMaterialVariation();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_22_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeMaterialVariation;

// ********** End Class UCustomizableObjectNodeMaterialVariation ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h

// ********** Begin Enum ECustomizableObjectNodeMaterialVariationType ******************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTNODEMATERIALVARIATIONTYPE(op) \
	op(ECustomizableObjectNodeMaterialVariationType::Tag) \
	op(ECustomizableObjectNodeMaterialVariationType::State) 

enum class ECustomizableObjectNodeMaterialVariationType : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectNodeMaterialVariationType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectNodeMaterialVariationType>();
// ********** End Enum ECustomizableObjectNodeMaterialVariationType ********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
