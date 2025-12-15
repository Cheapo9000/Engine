// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrecachePayloadsCommandlet.h"

#ifdef VIRTUALIZATIONEDITOR_PrecachePayloadsCommandlet_generated_h
#error "PrecachePayloadsCommandlet.generated.h already included, missing '#pragma once' in PrecachePayloadsCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_PrecachePayloadsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPrecachePayloadsCommandlet **********************************************
struct Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics;
VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UPrecachePayloadsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPrecachePayloadsCommandlet(); \
	friend struct ::Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALIZATIONEDITOR_API UClass* ::Z_Construct_UClass_UPrecachePayloadsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrecachePayloadsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), Z_Construct_UClass_UPrecachePayloadsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UPrecachePayloadsCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrecachePayloadsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrecachePayloadsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrecachePayloadsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrecachePayloadsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrecachePayloadsCommandlet(UPrecachePayloadsCommandlet&&) = delete; \
	UPrecachePayloadsCommandlet(const UPrecachePayloadsCommandlet&) = delete; \
	NO_API virtual ~UPrecachePayloadsCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_22_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_26_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrecachePayloadsCommandlet;

// ********** End Class UPrecachePayloadsCommandlet ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
