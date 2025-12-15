// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightEditorSubsystem.h"

#ifdef LEVELEDITOR_LightEditorSubsystem_generated_h
#error "LightEditorSubsystem.generated.h already included, missing '#pragma once' in LightEditorSubsystem.h"
#endif
#define LEVELEDITOR_LightEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightEditorSubsystem ****************************************************
struct Z_Construct_UClass_ULightEditorSubsystem_Statics;
LEVELEDITOR_API UClass* Z_Construct_UClass_ULightEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_ULightEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELEDITOR_API UClass* ::Z_Construct_UClass_ULightEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), Z_Construct_UClass_ULightEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULightEditorSubsystem)


#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightEditorSubsystem(ULightEditorSubsystem&&) = delete; \
	ULightEditorSubsystem(const ULightEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightEditorSubsystem) \
	NO_API virtual ~ULightEditorSubsystem();


#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_40_PROLOG
#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightEditorSubsystem;

// ********** End Class ULightEditorSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
