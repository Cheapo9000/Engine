// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceCollectionAsset.h"

#ifdef DAYSEQUENCE_DaySequenceCollectionAsset_generated_h
#error "DaySequenceCollectionAsset.generated.h already included, missing '#pragma once' in DaySequenceCollectionAsset.h"
#endif
#define DAYSEQUENCE_DaySequenceCollectionAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDaySequenceCollectionEntry ***************************************
struct Z_Construct_UScriptStruct_FDaySequenceCollectionEntry_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequenceCollectionEntry_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FDaySequenceCollectionEntry;
// ********** End ScriptStruct FDaySequenceCollectionEntry *****************************************

// ********** Begin Class UDaySequenceCollectionAsset **********************************************
struct Z_Construct_UClass_UDaySequenceCollectionAsset_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceCollectionAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceCollectionAsset(); \
	friend struct ::Z_Construct_UClass_UDaySequenceCollectionAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceCollectionAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceCollectionAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceCollectionAsset_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceCollectionAsset)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAYSEQUENCE_API UDaySequenceCollectionAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceCollectionAsset(UDaySequenceCollectionAsset&&) = delete; \
	UDaySequenceCollectionAsset(const UDaySequenceCollectionAsset&) = delete; \
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


class UDaySequenceCollectionAsset;

// ********** End Class UDaySequenceCollectionAsset ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceCollectionAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
