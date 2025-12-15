// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMovieSceneMetaData.h"

#ifdef MOVIESCENE_IMovieSceneMetaData_generated_h
#error "IMovieSceneMetaData.generated.h already included, missing '#pragma once' in IMovieSceneMetaData.h"
#endif
#define MOVIESCENE_IMovieSceneMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneMetaDataInterface *****************************************
struct Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneMetaDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMetaDataInterface(UMovieSceneMetaDataInterface&&) = delete; \
	UMovieSceneMetaDataInterface(const UMovieSceneMetaDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneMetaDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMetaDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMetaDataInterface) \
	virtual ~UMovieSceneMetaDataInterface() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneMetaDataInterface(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMetaDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMetaDataInterface)


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneMetaDataInterface() {} \
public: \
	typedef UMovieSceneMetaDataInterface UClassType; \
	typedef IMovieSceneMetaDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_9_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMetaDataInterface;

// ********** End Interface UMovieSceneMetaDataInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
