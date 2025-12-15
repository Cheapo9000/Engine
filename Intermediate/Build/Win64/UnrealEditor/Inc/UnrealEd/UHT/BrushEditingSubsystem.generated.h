// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/BrushEditingSubsystem.h"

#ifdef UNREALED_BrushEditingSubsystem_generated_h
#error "BrushEditingSubsystem.generated.h already included, missing '#pragma once' in BrushEditingSubsystem.h"
#endif
#define UNREALED_BrushEditingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBrushEditingSubsystem ***************************************************
struct Z_Construct_UClass_UBrushEditingSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBrushEditingSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrushEditingSubsystem(); \
	friend struct ::Z_Construct_UClass_UBrushEditingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBrushEditingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBrushEditingSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBrushEditingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBrushEditingSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBrushEditingSubsystem(UBrushEditingSubsystem&&) = delete; \
	UBrushEditingSubsystem(const UBrushEditingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBrushEditingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushEditingSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBrushEditingSubsystem) \
	UNREALED_API virtual ~UBrushEditingSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBrushEditingSubsystem;

// ********** End Class UBrushEditingSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
