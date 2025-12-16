// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Text3DTypes.h"

#ifdef TEXT3D_Text3DTypes_generated_h
#error "Text3DTypes.generated.h already included, missing '#pragma once' in Text3DTypes.h"
#endif
#define TEXT3D_Text3DTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FText3DMaterialKey ************************************************
struct Z_Construct_UScriptStruct_FText3DMaterialKey_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DTypes_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FText3DMaterialKey_Statics; \
	TEXT3D_API static class UScriptStruct* StaticStruct();


struct FText3DMaterialKey;
// ********** End ScriptStruct FText3DMaterialKey **************************************************

// ********** Begin ScriptStruct FText3DMaterialGroupKey *******************************************
struct Z_Construct_UScriptStruct_FText3DMaterialGroupKey_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DTypes_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FText3DMaterialGroupKey_Statics; \
	TEXT3D_API static class UScriptStruct* StaticStruct();


struct FText3DMaterialGroupKey;
// ********** End ScriptStruct FText3DMaterialGroupKey *********************************************

// ********** Begin ScriptStruct FGlyphMeshParameters **********************************************
struct Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DTypes_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics; \
	TEXT3D_API static class UScriptStruct* StaticStruct();


struct FGlyphMeshParameters;
// ********** End ScriptStruct FGlyphMeshParameters ************************************************

// ********** Begin ScriptStruct FText3DCachedMesh *************************************************
struct Z_Construct_UScriptStruct_FText3DCachedMesh_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DTypes_h_285_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FText3DCachedMesh_Statics; \
	TEXT3D_API static class UScriptStruct* StaticStruct();


struct FText3DCachedMesh;
// ********** End ScriptStruct FText3DCachedMesh ***************************************************

// ********** Begin ScriptStruct FText3DMaterialOverride *******************************************
struct Z_Construct_UScriptStruct_FText3DMaterialOverride_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DTypes_h_311_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FText3DMaterialOverride_Statics; \
	TEXT3D_API static class UScriptStruct* StaticStruct();


struct FText3DMaterialOverride;
// ********** End ScriptStruct FText3DMaterialOverride *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DTypes_h

// ********** Begin Enum EText3DMaterialStyle ******************************************************
#define FOREACH_ENUM_ETEXT3DMATERIALSTYLE(op) \
	op(EText3DMaterialStyle::Invalid) \
	op(EText3DMaterialStyle::Solid) \
	op(EText3DMaterialStyle::Gradient) \
	op(EText3DMaterialStyle::Texture) \
	op(EText3DMaterialStyle::Custom) 

enum class EText3DMaterialStyle : uint8;
template<> struct TIsUEnumClass<EText3DMaterialStyle> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DMaterialStyle>();
// ********** End Enum EText3DMaterialStyle ********************************************************

// ********** Begin Enum EText3DMaterialBlendMode **************************************************
#define FOREACH_ENUM_ETEXT3DMATERIALBLENDMODE(op) \
	op(EText3DMaterialBlendMode::Invalid) \
	op(EText3DMaterialBlendMode::Opaque) \
	op(EText3DMaterialBlendMode::Translucent) 

enum class EText3DMaterialBlendMode : uint8;
template<> struct TIsUEnumClass<EText3DMaterialBlendMode> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DMaterialBlendMode>();
// ********** End Enum EText3DMaterialBlendMode ****************************************************

// ********** Begin Enum EText3DFontStyleFlags *****************************************************
#define FOREACH_ENUM_ETEXT3DFONTSTYLEFLAGS(op) \
	op(EText3DFontStyleFlags::None) \
	op(EText3DFontStyleFlags::Monospace) \
	op(EText3DFontStyleFlags::Bold) \
	op(EText3DFontStyleFlags::Italic) 

enum class EText3DFontStyleFlags : uint8;
template<> struct TIsUEnumClass<EText3DFontStyleFlags> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DFontStyleFlags>();
// ********** End Enum EText3DFontStyleFlags *******************************************************

