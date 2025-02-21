// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequencePlaybackObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaSequence;
class UAvaSequencePlayer;
struct FAvaSequencePlayParams;
struct FAvaTagHandle;
#ifdef AVALANCHESEQUENCE_AvaSequencePlaybackObject_generated_h
#error "AvaSequencePlaybackObject.generated.h already included, missing '#pragma once' in AvaSequencePlaybackObject.h"
#endif
#define AVALANCHESEQUENCE_AvaSequencePlaybackObject_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasActiveSequencePlayers); \
	DECLARE_FUNCTION(execGetAllSequencePlayers); \
	DECLARE_FUNCTION(execContinueSequencesByTag); \
	DECLARE_FUNCTION(execContinueSequencesByLabels); \
	DECLARE_FUNCTION(execContinueSequencesByLabel); \
	DECLARE_FUNCTION(execPlayScheduledSequences); \
	DECLARE_FUNCTION(execPlaySequencesByTag); \
	DECLARE_FUNCTION(execPlaySequencesByLabels); \
	DECLARE_FUNCTION(execPlaySequencesBySoftReference); \
	DECLARE_FUNCTION(execPlaySequencesByLabel); \
	DECLARE_FUNCTION(execPlaySequenceBySoftReference);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESEQUENCE_API UAvaSequencePlaybackObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSequencePlaybackObject(UAvaSequencePlaybackObject&&); \
	UAvaSequencePlaybackObject(const UAvaSequencePlaybackObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESEQUENCE_API, UAvaSequencePlaybackObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequencePlaybackObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSequencePlaybackObject) \
	AVALANCHESEQUENCE_API virtual ~UAvaSequencePlaybackObject();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaSequencePlaybackObject(); \
	friend struct Z_Construct_UClass_UAvaSequencePlaybackObject_Statics; \
public: \
	DECLARE_CLASS(UAvaSequencePlaybackObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), AVALANCHESEQUENCE_API) \
	DECLARE_SERIALIZER(UAvaSequencePlaybackObject)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaSequencePlaybackObject() {} \
public: \
	typedef UAvaSequencePlaybackObject UClassType; \
	typedef IAvaSequencePlaybackObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCE_API UClass* StaticClass<class UAvaSequencePlaybackObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlaybackObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
