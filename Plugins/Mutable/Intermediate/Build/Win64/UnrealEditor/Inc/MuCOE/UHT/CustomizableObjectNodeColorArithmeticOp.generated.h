// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeColorArithmeticOp.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeColorArithmeticOp_generated_h
#error "CustomizableObjectNodeColorArithmeticOp.generated.h already included, missing '#pragma once' in CustomizableObjectNodeColorArithmeticOp.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeColorArithmeticOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeColorArithmeticOp *********************************
struct Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeColorArithmeticOp(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeColorArithmeticOp, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeColorArithmeticOp)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeColorArithmeticOp(UCustomizableObjectNodeColorArithmeticOp&&) = delete; \
	UCustomizableObjectNodeColorArithmeticOp(const UCustomizableObjectNodeColorArithmeticOp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeColorArithmeticOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeColorArithmeticOp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeColorArithmeticOp) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeColorArithmeticOp();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_28_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeColorArithmeticOp;

// ********** End Class UCustomizableObjectNodeColorArithmeticOp ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h

// ********** Begin Enum EColorArithmeticOperation *************************************************
#define FOREACH_ENUM_ECOLORARITHMETICOPERATION(op) \
	op(EColorArithmeticOperation::E_Add) \
	op(EColorArithmeticOperation::E_Sub) \
	op(EColorArithmeticOperation::E_Mul) \
	op(EColorArithmeticOperation::E_Div) 

enum class EColorArithmeticOperation : uint8;
template<> struct TIsUEnumClass<EColorArithmeticOperation> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorArithmeticOperation>();
// ********** End Enum EColorArithmeticOperation ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
