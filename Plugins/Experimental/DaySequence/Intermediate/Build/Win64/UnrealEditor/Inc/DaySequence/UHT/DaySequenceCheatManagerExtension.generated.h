// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceCheatManagerExtension.h"

#ifdef DAYSEQUENCE_DaySequenceCheatManagerExtension_generated_h
#error "DaySequenceCheatManagerExtension.generated.h already included, missing '#pragma once' in DaySequenceCheatManagerExtension.h"
#endif
#define DAYSEQUENCE_DaySequenceCheatManagerExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDaySequenceCheatManagerExtension ****************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTimeOfDaySpeed); \
	DECLARE_FUNCTION(execSetTimeOfDay);


struct Z_Construct_UClass_UDaySequenceCheatManagerExtension_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceCheatManagerExtension_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceCheatManagerExtension(); \
	friend struct ::Z_Construct_UClass_UDaySequenceCheatManagerExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceCheatManagerExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceCheatManagerExtension, UCheatManagerExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceCheatManagerExtension_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceCheatManagerExtension)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceCheatManagerExtension(UDaySequenceCheatManagerExtension&&) = delete; \
	UDaySequenceCheatManagerExtension(const UDaySequenceCheatManagerExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceCheatManagerExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceCheatManagerExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDaySequenceCheatManagerExtension) \
	NO_API virtual ~UDaySequenceCheatManagerExtension();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceCheatManagerExtension;

// ********** End Class UDaySequenceCheatManagerExtension ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceCheatManagerExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
