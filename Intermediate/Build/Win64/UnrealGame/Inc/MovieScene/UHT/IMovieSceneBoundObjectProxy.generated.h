// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMovieSceneBoundObjectProxy.h"

#ifdef MOVIESCENE_IMovieSceneBoundObjectProxy_generated_h
#error "IMovieSceneBoundObjectProxy.generated.h already included, missing '#pragma once' in IMovieSceneBoundObjectProxy.h"
#endif
#define MOVIESCENE_IMovieSceneBoundObjectProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Interface UMovieSceneBoundObjectProxy ******************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBoundObjectProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBoundObjectProxy(UMovieSceneBoundObjectProxy&&) = delete; \
	UMovieSceneBoundObjectProxy(const UMovieSceneBoundObjectProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBoundObjectProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoundObjectProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoundObjectProxy) \
	virtual ~UMovieSceneBoundObjectProxy() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneBoundObjectProxy(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBoundObjectProxy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBoundObjectProxy)


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneBoundObjectProxy() {} \
public: \
	typedef UMovieSceneBoundObjectProxy UClassType; \
	typedef IMovieSceneBoundObjectProxy ThisClass; \
	MOVIESCENE_API static UObject* Execute_BP_GetBoundObjectForSequencer(UObject* O, UObject* ResolvedObject); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_10_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBoundObjectProxy;

// ********** End Interface UMovieSceneBoundObjectProxy ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
