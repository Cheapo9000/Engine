// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/MovieSceneScalingAnchors.h"

#ifdef MOVIESCENE_MovieSceneScalingAnchors_generated_h
#error "MovieSceneScalingAnchors.generated.h already included, missing '#pragma once' in MovieSceneScalingAnchors.h"
#endif
#define MOVIESCENE_MovieSceneScalingAnchors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneScalingAnchor ******************************************
struct Z_Construct_UScriptStruct_FMovieSceneScalingAnchor_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneScalingAnchor_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneScalingAnchor;
// ********** End ScriptStruct FMovieSceneScalingAnchor ********************************************

// ********** Begin Interface UMovieSceneScalingDriver *********************************************
struct Z_Construct_UClass_UMovieSceneScalingDriver_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneScalingDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScalingDriver(UMovieSceneScalingDriver&&) = delete; \
	UMovieSceneScalingDriver(const UMovieSceneScalingDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneScalingDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScalingDriver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScalingDriver) \
	virtual ~UMovieSceneScalingDriver() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneScalingDriver(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScalingDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScalingDriver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScalingDriver)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneScalingDriver() {} \
public: \
	typedef UMovieSceneScalingDriver UClassType; \
	typedef IMovieSceneScalingDriver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_36_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScalingDriver;

// ********** End Interface UMovieSceneScalingDriver ***********************************************

// ********** Begin ScriptStruct FMovieSceneAnchorsScalingGroup ************************************
struct Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneAnchorsScalingGroup;
// ********** End ScriptStruct FMovieSceneAnchorsScalingGroup **************************************

// ********** Begin Class UMovieSceneScalingAnchors ************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneScalingAnchors, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieSceneScalingAnchors_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScalingAnchors(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScalingAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScalingAnchors, UMovieScenePlayRateCurve, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScalingAnchors) \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneScalingAnchors*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScalingAnchors(UMovieSceneScalingAnchors&&) = delete; \
	UMovieSceneScalingAnchors(const UMovieSceneScalingAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneScalingAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScalingAnchors); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneScalingAnchors) \
	MOVIESCENE_API virtual ~UMovieSceneScalingAnchors();


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_89_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h_97_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScalingAnchors;

// ********** End Class UMovieSceneScalingAnchors **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
