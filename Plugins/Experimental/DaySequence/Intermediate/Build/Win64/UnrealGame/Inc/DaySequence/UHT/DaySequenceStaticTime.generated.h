// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceStaticTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;
#ifdef DAYSEQUENCE_DaySequenceStaticTime_generated_h
#error "DaySequenceStaticTime.generated.h already included, missing '#pragma once' in DaySequenceStaticTime.h"
#endif
#define DAYSEQUENCE_DaySequenceStaticTime_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnbindFromDaySequenceActor); \
	DECLARE_FUNCTION(execBindToDaySequenceActor);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceStaticTimeContributor(); \
	friend struct Z_Construct_UClass_UDaySequenceStaticTimeContributor_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceStaticTimeContributor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceStaticTimeContributor)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceStaticTimeContributor(UDaySequenceStaticTimeContributor&&); \
	UDaySequenceStaticTimeContributor(const UDaySequenceStaticTimeContributor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceStaticTimeContributor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceStaticTimeContributor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDaySequenceStaticTimeContributor) \
	NO_API virtual ~UDaySequenceStaticTimeContributor();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_67_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceStaticTimeContributor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceStaticTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
