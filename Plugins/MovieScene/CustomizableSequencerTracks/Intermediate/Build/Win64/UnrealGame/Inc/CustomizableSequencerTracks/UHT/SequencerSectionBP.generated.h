// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerSectionBP.h"

#ifdef CUSTOMIZABLESEQUENCERTRACKS_SequencerSectionBP_generated_h
#error "SequencerSectionBP.generated.h already included, missing '#pragma once' in SequencerSectionBP.h"
#endif
#define CUSTOMIZABLESEQUENCERTRACKS_SequencerSectionBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerSectionBP ******************************************************
struct Z_Construct_UClass_USequencerSectionBP_Statics;
CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerSectionBP_NoRegister();

#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerSectionBP(); \
	friend struct ::Z_Construct_UClass_USequencerSectionBP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLESEQUENCERTRACKS_API UClass* ::Z_Construct_UClass_USequencerSectionBP_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerSectionBP, UMovieSceneSection, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableSequencerTracks"), Z_Construct_UClass_USequencerSectionBP_NoRegister) \
	DECLARE_SERIALIZER(USequencerSectionBP) \
	virtual UObject* _getUObject() const override { return const_cast<USequencerSectionBP*>(this); }


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerSectionBP(USequencerSectionBP&&) = delete; \
	USequencerSectionBP(const USequencerSectionBP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSectionBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSectionBP); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSectionBP) \
	NO_API virtual ~USequencerSectionBP();


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerSectionBP;

// ********** End Class USequencerSectionBP ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
