// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/DaySequenceModifierVolume.h"

#ifdef DAYSEQUENCE_DaySequenceModifierVolume_generated_h
#error "DaySequenceModifierVolume.generated.h already included, missing '#pragma once' in DaySequenceModifierVolume.h"
#endif
#define DAYSEQUENCE_DaySequenceModifierVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;

// ********** Begin Class ADaySequenceModifierVolume ***********************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ADaySequenceModifierVolume_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_ADaySequenceModifierVolume_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADaySequenceModifierVolume(); \
	friend struct ::Z_Construct_UClass_ADaySequenceModifierVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_ADaySequenceModifierVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ADaySequenceModifierVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_ADaySequenceModifierVolume_NoRegister) \
	DECLARE_SERIALIZER(ADaySequenceModifierVolume)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADaySequenceModifierVolume(ADaySequenceModifierVolume&&) = delete; \
	ADaySequenceModifierVolume(const ADaySequenceModifierVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, ADaySequenceModifierVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADaySequenceModifierVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADaySequenceModifierVolume) \
	DAYSEQUENCE_API virtual ~ADaySequenceModifierVolume();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADaySequenceModifierVolume;

// ********** End Class ADaySequenceModifierVolume *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_DaySequenceModifierVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
