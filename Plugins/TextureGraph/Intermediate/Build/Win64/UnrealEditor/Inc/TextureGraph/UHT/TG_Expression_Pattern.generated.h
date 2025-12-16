// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Procedural/TG_Expression_Pattern.h"

#ifdef TEXTUREGRAPH_TG_Expression_Pattern_generated_h
#error "TG_Expression_Pattern.generated.h already included, missing '#pragma once' in TG_Expression_Pattern.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Pattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPatternMaskPlacement_TS ******************************************
struct Z_Construct_UScriptStruct_FPatternMaskPlacement_TS_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPatternMaskPlacement_TS_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FPatternMaskPlacement_TS;
// ********** End ScriptStruct FPatternMaskPlacement_TS ********************************************

// ********** Begin ScriptStruct FPatternMaskJitter_TS *********************************************
struct Z_Construct_UScriptStruct_FPatternMaskJitter_TS_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPatternMaskJitter_TS_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FPatternMaskJitter_TS;
// ********** End ScriptStruct FPatternMaskJitter_TS ***********************************************

// ********** Begin ScriptStruct FPatternMaskBevel_TS **********************************************
struct Z_Construct_UScriptStruct_FPatternMaskBevel_TS_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPatternMaskBevel_TS_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FPatternMaskBevel_TS;
// ********** End ScriptStruct FPatternMaskBevel_TS ************************************************

// ********** Begin ScriptStruct FPatternMaskCutout_TS *********************************************
struct Z_Construct_UScriptStruct_FPatternMaskCutout_TS_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPatternMaskCutout_TS_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FPatternMaskCutout_TS;
// ********** End ScriptStruct FPatternMaskCutout_TS ***********************************************

// ********** Begin ScriptStruct FGradientDir_TS ***************************************************
struct Z_Construct_UScriptStruct_FGradientDir_TS_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_203_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGradientDir_TS_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FGradientDir_TS;
// ********** End ScriptStruct FGradientDir_TS *****************************************************

// ********** Begin Class UTG_Expression_Pattern ***************************************************
struct Z_Construct_UClass_UTG_Expression_Pattern_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Pattern_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Pattern(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Pattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Pattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Pattern, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Pattern_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Pattern)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Pattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Pattern(UTG_Expression_Pattern&&) = delete; \
	UTG_Expression_Pattern(const UTG_Expression_Pattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Pattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Pattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Pattern) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Pattern();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_229_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_232_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Pattern;

// ********** End Class UTG_Expression_Pattern *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Pattern_h

// ********** Begin Enum EPatternType **************************************************************
#define FOREACH_ENUM_EPATTERNTYPE(op) \
	op(Square) \
	op(Circle) \
	op(Checker) \
	op(Gradient) 

enum EPatternType : int;
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EPatternType>();
// ********** End Enum EPatternType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
