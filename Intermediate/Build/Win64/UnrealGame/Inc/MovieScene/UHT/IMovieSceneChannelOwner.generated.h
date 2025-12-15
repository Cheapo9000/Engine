// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/IMovieSceneChannelOwner.h"

#ifdef MOVIESCENE_IMovieSceneChannelOwner_generated_h
#error "IMovieSceneChannelOwner.generated.h already included, missing '#pragma once' in IMovieSceneChannelOwner.h"
#endif
#define MOVIESCENE_IMovieSceneChannelOwner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneChannelOwner **********************************************
struct Z_Construct_UClass_UMovieSceneChannelOwner_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneChannelOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneChannelOwner(UMovieSceneChannelOwner&&) = delete; \
	UMovieSceneChannelOwner(const UMovieSceneChannelOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneChannelOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChannelOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChannelOwner) \
	virtual ~UMovieSceneChannelOwner() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneChannelOwner(); \
	friend struct ::Z_Construct_UClass_UMovieSceneChannelOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneChannelOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneChannelOwner)


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneChannelOwner() {} \
public: \
	typedef UMovieSceneChannelOwner UClassType; \
	typedef IMovieSceneChannelOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_25_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneChannelOwner;

// ********** End Interface UMovieSceneChannelOwner ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
