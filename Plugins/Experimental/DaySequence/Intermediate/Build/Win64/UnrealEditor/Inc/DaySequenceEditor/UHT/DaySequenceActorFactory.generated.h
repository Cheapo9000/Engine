// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAYSEQUENCEEDITOR_DaySequenceActorFactory_generated_h
#error "DaySequenceActorFactory.generated.h already included, missing '#pragma once' in DaySequenceActorFactory.h"
#endif
#define DAYSEQUENCEEDITOR_DaySequenceActorFactory_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDaySequenceActorFactory(); \
	friend struct Z_Construct_UClass_UDaySequenceActorFactory_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequenceEditor"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceActorFactory)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceActorFactory(UDaySequenceActorFactory&&); \
	UDaySequenceActorFactory(const UDaySequenceActorFactory&); \
public: \
	NO_API virtual ~UDaySequenceActorFactory();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCEEDITOR_API UClass* StaticClass<class UDaySequenceActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
