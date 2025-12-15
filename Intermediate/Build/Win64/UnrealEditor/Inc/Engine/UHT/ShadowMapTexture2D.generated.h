// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ShadowMapTexture2D.h"

#ifdef ENGINE_ShadowMapTexture2D_generated_h
#error "ShadowMapTexture2D.generated.h already included, missing '#pragma once' in ShadowMapTexture2D.h"
#endif
#define ENGINE_ShadowMapTexture2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShadowMapTexture2D ******************************************************
struct Z_Construct_UClass_UShadowMapTexture2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUShadowMapTexture2D(); \
	friend struct ::Z_Construct_UClass_UShadowMapTexture2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UShadowMapTexture2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UShadowMapTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UShadowMapTexture2D_NoRegister) \
	DECLARE_SERIALIZER(UShadowMapTexture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UShadowMapTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShadowMapTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UShadowMapTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowMapTexture2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShadowMapTexture2D(UShadowMapTexture2D&&) = delete; \
	UShadowMapTexture2D(const UShadowMapTexture2D&) = delete; \
	ENGINE_API virtual ~UShadowMapTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShadowMapTexture2D;

// ********** End Class UShadowMapTexture2D ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
