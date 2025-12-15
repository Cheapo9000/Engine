// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheckForVirtualizedContentCommandlet.h"

#ifdef VIRTUALIZATIONEDITOR_CheckForVirtualizedContentCommandlet_generated_h
#error "CheckForVirtualizedContentCommandlet.generated.h already included, missing '#pragma once' in CheckForVirtualizedContentCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_CheckForVirtualizedContentCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCheckForVirtualizedContentCommandlet ************************************
struct Z_Construct_UClass_UCheckForVirtualizedContentCommandlet_Statics;
VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UCheckForVirtualizedContentCommandlet_NoRegister();

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUCheckForVirtualizedContentCommandlet(); \
	friend struct ::Z_Construct_UClass_UCheckForVirtualizedContentCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALIZATIONEDITOR_API UClass* ::Z_Construct_UClass_UCheckForVirtualizedContentCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCheckForVirtualizedContentCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), Z_Construct_UClass_UCheckForVirtualizedContentCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCheckForVirtualizedContentCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckForVirtualizedContentCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckForVirtualizedContentCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckForVirtualizedContentCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckForVirtualizedContentCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCheckForVirtualizedContentCommandlet(UCheckForVirtualizedContentCommandlet&&) = delete; \
	UCheckForVirtualizedContentCommandlet(const UCheckForVirtualizedContentCommandlet&) = delete; \
	NO_API virtual ~UCheckForVirtualizedContentCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h_32_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h_36_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCheckForVirtualizedContentCommandlet;

// ********** End Class UCheckForVirtualizedContentCommandlet **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_CheckForVirtualizedContentCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
