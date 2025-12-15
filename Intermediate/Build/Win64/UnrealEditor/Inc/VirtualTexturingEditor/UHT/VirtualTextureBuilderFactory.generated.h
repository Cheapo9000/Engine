// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualTextureBuilderFactory.h"

#ifdef VIRTUALTEXTURINGEDITOR_VirtualTextureBuilderFactory_generated_h
#error "VirtualTextureBuilderFactory.generated.h already included, missing '#pragma once' in VirtualTextureBuilderFactory.h"
#endif
#define VIRTUALTEXTURINGEDITOR_VirtualTextureBuilderFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualTextureBuilderFactory ********************************************
struct Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics;
VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_UVirtualTextureBuilderFactory_NoRegister();

#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTextureBuilderFactory(); \
	friend struct ::Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALTEXTURINGEDITOR_API UClass* ::Z_Construct_UClass_UVirtualTextureBuilderFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualTextureBuilderFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualTexturingEditor"), Z_Construct_UClass_UVirtualTextureBuilderFactory_NoRegister) \
	DECLARE_SERIALIZER(UVirtualTextureBuilderFactory)


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualTextureBuilderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTextureBuilderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualTextureBuilderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTextureBuilderFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualTextureBuilderFactory(UVirtualTextureBuilderFactory&&) = delete; \
	UVirtualTextureBuilderFactory(const UVirtualTextureBuilderFactory&) = delete; \
	NO_API virtual ~UVirtualTextureBuilderFactory();


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualTextureBuilderFactory;

// ********** End Class UVirtualTextureBuilderFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
