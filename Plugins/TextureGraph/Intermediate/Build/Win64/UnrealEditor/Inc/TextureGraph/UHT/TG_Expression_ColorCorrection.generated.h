// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Color/TG_Expression_ColorCorrection.h"

#ifdef TEXTUREGRAPH_TG_Expression_ColorCorrection_generated_h
#error "TG_Expression_ColorCorrection.generated.h already included, missing '#pragma once' in TG_Expression_ColorCorrection.h"
#endif
#define TEXTUREGRAPH_TG_Expression_ColorCorrection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_ColorCorrection *******************************************
struct Z_Construct_UClass_UTG_Expression_ColorCorrection_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_ColorCorrection_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_ColorCorrection(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_ColorCorrection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_ColorCorrection_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_ColorCorrection, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_ColorCorrection_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_ColorCorrection)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_ColorCorrection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_ColorCorrection(UTG_Expression_ColorCorrection&&) = delete; \
	UTG_Expression_ColorCorrection(const UTG_Expression_ColorCorrection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_ColorCorrection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_ColorCorrection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_ColorCorrection) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_ColorCorrection();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h_13_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_ColorCorrection;

// ********** End Class UTG_Expression_ColorCorrection *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Color_TG_Expression_ColorCorrection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
