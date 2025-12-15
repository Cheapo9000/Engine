// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneMaterialTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneMaterialTrack_generated_h
#error "MovieSceneMaterialTrack.generated.h already included, missing '#pragma once' in MovieSceneMaterialTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneMaterialTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FComponentMaterialInfo ********************************************
struct Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FComponentMaterialInfo;
// ********** End ScriptStruct FComponentMaterialInfo **********************************************

// ********** Begin Class UMovieSceneMaterialTrack *************************************************
struct Z_Construct_UClass_UMovieSceneMaterialTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMaterialTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMaterialTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMaterialTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMaterialTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMaterialTrack(UMovieSceneMaterialTrack&&) = delete; \
	UMovieSceneMaterialTrack(const UMovieSceneMaterialTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneMaterialTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMaterialTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMaterialTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneMaterialTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_85_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMaterialTrack;

// ********** End Class UMovieSceneMaterialTrack ***************************************************

// ********** Begin Class UMovieSceneComponentMaterialTrack ****************************************
struct Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneComponentMaterialTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneComponentMaterialTrack, UMovieSceneMaterialTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneComponentMaterialTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComponentMaterialTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneComponentMaterialTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComponentMaterialTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneComponentMaterialTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComponentMaterialTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneComponentMaterialTrack(UMovieSceneComponentMaterialTrack&&) = delete; \
	UMovieSceneComponentMaterialTrack(const UMovieSceneComponentMaterialTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneComponentMaterialTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_224_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_230_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneComponentMaterialTrack;

// ********** End Class UMovieSceneComponentMaterialTrack ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h

// ********** Begin Enum EComponentMaterialType ****************************************************
#define FOREACH_ENUM_ECOMPONENTMATERIALTYPE(op) \
	op(EComponentMaterialType::Empty) \
	op(EComponentMaterialType::IndexedMaterial) \
	op(EComponentMaterialType::OverlayMaterial) \
	op(EComponentMaterialType::DecalMaterial) \
	op(EComponentMaterialType::VolumetricCloudMaterial) 

enum class EComponentMaterialType : uint8;
template<> struct TIsUEnumClass<EComponentMaterialType> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EComponentMaterialType>();
// ********** End Enum EComponentMaterialType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
