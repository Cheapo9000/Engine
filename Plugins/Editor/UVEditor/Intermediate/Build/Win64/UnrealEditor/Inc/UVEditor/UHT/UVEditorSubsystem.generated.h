// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorSubsystem.h"

#ifdef UVEDITOR_UVEditorSubsystem_generated_h
#error "UVEditorSubsystem.generated.h already included, missing '#pragma once' in UVEditorSubsystem.h"
#endif
#define UVEDITOR_UVEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorSubsystem *******************************************************
struct Z_Construct_UClass_UUVEditorSubsystem_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UUVEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorSubsystem)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorSubsystem(UUVEditorSubsystem&&) = delete; \
	UUVEditorSubsystem(const UUVEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditorSubsystem) \
	UVEDITOR_API virtual ~UUVEditorSubsystem();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_30_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorSubsystem;

// ********** End Class UUVEditorSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
