// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Input/TG_Expression_Color.h"

#ifdef TEXTUREGRAPH_TG_Expression_Color_generated_h
#error "TG_Expression_Color.generated.h already included, missing '#pragma once' in TG_Expression_Color.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Color_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Color *****************************************************
struct Z_Construct_UClass_UTG_Expression_Color_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Color_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Color(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Color_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Color_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Color, UTG_Expression_InputParam, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Color_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Color)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Color(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Color(UTG_Expression_Color&&) = delete; \
	UTG_Expression_Color(const UTG_Expression_Color&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Color); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Color); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Color) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Color();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h_13_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Color;

// ********** End Class UTG_Expression_Color *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Color_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
