// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMovieSceneCapture.h"

#ifdef MOVIESCENECAPTURE_IMovieSceneCapture_generated_h
#error "IMovieSceneCapture.generated.h already included, missing '#pragma once' in IMovieSceneCapture.h"
#endif
#define MOVIESCENECAPTURE_IMovieSceneCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneCaptureInterface ******************************************
struct Z_Construct_UClass_UMovieSceneCaptureInterface_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCaptureInterface(UMovieSceneCaptureInterface&&) = delete; \
	UMovieSceneCaptureInterface(const UMovieSceneCaptureInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneCaptureInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureInterface) \
	virtual ~UMovieSceneCaptureInterface() = default;


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureInterface(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCaptureInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCaptureInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCaptureInterface)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneCaptureInterface() {} \
public: \
	typedef UMovieSceneCaptureInterface UClassType; \
	typedef IMovieSceneCaptureInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCaptureInterface;

// ********** End Interface UMovieSceneCaptureInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
