// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/Mix/Mix.h"

#ifdef TEXTUREGRAPHENGINE_Mix_generated_h
#error "Mix.generated.h already included, missing '#pragma once' in Mix.h"
#endif
#define TEXTUREGRAPHENGINE_Mix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMix *********************************************************************
struct Z_Construct_UClass_UMix_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_UMix_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMix(); \
	friend struct ::Z_Construct_UClass_UMix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_UMix_NoRegister(); \
public: \
	DECLARE_CLASS2(UMix, UMixInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_UMix_NoRegister) \
	DECLARE_SERIALIZER(UMix)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPHENGINE_API UMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMix(UMix&&) = delete; \
	UMix(const UMix&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, UMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMix)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h_21_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMix;

// ********** End Class UMix ***********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_Mix_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
