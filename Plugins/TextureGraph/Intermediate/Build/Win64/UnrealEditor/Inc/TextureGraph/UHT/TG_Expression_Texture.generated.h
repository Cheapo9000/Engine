// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Input/TG_Expression_Texture.h"

#ifdef TEXTUREGRAPH_TG_Expression_Texture_generated_h
#error "TG_Expression_Texture.generated.h already included, missing '#pragma once' in TG_Expression_Texture.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Texture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Texture ***************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_ACCESSORS \
static void SetSource_WrapperImpl(void* Object, const void* InValue); \
static void SetTexture_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UTG_Expression_Texture_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Texture_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Texture(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Texture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Texture_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Texture, UTG_Expression_InputParam, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Texture_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Texture)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Texture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Texture(UTG_Expression_Texture&&) = delete; \
	UTG_Expression_Texture(const UTG_Expression_Texture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Texture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Texture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Texture) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Texture();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_15_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_ACCESSORS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Texture;

// ********** End Class UTG_Expression_Texture *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Texture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
