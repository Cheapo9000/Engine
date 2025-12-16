// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/Mix/MixInterface.h"

#ifdef TEXTUREGRAPHENGINE_MixInterface_generated_h
#error "MixInterface.generated.h already included, missing '#pragma once' in MixInterface.h"
#endif
#define TEXTUREGRAPHENGINE_MixInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMixInterface ************************************************************
struct Z_Construct_UClass_UMixInterface_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_UMixInterface_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMixInterface(); \
	friend struct ::Z_Construct_UClass_UMixInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_UMixInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMixInterface, UModelObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_UMixInterface_NoRegister) \
	DECLARE_SERIALIZER(UMixInterface)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPHENGINE_API UMixInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMixInterface(UMixInterface&&) = delete; \
	UMixInterface(const UMixInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, UMixInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMixInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMixInterface)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h_28_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMixInterface;

// ********** End Class UMixInterface **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
