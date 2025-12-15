// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ValidateVirtualizedContentCommandlet.h"

#ifdef VIRTUALIZATIONEDITOR_ValidateVirtualizedContentCommandlet_generated_h
#error "ValidateVirtualizedContentCommandlet.generated.h already included, missing '#pragma once' in ValidateVirtualizedContentCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_ValidateVirtualizedContentCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UValidateVirtualizedContentCommandlet ************************************
struct Z_Construct_UClass_UValidateVirtualizedContentCommandlet_Statics;
VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UValidateVirtualizedContentCommandlet_NoRegister();

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUValidateVirtualizedContentCommandlet(); \
	friend struct ::Z_Construct_UClass_UValidateVirtualizedContentCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALIZATIONEDITOR_API UClass* ::Z_Construct_UClass_UValidateVirtualizedContentCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UValidateVirtualizedContentCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), Z_Construct_UClass_UValidateVirtualizedContentCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UValidateVirtualizedContentCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UValidateVirtualizedContentCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UValidateVirtualizedContentCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValidateVirtualizedContentCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValidateVirtualizedContentCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UValidateVirtualizedContentCommandlet(UValidateVirtualizedContentCommandlet&&) = delete; \
	UValidateVirtualizedContentCommandlet(const UValidateVirtualizedContentCommandlet&) = delete; \
	NO_API virtual ~UValidateVirtualizedContentCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h_33_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h_38_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UValidateVirtualizedContentCommandlet;

// ********** End Class UValidateVirtualizedContentCommandlet **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_ValidateVirtualizedContentCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
