// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CinePrestreamingRecorderSetting.h"

#ifdef CINEMATICPRESTREAMINGEDITOR_CinePrestreamingRecorderSetting_generated_h
#error "CinePrestreamingRecorderSetting.generated.h already included, missing '#pragma once' in CinePrestreamingRecorderSetting.h"
#endif
#define CINEMATICPRESTREAMINGEDITOR_CinePrestreamingRecorderSetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoviePipelineCinePrestreamingGeneratedData;

// ********** Begin ScriptStruct FMoviePipelineCinePrestreamingGeneratedData ***********************
struct Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics;
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics; \
	CINEMATICPRESTREAMINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FMoviePipelineCinePrestreamingGeneratedData;
// ********** End ScriptStruct FMoviePipelineCinePrestreamingGeneratedData *************************

// ********** Begin Delegate FOnCinePrestreamingGenerateData ***************************************
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_37_DELEGATE \
CINEMATICPRESTREAMINGEDITOR_API void FOnCinePrestreamingGenerateData_DelegateWrapper(const FMulticastScriptDelegate& OnCinePrestreamingGenerateData, const TArray<FMoviePipelineCinePrestreamingGeneratedData>& GeneratedData);


// ********** End Delegate FOnCinePrestreamingGenerateData *****************************************

// ********** Begin Class UCinePrestreamingRecorderSetting *****************************************
struct Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics;
CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingRecorderSetting_NoRegister();

#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinePrestreamingRecorderSetting(); \
	friend struct ::Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICPRESTREAMINGEDITOR_API UClass* ::Z_Construct_UClass_UCinePrestreamingRecorderSetting_NoRegister(); \
public: \
	DECLARE_CLASS2(UCinePrestreamingRecorderSetting, UMoviePipelineOutputBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicPrestreamingEditor"), Z_Construct_UClass_UCinePrestreamingRecorderSetting_NoRegister) \
	DECLARE_SERIALIZER(UCinePrestreamingRecorderSetting)


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCinePrestreamingRecorderSetting(UCinePrestreamingRecorderSetting&&) = delete; \
	UCinePrestreamingRecorderSetting(const UCinePrestreamingRecorderSetting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinePrestreamingRecorderSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinePrestreamingRecorderSetting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCinePrestreamingRecorderSetting) \
	NO_API virtual ~UCinePrestreamingRecorderSetting();


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCinePrestreamingRecorderSetting;

// ********** End Class UCinePrestreamingRecorderSetting *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
