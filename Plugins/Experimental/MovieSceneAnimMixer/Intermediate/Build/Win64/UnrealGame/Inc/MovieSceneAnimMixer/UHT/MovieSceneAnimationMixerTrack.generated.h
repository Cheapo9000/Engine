// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneAnimationMixerTrack.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneAnimationMixerTrack_generated_h
#error "MovieSceneAnimationMixerTrack.generated.h already included, missing '#pragma once' in MovieSceneAnimationMixerTrack.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneAnimationMixerTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneByteChannelDefaultOnly *********************************
struct Z_Construct_UScriptStruct_FMovieSceneByteChannelDefaultOnly_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneByteChannelDefaultOnly_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneByteChannel Super;


struct FMovieSceneByteChannelDefaultOnly;
// ********** End ScriptStruct FMovieSceneByteChannelDefaultOnly ***********************************

// ********** Begin Interface UMovieSceneAnimationSectionInterface *********************************
struct Z_Construct_UClass_UMovieSceneAnimationSectionInterface_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimationSectionInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENEANIMMIXER_API UMovieSceneAnimationSectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimationSectionInterface(UMovieSceneAnimationSectionInterface&&) = delete; \
	UMovieSceneAnimationSectionInterface(const UMovieSceneAnimationSectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimationSectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimationSectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimationSectionInterface) \
	virtual ~UMovieSceneAnimationSectionInterface() = default;


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneAnimationSectionInterface(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimationSectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimationSectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimationSectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimationSectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimationSectionInterface)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneAnimationSectionInterface() {} \
public: \
	typedef UMovieSceneAnimationSectionInterface UClassType; \
	typedef IMovieSceneAnimationSectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_63_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_66_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimationSectionInterface;

// ********** End Interface UMovieSceneAnimationSectionInterface ***********************************

// ********** Begin Class UMovieSceneAnimationSectionDecoration ************************************
struct Z_Construct_UClass_UMovieSceneAnimationSectionDecoration_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimationSectionDecoration_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimationSectionDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimationSectionDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimationSectionDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimationSectionDecoration, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimationSectionDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimationSectionDecoration) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAnimationSectionDecoration*>(this); }


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENEANIMMIXER_API UMovieSceneAnimationSectionDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimationSectionDecoration(UMovieSceneAnimationSectionDecoration&&) = delete; \
	UMovieSceneAnimationSectionDecoration(const UMovieSceneAnimationSectionDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimationSectionDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimationSectionDecoration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimationSectionDecoration) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimationSectionDecoration();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimationSectionDecoration;

// ********** End Class UMovieSceneAnimationSectionDecoration **************************************

// ********** Begin Class UMovieSceneAnimationBaseTransformDecoration ******************************
struct Z_Construct_UClass_UMovieSceneAnimationBaseTransformDecoration_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimationBaseTransformDecoration_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimationBaseTransformDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimationBaseTransformDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimationBaseTransformDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimationBaseTransformDecoration, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimationBaseTransformDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimationBaseTransformDecoration) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAnimationBaseTransformDecoration*>(this); }


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_117_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimationBaseTransformDecoration(UMovieSceneAnimationBaseTransformDecoration&&) = delete; \
	UMovieSceneAnimationBaseTransformDecoration(const UMovieSceneAnimationBaseTransformDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimationBaseTransformDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimationBaseTransformDecoration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimationBaseTransformDecoration) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimationBaseTransformDecoration();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_109_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_117_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimationBaseTransformDecoration;

// ********** End Class UMovieSceneAnimationBaseTransformDecoration ********************************

// ********** Begin Class UMovieSceneAnimationMixerTrack *******************************************
struct Z_Construct_UClass_UMovieSceneAnimationMixerTrack_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimationMixerTrack_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimationMixerTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimationMixerTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimationMixerTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimationMixerTrack, UMovieSceneCommonAnimationTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimationMixerTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimationMixerTrack)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_150_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimationMixerTrack(UMovieSceneAnimationMixerTrack&&) = delete; \
	UMovieSceneAnimationMixerTrack(const UMovieSceneAnimationMixerTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimationMixerTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimationMixerTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimationMixerTrack) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimationMixerTrack();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_146_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimationMixerTrack;

// ********** End Class UMovieSceneAnimationMixerTrack *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneAnimationMixerTrack_h

// ********** Begin Enum EMovieSceneRootMotionSpace ************************************************
#define FOREACH_ENUM_EMOVIESCENEROOTMOTIONSPACE(op) \
	op(EMovieSceneRootMotionSpace::AnimationSpace) \
	op(EMovieSceneRootMotionSpace::WorldSpace) 

enum class EMovieSceneRootMotionSpace : uint8;
template<> struct TIsUEnumClass<EMovieSceneRootMotionSpace> { enum { Value = true }; };
template<> MOVIESCENEANIMMIXER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneRootMotionSpace>();
// ********** End Enum EMovieSceneRootMotionSpace **************************************************

// ********** Begin Enum EMovieSceneRootMotionTransformMode ****************************************
#define FOREACH_ENUM_EMOVIESCENEROOTMOTIONTRANSFORMMODE(op) \
	op(EMovieSceneRootMotionTransformMode::Asset) \
	op(EMovieSceneRootMotionTransformMode::Offset) \
	op(EMovieSceneRootMotionTransformMode::Override) 

enum class EMovieSceneRootMotionTransformMode : uint8;
template<> struct TIsUEnumClass<EMovieSceneRootMotionTransformMode> { enum { Value = true }; };
template<> MOVIESCENEANIMMIXER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneRootMotionTransformMode>();
// ********** End Enum EMovieSceneRootMotionTransformMode ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
