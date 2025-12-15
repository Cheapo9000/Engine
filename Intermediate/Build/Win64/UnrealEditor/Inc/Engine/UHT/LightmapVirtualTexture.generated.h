// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/LightmapVirtualTexture.h"

#ifdef ENGINE_LightmapVirtualTexture_generated_h
#error "LightmapVirtualTexture.generated.h already included, missing '#pragma once' in LightmapVirtualTexture.h"
#endif
#define ENGINE_LightmapVirtualTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightMapVirtualTexture2D ************************************************
struct Z_Construct_UClass_ULightMapVirtualTexture2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULightMapVirtualTexture2D(); \
	friend struct ::Z_Construct_UClass_ULightMapVirtualTexture2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightMapVirtualTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister) \
	DECLARE_SERIALIZER(ULightMapVirtualTexture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightMapVirtualTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMapVirtualTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightMapVirtualTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMapVirtualTexture2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightMapVirtualTexture2D(ULightMapVirtualTexture2D&&) = delete; \
	ULightMapVirtualTexture2D(const ULightMapVirtualTexture2D&) = delete; \
	ENGINE_API virtual ~ULightMapVirtualTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightMapVirtualTexture2D;

// ********** End Class ULightMapVirtualTexture2D **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
