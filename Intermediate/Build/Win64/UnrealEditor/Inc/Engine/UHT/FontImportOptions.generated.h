// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/FontImportOptions.h"

#ifdef ENGINE_FontImportOptions_generated_h
#error "FontImportOptions.generated.h already included, missing '#pragma once' in FontImportOptions.h"
#endif
#define ENGINE_FontImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFontImportOptionsData ********************************************
struct Z_Construct_UScriptStruct_FFontImportOptionsData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFontImportOptionsData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FFontImportOptionsData;
// ********** End ScriptStruct FFontImportOptionsData **********************************************

// ********** Begin Class UFontImportOptions *******************************************************
struct Z_Construct_UClass_UFontImportOptions_Statics;
ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUFontImportOptions(); \
	friend struct ::Z_Construct_UClass_UFontImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UFontImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UFontImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UFontImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UFontImportOptions)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontImportOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFontImportOptions(UFontImportOptions&&) = delete; \
	UFontImportOptions(const UFontImportOptions&) = delete; \
	ENGINE_API virtual ~UFontImportOptions();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_181_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFontImportOptions;

// ********** End Class UFontImportOptions *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h

// ********** Begin Enum EFontImportCharacterSet ***************************************************
#define FOREACH_ENUM_EFONTIMPORTCHARACTERSET(op) \
	op(FontICS_Default) \
	op(FontICS_Ansi) \
	op(FontICS_Symbol) 

enum EFontImportCharacterSet : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFontImportCharacterSet>();
// ********** End Enum EFontImportCharacterSet *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
