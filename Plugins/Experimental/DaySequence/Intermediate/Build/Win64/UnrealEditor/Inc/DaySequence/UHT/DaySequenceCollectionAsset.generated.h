// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceCollectionAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAYSEQUENCE_DaySequenceCollectionAsset_generated_h
#error "DaySequenceCollectionAsset.generated.h already included, missing '#pragma once' in DaySequenceCollectionAsset.h"
#endif
#define DAYSEQUENCE_DaySequenceCollectionAsset_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDaySequenceCollectionEntry_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> DAYSEQUENCE_API UScriptStruct* StaticStruct<struct FDaySequenceCollectionEntry>();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceCollectionAsset(); \
	friend struct Z_Construct_UClass_UDaySequenceCollectionAsset_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceCollectionAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), DAYSEQUENCE_API) \
	DECLARE_SERIALIZER(UDaySequenceCollectionAsset)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAYSEQUENCE_API UDaySequenceCollectionAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceCollectionAsset(UDaySequenceCollectionAsset&&); \
	UDaySequenceCollectionAsset(const UDaySequenceCollectionAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequenceCollectionAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceCollectionAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceCollectionAsset) \
	DAYSEQUENCE_API virtual ~UDaySequenceCollectionAsset();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceCollectionAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
