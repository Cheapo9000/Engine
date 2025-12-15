// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/IMovieSceneEntityProvider.h"

#ifdef MOVIESCENE_IMovieSceneEntityProvider_generated_h
#error "IMovieSceneEntityProvider.generated.h already included, missing '#pragma once' in IMovieSceneEntityProvider.h"
#endif
#define MOVIESCENE_IMovieSceneEntityProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneEntityProvider ********************************************
struct Z_Construct_UClass_UMovieSceneEntityProvider_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneEntityProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEntityProvider(UMovieSceneEntityProvider&&) = delete; \
	UMovieSceneEntityProvider(const UMovieSceneEntityProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEntityProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityProvider) \
	virtual ~UMovieSceneEntityProvider() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEntityProvider(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEntityProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEntityProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEntityProvider)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEntityProvider() {} \
public: \
	typedef UMovieSceneEntityProvider UClassType; \
	typedef IMovieSceneEntityProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_111_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_115_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEntityProvider;

// ********** End Interface UMovieSceneEntityProvider **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
