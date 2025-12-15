// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/VirtualTextureAdapter.h"

#ifdef ENGINE_VirtualTextureAdapter_generated_h
#error "VirtualTextureAdapter.generated.h already included, missing '#pragma once' in VirtualTextureAdapter.h"
#endif
#define ENGINE_VirtualTextureAdapter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualTextureAdapter ***************************************************
struct Z_Construct_UClass_UVirtualTextureAdapter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureAdapter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTextureAdapter(); \
	friend struct ::Z_Construct_UClass_UVirtualTextureAdapter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVirtualTextureAdapter_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualTextureAdapter, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVirtualTextureAdapter_NoRegister) \
	DECLARE_SERIALIZER(UVirtualTextureAdapter)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTextureAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTextureAdapter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTextureAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTextureAdapter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualTextureAdapter(UVirtualTextureAdapter&&) = delete; \
	UVirtualTextureAdapter(const UVirtualTextureAdapter&) = delete; \
	ENGINE_API virtual ~UVirtualTextureAdapter();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualTextureAdapter;

// ********** End Class UVirtualTextureAdapter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
