// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageEditorSubsystem.h"

#ifdef FOLIAGEEDIT_FoliageEditorSubsystem_generated_h
#error "FoliageEditorSubsystem.generated.h already included, missing '#pragma once' in FoliageEditorSubsystem.h"
#endif
#define FOLIAGEEDIT_FoliageEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFoliageEditorSubsystem **************************************************
struct Z_Construct_UClass_UFoliageEditorSubsystem_Statics;
FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UFoliageEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGEEDIT_API UClass* ::Z_Construct_UClass_UFoliageEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFoliageEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), Z_Construct_UClass_UFoliageEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UFoliageEditorSubsystem)


#define FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFoliageEditorSubsystem(UFoliageEditorSubsystem&&) = delete; \
	UFoliageEditorSubsystem(const UFoliageEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFoliageEditorSubsystem) \
	NO_API virtual ~UFoliageEditorSubsystem();


#define FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h_12_PROLOG
#define FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFoliageEditorSubsystem;

// ********** End Class UFoliageEditorSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_FoliageEdit_Public_FoliageEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
