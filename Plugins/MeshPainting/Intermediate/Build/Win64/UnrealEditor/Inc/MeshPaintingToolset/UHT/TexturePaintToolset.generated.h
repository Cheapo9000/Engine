// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TexturePaintToolset.h"

#ifdef MESHPAINTINGTOOLSET_TexturePaintToolset_generated_h
#error "TexturePaintToolset.generated.h already included, missing '#pragma once' in TexturePaintToolset.h"
#endif
#define MESHPAINTINGTOOLSET_TexturePaintToolset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTexturePaintToolset *****************************************************
struct Z_Construct_UClass_UTexturePaintToolset_Statics;
MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTexturePaintToolset_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexturePaintToolset(); \
	friend struct ::Z_Construct_UClass_UTexturePaintToolset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTINGTOOLSET_API UClass* ::Z_Construct_UClass_UTexturePaintToolset_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexturePaintToolset, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaintingToolset"), Z_Construct_UClass_UTexturePaintToolset_NoRegister) \
	DECLARE_SERIALIZER(UTexturePaintToolset)


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINTINGTOOLSET_API UTexturePaintToolset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexturePaintToolset(UTexturePaintToolset&&) = delete; \
	UTexturePaintToolset(const UTexturePaintToolset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINTINGTOOLSET_API, UTexturePaintToolset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexturePaintToolset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexturePaintToolset) \
	MESHPAINTINGTOOLSET_API virtual ~UTexturePaintToolset();


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_67_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexturePaintToolset;

// ********** End Class UTexturePaintToolset *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
