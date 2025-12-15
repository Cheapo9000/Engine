// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualizeProjectCommandlet.h"

#ifdef VIRTUALIZATIONEDITOR_VirtualizeProjectCommandlet_generated_h
#error "VirtualizeProjectCommandlet.generated.h already included, missing '#pragma once' in VirtualizeProjectCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_VirtualizeProjectCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualizeProjectCommandlet *********************************************
struct Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics;
VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UVirtualizeProjectCommandlet_NoRegister();

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualizeProjectCommandlet(); \
	friend struct ::Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALIZATIONEDITOR_API UClass* ::Z_Construct_UClass_UVirtualizeProjectCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualizeProjectCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), Z_Construct_UClass_UVirtualizeProjectCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UVirtualizeProjectCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualizeProjectCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualizeProjectCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualizeProjectCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualizeProjectCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualizeProjectCommandlet(UVirtualizeProjectCommandlet&&) = delete; \
	UVirtualizeProjectCommandlet(const UVirtualizeProjectCommandlet&) = delete; \
	NO_API virtual ~UVirtualizeProjectCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_18_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualizeProjectCommandlet;

// ********** End Class UVirtualizeProjectCommandlet ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
