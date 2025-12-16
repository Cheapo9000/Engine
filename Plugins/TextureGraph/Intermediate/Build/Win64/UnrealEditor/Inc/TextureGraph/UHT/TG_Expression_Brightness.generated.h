// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Filter/TG_Expression_Brightness.h"

#ifdef TEXTUREGRAPH_TG_Expression_Brightness_generated_h
#error "TG_Expression_Brightness.generated.h already included, missing '#pragma once' in TG_Expression_Brightness.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Brightness_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Brightness ************************************************
struct Z_Construct_UClass_UTG_Expression_Brightness_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Brightness_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Brightness(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Brightness_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Brightness_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Brightness, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Brightness_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Brightness)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Brightness(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Brightness(UTG_Expression_Brightness&&) = delete; \
	UTG_Expression_Brightness(const UTG_Expression_Brightness&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Brightness); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Brightness); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Brightness) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Brightness();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h_18_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Brightness;

// ********** End Class UTG_Expression_Brightness **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Brightness_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
