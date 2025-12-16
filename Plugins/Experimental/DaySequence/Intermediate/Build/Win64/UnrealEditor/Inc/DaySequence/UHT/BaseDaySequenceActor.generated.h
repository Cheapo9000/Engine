// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/BaseDaySequenceActor.h"

#ifdef DAYSEQUENCE_BaseDaySequenceActor_generated_h
#error "BaseDaySequenceActor.generated.h already included, missing '#pragma once' in BaseDaySequenceActor.h"
#endif
#define DAYSEQUENCE_BaseDaySequenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseDaySequenceActor ****************************************************
struct Z_Construct_UClass_ABaseDaySequenceActor_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_ABaseDaySequenceActor_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseDaySequenceActor(); \
	friend struct ::Z_Construct_UClass_ABaseDaySequenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_ABaseDaySequenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseDaySequenceActor, ADaySequenceActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_ABaseDaySequenceActor_NoRegister) \
	DECLARE_SERIALIZER(ABaseDaySequenceActor)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseDaySequenceActor(ABaseDaySequenceActor&&) = delete; \
	ABaseDaySequenceActor(const ABaseDaySequenceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, ABaseDaySequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseDaySequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseDaySequenceActor) \
	DAYSEQUENCE_API virtual ~ABaseDaySequenceActor();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseDaySequenceActor;

// ********** End Class ABaseDaySequenceActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_Actors_BaseDaySequenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
