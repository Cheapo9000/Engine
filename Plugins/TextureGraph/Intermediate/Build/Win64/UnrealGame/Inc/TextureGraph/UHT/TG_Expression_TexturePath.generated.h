// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Input/TG_Expression_TexturePath.h"

#ifdef TEXTUREGRAPH_TG_Expression_TexturePath_generated_h
#error "TG_Expression_TexturePath.generated.h already included, missing '#pragma once' in TG_Expression_TexturePath.h"
#endif
#define TEXTUREGRAPH_TG_Expression_TexturePath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_TexturePath ***********************************************
struct Z_Construct_UClass_UTG_Expression_TexturePath_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_TexturePath_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_TexturePath(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_TexturePath_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_TexturePath_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_TexturePath, UTG_Expression_InputParam, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_TexturePath_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_TexturePath)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_TexturePath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_TexturePath(UTG_Expression_TexturePath&&) = delete; \
	UTG_Expression_TexturePath(const UTG_Expression_TexturePath&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_TexturePath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_TexturePath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_TexturePath) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_TexturePath();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h_15_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_TexturePath;

// ********** End Class UTG_Expression_TexturePath *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TexturePath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
