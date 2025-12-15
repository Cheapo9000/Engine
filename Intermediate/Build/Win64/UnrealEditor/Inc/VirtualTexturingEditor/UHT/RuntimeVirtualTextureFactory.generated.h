// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeVirtualTextureFactory.h"

#ifdef VIRTUALTEXTURINGEDITOR_RuntimeVirtualTextureFactory_generated_h
#error "RuntimeVirtualTextureFactory.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureFactory.h"
#endif
#define VIRTUALTEXTURINGEDITOR_RuntimeVirtualTextureFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URuntimeVirtualTextureFactory ********************************************
struct Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics;
VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_URuntimeVirtualTextureFactory_NoRegister();

#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureFactory(); \
	friend struct ::Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALTEXTURINGEDITOR_API UClass* ::Z_Construct_UClass_URuntimeVirtualTextureFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeVirtualTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualTexturingEditor"), Z_Construct_UClass_URuntimeVirtualTextureFactory_NoRegister) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureFactory)


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureFactory(URuntimeVirtualTextureFactory&&) = delete; \
	URuntimeVirtualTextureFactory(const URuntimeVirtualTextureFactory&) = delete; \
	NO_API virtual ~URuntimeVirtualTextureFactory();


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_16_PROLOG
#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_INCLASS \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeVirtualTextureFactory;

// ********** End Class URuntimeVirtualTextureFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
