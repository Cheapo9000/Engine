// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerTrackBP.h"

#ifdef CUSTOMIZABLESEQUENCERTRACKS_SequencerTrackBP_generated_h
#error "SequencerTrackBP.generated.h already included, missing '#pragma once' in SequencerTrackBP.h"
#endif
#define CUSTOMIZABLESEQUENCERTRACKS_SequencerTrackBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerTrackBP ********************************************************
struct Z_Construct_UClass_USequencerTrackBP_Statics;
CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerTrackBP_NoRegister();

#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerTrackBP(); \
	friend struct ::Z_Construct_UClass_USequencerTrackBP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLESEQUENCERTRACKS_API UClass* ::Z_Construct_UClass_USequencerTrackBP_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerTrackBP, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableSequencerTracks"), Z_Construct_UClass_USequencerTrackBP_NoRegister) \
	DECLARE_SERIALIZER(USequencerTrackBP)


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerTrackBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerTrackBP(USequencerTrackBP&&) = delete; \
	USequencerTrackBP(const USequencerTrackBP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerTrackBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerTrackBP); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerTrackBP) \
	NO_API virtual ~USequencerTrackBP();


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_22_PROLOG
#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerTrackBP;

// ********** End Class USequencerTrackBP **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h

// ********** Begin Enum ECustomSequencerTrackType *************************************************
#define FOREACH_ENUM_ECUSTOMSEQUENCERTRACKTYPE(op) \
	op(ECustomSequencerTrackType::RootTrack) \
	op(ECustomSequencerTrackType::ObjectTrack) 

enum class ECustomSequencerTrackType;
template<> struct TIsUEnumClass<ECustomSequencerTrackType> { enum { Value = true }; };
template<> CUSTOMIZABLESEQUENCERTRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomSequencerTrackType>();
// ********** End Enum ECustomSequencerTrackType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
