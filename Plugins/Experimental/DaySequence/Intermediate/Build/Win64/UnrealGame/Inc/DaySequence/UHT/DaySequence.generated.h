// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAYSEQUENCE_DaySequence_generated_h
#error "DaySequence.generated.h already included, missing '#pragma once' in DaySequence.h"
#endif
#define DAYSEQUENCE_DaySequence_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequence(); \
	friend struct Z_Construct_UClass_UDaySequence_Statics; \
public: \
	DECLARE_CLASS(UDaySequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequence) \
	virtual UObject* _getUObject() const override { return const_cast<UDaySequence*>(this); }


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequence(UDaySequence&&); \
	UDaySequence(const UDaySequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequence) \
	NO_API virtual ~UDaySequence();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
