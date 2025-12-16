// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeFloatArithmeticOp.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeFloatArithmeticOp_generated_h
#error "CustomizableObjectNodeFloatArithmeticOp.generated.h already included, missing '#pragma once' in CustomizableObjectNodeFloatArithmeticOp.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeFloatArithmeticOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeFloatArithmeticOp *********************************
struct Z_Construct_UClass_UCustomizableObjectNodeFloatArithmeticOp_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeFloatArithmeticOp_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeFloatArithmeticOp(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeFloatArithmeticOp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeFloatArithmeticOp_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeFloatArithmeticOp, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeFloatArithmeticOp_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeFloatArithmeticOp)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeFloatArithmeticOp(UCustomizableObjectNodeFloatArithmeticOp&&) = delete; \
	UCustomizableObjectNodeFloatArithmeticOp(const UCustomizableObjectNodeFloatArithmeticOp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeFloatArithmeticOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeFloatArithmeticOp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeFloatArithmeticOp) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeFloatArithmeticOp();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h_28_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeFloatArithmeticOp;

// ********** End Class UCustomizableObjectNodeFloatArithmeticOp ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatArithmeticOp_h

// ********** Begin Enum EFloatArithmeticOperation *************************************************
#define FOREACH_ENUM_EFLOATARITHMETICOPERATION(op) \
	op(EFloatArithmeticOperation::E_Add) \
	op(EFloatArithmeticOperation::E_Sub) \
	op(EFloatArithmeticOperation::E_Mul) \
	op(EFloatArithmeticOperation::E_Div) 

enum class EFloatArithmeticOperation : uint8;
template<> struct TIsUEnumClass<EFloatArithmeticOperation> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFloatArithmeticOperation>();
// ********** End Enum EFloatArithmeticOperation ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
