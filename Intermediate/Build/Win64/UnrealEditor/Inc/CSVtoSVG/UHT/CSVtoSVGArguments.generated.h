// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CSVtoSVGArguments.h"

#ifdef CSVTOSVG_CSVtoSVGArguments_generated_h
#error "CSVtoSVGArguments.generated.h already included, missing '#pragma once' in CSVtoSVGArguments.h"
#endif
#define CSVTOSVG_CSVtoSVGArguments_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCSVtoSVGArugments *******************************************************
struct Z_Construct_UClass_UCSVtoSVGArugments_Statics;
CSVTOSVG_API UClass* Z_Construct_UClass_UCSVtoSVGArugments_NoRegister();

#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCSVtoSVGArugments(); \
	friend struct ::Z_Construct_UClass_UCSVtoSVGArugments_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CSVTOSVG_API UClass* ::Z_Construct_UClass_UCSVtoSVGArugments_NoRegister(); \
public: \
	DECLARE_CLASS2(UCSVtoSVGArugments, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CSVtoSVG"), Z_Construct_UClass_UCSVtoSVGArugments_NoRegister) \
	DECLARE_SERIALIZER(UCSVtoSVGArugments)


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVtoSVGArugments(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVtoSVGArugments) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVtoSVGArugments); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVtoSVGArugments); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCSVtoSVGArugments(UCSVtoSVGArugments&&) = delete; \
	UCSVtoSVGArugments(const UCSVtoSVGArugments&) = delete; \
	NO_API virtual ~UCSVtoSVGArugments();


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_29_PROLOG
#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_INCLASS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCSVtoSVGArugments;

// ********** End Class UCSVtoSVGArugments *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h

// ********** Begin Enum ESVGTheme *****************************************************************
#define FOREACH_ENUM_ESVGTHEME(op) \
	op(ESVGTheme::Dark) \
	op(ESVGTheme::Light) 

enum class ESVGTheme;
template<> struct TIsUEnumClass<ESVGTheme> { enum { Value = true }; };
template<> CSVTOSVG_NON_ATTRIBUTED_API UEnum* StaticEnum<ESVGTheme>();
// ********** End Enum ESVGTheme *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
