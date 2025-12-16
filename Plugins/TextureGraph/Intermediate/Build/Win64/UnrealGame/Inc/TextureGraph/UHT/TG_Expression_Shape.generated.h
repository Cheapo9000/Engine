// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Procedural/TG_Expression_Shape.h"

#ifdef TEXTUREGRAPH_TG_Expression_Shape_generated_h
#error "TG_Expression_Shape.generated.h already included, missing '#pragma once' in TG_Expression_Shape.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Shape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Shape *****************************************************
struct Z_Construct_UClass_UTG_Expression_Shape_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Shape_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Shape(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Shape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Shape_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Shape, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Shape_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Shape)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Shape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Shape(UTG_Expression_Shape&&) = delete; \
	UTG_Expression_Shape(const UTG_Expression_Shape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Shape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Shape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Shape) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Shape();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h_28_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Shape;

// ********** End Class UTG_Expression_Shape *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Shape_h

// ********** Begin Enum EShapeType ****************************************************************
#define FOREACH_ENUM_ESHAPETYPE(op) \
	op(EShapeType::Circle) \
	op(EShapeType::Segment) \
	op(EShapeType::Rectangle) \
	op(EShapeType::Triangle) \
	op(EShapeType::Ellipse) \
	op(EShapeType::Pentagon) \
	op(EShapeType::Hexagon) \
	op(EShapeType::Polygon) 

enum class EShapeType : uint8;
template<> struct TIsUEnumClass<EShapeType> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EShapeType>();
// ********** End Enum EShapeType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
