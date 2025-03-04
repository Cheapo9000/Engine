// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UVEDITOR_UVEditorSubsystem_generated_h
#error "UVEditorSubsystem.generated.h already included, missing '#pragma once' in UVEditorSubsystem.h"
#endif
#define UVEDITOR_UVEditorSubsystem_generated_h

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorSubsystem(); \
	friend struct Z_Construct_UClass_UUVEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUVEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditor"), NO_API) \
	DECLARE_SERIALIZER(UUVEditorSubsystem)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVEditorSubsystem(UUVEditorSubsystem&&); \
	UUVEditorSubsystem(const UUVEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditorSubsystem) \
	NO_API virtual ~UUVEditorSubsystem();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITOR_API UClass* StaticClass<class UUVEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
