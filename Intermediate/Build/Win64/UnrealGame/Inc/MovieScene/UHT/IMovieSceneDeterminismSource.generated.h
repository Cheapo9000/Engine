// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compilation/IMovieSceneDeterminismSource.h"

#ifdef MOVIESCENE_IMovieSceneDeterminismSource_generated_h
#error "IMovieSceneDeterminismSource.generated.h already included, missing '#pragma once' in IMovieSceneDeterminismSource.h"
#endif
#define MOVIESCENE_IMovieSceneDeterminismSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneDeterminismData ****************************************
struct Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDeterminismData;
// ********** End ScriptStruct FMovieSceneDeterminismData ******************************************

// ********** Begin Interface UMovieSceneDeterminismSource *****************************************
struct Z_Construct_UClass_UMovieSceneDeterminismSource_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneDeterminismSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDeterminismSource(UMovieSceneDeterminismSource&&) = delete; \
	UMovieSceneDeterminismSource(const UMovieSceneDeterminismSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneDeterminismSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDeterminismSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDeterminismSource) \
	virtual ~UMovieSceneDeterminismSource() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneDeterminismSource(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDeterminismSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDeterminismSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDeterminismSource)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneDeterminismSource() {} \
public: \
	typedef UMovieSceneDeterminismSource UClassType; \
	typedef IMovieSceneDeterminismSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_34_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDeterminismSource;

// ********** End Interface UMovieSceneDeterminismSource *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
