// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/VirtualTextureCollection.h"

#ifdef ENGINE_VirtualTextureCollection_generated_h
#error "VirtualTextureCollection.generated.h already included, missing '#pragma once' in VirtualTextureCollection.h"
#endif
#define ENGINE_VirtualTextureCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualTextureCollection ************************************************
struct Z_Construct_UClass_UVirtualTextureCollection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureCollection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualTextureCollection(); \
	friend struct ::Z_Construct_UClass_UVirtualTextureCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVirtualTextureCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualTextureCollection, UTextureCollection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVirtualTextureCollection_NoRegister) \
	DECLARE_SERIALIZER(UVirtualTextureCollection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTextureCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualTextureCollection(UVirtualTextureCollection&&) = delete; \
	UVirtualTextureCollection(const UVirtualTextureCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTextureCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTextureCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTextureCollection) \
	ENGINE_API virtual ~UVirtualTextureCollection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h_115_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualTextureCollection;

// ********** End Class UVirtualTextureCollection **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_VirtualTextureCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
