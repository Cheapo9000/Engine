// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/StaticImageResource.h"

#ifdef TEXTUREGRAPHENGINE_StaticImageResource_generated_h
#error "StaticImageResource.generated.h already included, missing '#pragma once' in StaticImageResource.h"
#endif
#define TEXTUREGRAPHENGINE_StaticImageResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticImageResource *****************************************************
struct Z_Construct_UClass_UStaticImageResource_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_UStaticImageResource_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticImageResource(); \
	friend struct ::Z_Construct_UClass_UStaticImageResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_UStaticImageResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticImageResource, UModelObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_UStaticImageResource_NoRegister) \
	DECLARE_SERIALIZER(UStaticImageResource)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPHENGINE_API UStaticImageResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticImageResource(UStaticImageResource&&) = delete; \
	UStaticImageResource(const UStaticImageResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, UStaticImageResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticImageResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticImageResource)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h_15_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticImageResource;

// ********** End Class UStaticImageResource *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_StaticImageResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
