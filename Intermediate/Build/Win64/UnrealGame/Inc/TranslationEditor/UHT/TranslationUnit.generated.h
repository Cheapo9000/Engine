// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TranslationUnit.h"

#ifdef TRANSLATIONEDITOR_TranslationUnit_generated_h
#error "TranslationUnit.generated.h already included, missing '#pragma once' in TranslationUnit.h"
#endif
#define TRANSLATIONEDITOR_TranslationUnit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTranslationChange ************************************************
struct Z_Construct_UScriptStruct_FTranslationChange_Statics;
#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTranslationChange_Statics; \
	TRANSLATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FTranslationChange;
// ********** End ScriptStruct FTranslationChange **************************************************

// ********** Begin ScriptStruct FTranslationContextInfo *******************************************
struct Z_Construct_UScriptStruct_FTranslationContextInfo_Statics;
#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTranslationContextInfo_Statics; \
	TRANSLATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FTranslationContextInfo;
// ********** End ScriptStruct FTranslationContextInfo *********************************************

// ********** Begin Class UTranslationUnit *********************************************************
struct Z_Construct_UClass_UTranslationUnit_Statics;
TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationUnit_NoRegister();

#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUTranslationUnit(); \
	friend struct ::Z_Construct_UClass_UTranslationUnit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSLATIONEDITOR_API UClass* ::Z_Construct_UClass_UTranslationUnit_NoRegister(); \
public: \
	DECLARE_CLASS2(UTranslationUnit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TranslationEditor"), Z_Construct_UClass_UTranslationUnit_NoRegister) \
	DECLARE_SERIALIZER(UTranslationUnit)


#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRANSLATIONEDITOR_API UTranslationUnit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRANSLATIONEDITOR_API, UTranslationUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationUnit); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTranslationUnit(UTranslationUnit&&) = delete; \
	UTranslationUnit(const UTranslationUnit&) = delete; \
	TRANSLATIONEDITOR_API virtual ~UTranslationUnit();


#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_61_PROLOG
#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_64_INCLASS \
	FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTranslationUnit;

// ********** End Class UTranslationUnit ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
