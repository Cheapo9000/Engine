// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compilation/MovieSceneCompiledDataManager.h"

#ifdef MOVIESCENE_MovieSceneCompiledDataManager_generated_h
#error "MovieSceneCompiledDataManager.generated.h already included, missing '#pragma once' in MovieSceneCompiledDataManager.h"
#endif
#define MOVIESCENE_MovieSceneCompiledDataManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneCompiledSequenceFlagStruct *****************************
struct Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneCompiledSequenceFlagStruct;
// ********** End ScriptStruct FMovieSceneCompiledSequenceFlagStruct *******************************

// ********** Begin Class UMovieSceneCompiledData **************************************************
struct Z_Construct_UClass_UMovieSceneCompiledData_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCompiledData(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCompiledData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneCompiledData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCompiledData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneCompiledData_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCompiledData)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCompiledData(UMovieSceneCompiledData&&) = delete; \
	UMovieSceneCompiledData(const UMovieSceneCompiledData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCompiledData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCompiledData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneCompiledData) \
	NO_API virtual ~UMovieSceneCompiledData();


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_85_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCompiledData;

// ********** End Class UMovieSceneCompiledData ****************************************************

// ********** Begin Class UMovieSceneCompiledDataManager *******************************************
struct Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCompiledDataManager(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCompiledDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCompiledDataManager)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCompiledDataManager(UMovieSceneCompiledDataManager&&) = delete; \
	UMovieSceneCompiledDataManager(const UMovieSceneCompiledDataManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCompiledDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCompiledDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneCompiledDataManager) \
	MOVIESCENE_API virtual ~UMovieSceneCompiledDataManager();


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_178_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCompiledDataManager;

// ********** End Class UMovieSceneCompiledDataManager *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h

// ********** Begin Enum EMovieSceneSequenceCompilerMask *******************************************
#define FOREACH_ENUM_EMOVIESCENESEQUENCECOMPILERMASK(op) \
	op(EMovieSceneSequenceCompilerMask::Hierarchy) \
	op(EMovieSceneSequenceCompilerMask::EvaluationTemplate) \
	op(EMovieSceneSequenceCompilerMask::EvaluationTemplateField) \
	op(EMovieSceneSequenceCompilerMask::EntityComponentField) \
	op(EMovieSceneSequenceCompilerMask::None) 

enum class EMovieSceneSequenceCompilerMask : uint8;
template<> struct TIsUEnumClass<EMovieSceneSequenceCompilerMask> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneSequenceCompilerMask>();
// ********** End Enum EMovieSceneSequenceCompilerMask *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
