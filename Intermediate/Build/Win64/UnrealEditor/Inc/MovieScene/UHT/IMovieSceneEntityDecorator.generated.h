// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/IMovieSceneEntityDecorator.h"

#ifdef MOVIESCENE_IMovieSceneEntityDecorator_generated_h
#error "IMovieSceneEntityDecorator.generated.h already included, missing '#pragma once' in IMovieSceneEntityDecorator.h"
#endif
#define MOVIESCENE_IMovieSceneEntityDecorator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneEntityDecorator *******************************************
struct Z_Construct_UClass_UMovieSceneEntityDecorator_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityDecorator_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneEntityDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEntityDecorator(UMovieSceneEntityDecorator&&) = delete; \
	UMovieSceneEntityDecorator(const UMovieSceneEntityDecorator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEntityDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityDecorator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityDecorator) \
	virtual ~UMovieSceneEntityDecorator() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEntityDecorator(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEntityDecorator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEntityDecorator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEntityDecorator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEntityDecorator_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEntityDecorator)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEntityDecorator() {} \
public: \
	typedef UMovieSceneEntityDecorator UClassType; \
	typedef IMovieSceneEntityDecorator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_9_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEntityDecorator;

// ********** End Interface UMovieSceneEntityDecorator *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityDecorator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