// ********** Begin Enum EText3DBevelType **********************************************************
#define FOREACH_ENUM_ETEXT3DBEVELTYPE(op) \
	op(EText3DBevelType::Linear) \
	op(EText3DBevelType::HalfCircle) \
	op(EText3DBevelType::Convex) \
	op(EText3DBevelType::Concave) \
	op(EText3DBevelType::OneStep) \
	op(EText3DBevelType::TwoSteps) \
	op(EText3DBevelType::Engraved) 

enum class EText3DBevelType : uint8;
template<> struct TIsUEnumClass<EText3DBevelType> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DBevelType>();
// ********** End Enum EText3DBevelType ************************************************************

// ********** Begin Enum EText3DOutlineType ********************************************************
#define FOREACH_ENUM_ETEXT3DOUTLINETYPE(op) \
	op(EText3DOutlineType::Stroke) \
	op(EText3DOutlineType::Fill) 

enum class EText3DOutlineType : uint8;
template<> struct TIsUEnumClass<EText3DOutlineType> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DOutlineType>();
// ********** End Enum EText3DOutlineType **********************************************************

// ********** Begin Enum EText3DGroupType **********************************************************
#define FOREACH_ENUM_ETEXT3DGROUPTYPE(op) \
	op(EText3DGroupType::Front) \
	op(EText3DGroupType::Bevel) \
	op(EText3DGroupType::Extrude) \
	op(EText3DGroupType::Back) \
	op(EText3DGroupType::TypeCount) 

enum class EText3DGroupType : uint8;
template<> struct TIsUEnumClass<EText3DGroupType> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DGroupType>();
// ********** End Enum EText3DGroupType ************************************************************

// ********** Begin Enum EText3DVerticalTextAlignment **********************************************
#define FOREACH_ENUM_ETEXT3DVERTICALTEXTALIGNMENT(op) \
	op(EText3DVerticalTextAlignment::FirstLine) \
	op(EText3DVerticalTextAlignment::Top) \
	op(EText3DVerticalTextAlignment::Center) \
	op(EText3DVerticalTextAlignment::Bottom) 

enum class EText3DVerticalTextAlignment : uint8;
template<> struct TIsUEnumClass<EText3DVerticalTextAlignment> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DVerticalTextAlignment>();
// ********** End Enum EText3DVerticalTextAlignment ************************************************

// ********** Begin Enum EText3DHorizontalTextAlignment ********************************************
#define FOREACH_ENUM_ETEXT3DHORIZONTALTEXTALIGNMENT(op) \
	op(EText3DHorizontalTextAlignment::Left) \
	op(EText3DHorizontalTextAlignment::Center) \
	op(EText3DHorizontalTextAlignment::Right) 

enum class EText3DHorizontalTextAlignment : uint8;
template<> struct TIsUEnumClass<EText3DHorizontalTextAlignment> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DHorizontalTextAlignment>();
// ********** End Enum EText3DHorizontalTextAlignment **********************************************

// ********** Begin Enum EText3DMaxWidthHandling ***************************************************
#define FOREACH_ENUM_ETEXT3DMAXWIDTHHANDLING(op) \
	op(EText3DMaxWidthHandling::Scale) \
	op(EText3DMaxWidthHandling::WrapAndScale) 

enum class EText3DMaxWidthHandling : uint8;
template<> struct TIsUEnumClass<EText3DMaxWidthHandling> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DMaxWidthHandling>();
// ********** End Enum EText3DMaxWidthHandling *****************************************************

// ********** Begin Enum EText3DCharacterEffectOrder ***********************************************
#define FOREACH_ENUM_ETEXT3DCHARACTEREFFECTORDER(op) \
	op(EText3DCharacterEffectOrder::Normal) \
	op(EText3DCharacterEffectOrder::FromCenter) \
	op(EText3DCharacterEffectOrder::ToCenter) \
	op(EText3DCharacterEffectOrder::Opposite) 

enum class EText3DCharacterEffectOrder : uint8;
template<> struct TIsUEnumClass<EText3DCharacterEffectOrder> { enum { Value = true }; };
template<> TEXT3D_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DCharacterEffectOrder>();
// ********** End Enum EText3DCharacterEffectOrder *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
