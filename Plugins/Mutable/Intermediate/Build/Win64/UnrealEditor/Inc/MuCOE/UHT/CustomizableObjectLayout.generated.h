// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectLayout.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectLayout_generated_h
#error "CustomizableObjectLayout.generated.h already included, missing '#pragma once' in CustomizableObjectLayout.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectLayoutBlock ************************************
struct Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectLayoutBlock;
// ********** End ScriptStruct FCustomizableObjectLayoutBlock **************************************

// ********** Begin Class UCustomizableObjectLayout ************************************************
struct Z_Construct_UClass_UCustomizableObjectLayout_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectLayout(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectLayout, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectLayout_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectLayout)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_110_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectLayout(UCustomizableObjectLayout&&) = delete; \
	UCustomizableObjectLayout(const UCustomizableObjectLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectLayout) \
	NO_API virtual ~UCustomizableObjectLayout();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_107_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectLayout;

// ********** End Class UCustomizableObjectLayout **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectLayout_h

// ********** Begin Enum ECustomizableObjectTextureLayoutPackingStrategy ***************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTTEXTURELAYOUTPACKINGSTRATEGY(op) \
	op(ECustomizableObjectTextureLayoutPackingStrategy::Resizable) \
	op(ECustomizableObjectTextureLayoutPackingStrategy::Fixed) \
	op(ECustomizableObjectTextureLayoutPackingStrategy::Overlay) 

enum class ECustomizableObjectTextureLayoutPackingStrategy : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectTextureLayoutPackingStrategy> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectTextureLayoutPackingStrategy>();
// ********** End Enum ECustomizableObjectTextureLayoutPackingStrategy *****************************

// ********** Begin Enum ECustomizableObjectLayoutAutomaticBlocksStrategy **************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTLAYOUTAUTOMATICBLOCKSSTRATEGY(op) \
	op(ECustomizableObjectLayoutAutomaticBlocksStrategy::Rectangles) \
	op(ECustomizableObjectLayoutAutomaticBlocksStrategy::UVIslands) \
	op(ECustomizableObjectLayoutAutomaticBlocksStrategy::Ignore) 

enum class ECustomizableObjectLayoutAutomaticBlocksStrategy : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectLayoutAutomaticBlocksStrategy> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectLayoutAutomaticBlocksStrategy>();
// ********** End Enum ECustomizableObjectLayoutAutomaticBlocksStrategy ****************************

// ********** Begin Enum ECustomizableObjectLayoutAutomaticBlocksMergeStrategy *********************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTLAYOUTAUTOMATICBLOCKSMERGESTRATEGY(op) \
	op(ECustomizableObjectLayoutAutomaticBlocksMergeStrategy::DontMerge) \
	op(ECustomizableObjectLayoutAutomaticBlocksMergeStrategy::MergeChildBlocks) 

enum class ECustomizableObjectLayoutAutomaticBlocksMergeStrategy : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectLayoutAutomaticBlocksMergeStrategy> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectLayoutAutomaticBlocksMergeStrategy>();
// ********** End Enum ECustomizableObjectLayoutAutomaticBlocksMergeStrategy ***********************

// ********** Begin Enum ECustomizableObjectLayoutBlockReductionMethod *****************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTLAYOUTBLOCKREDUCTIONMETHOD(op) \
	op(ECustomizableObjectLayoutBlockReductionMethod::Halve) \
	op(ECustomizableObjectLayoutBlockReductionMethod::Unitary) 

enum class ECustomizableObjectLayoutBlockReductionMethod : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectLayoutBlockReductionMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectLayoutBlockReductionMethod>();
// ********** End Enum ECustomizableObjectLayoutBlockReductionMethod *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
