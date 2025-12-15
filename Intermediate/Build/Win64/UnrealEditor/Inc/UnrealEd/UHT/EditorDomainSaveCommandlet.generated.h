// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/EditorDomainSaveCommandlet.h"

#ifdef UNREALED_EditorDomainSaveCommandlet_generated_h
#error "EditorDomainSaveCommandlet.generated.h already included, missing '#pragma once' in EditorDomainSaveCommandlet.h"
#endif
#define UNREALED_EditorDomainSaveCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorDomainSaveCommandlet **********************************************
struct Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorDomainSaveCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEditorDomainSaveCommandlet(); \
	friend struct ::Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorDomainSaveCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorDomainSaveCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorDomainSaveCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UEditorDomainSaveCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDomainSaveCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDomainSaveCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDomainSaveCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDomainSaveCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorDomainSaveCommandlet(UEditorDomainSaveCommandlet&&) = delete; \
	UEditorDomainSaveCommandlet(const UEditorDomainSaveCommandlet&) = delete; \
	NO_API virtual ~UEditorDomainSaveCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorDomainSaveCommandlet;

// ********** End Class UEditorDomainSaveCommandlet ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
