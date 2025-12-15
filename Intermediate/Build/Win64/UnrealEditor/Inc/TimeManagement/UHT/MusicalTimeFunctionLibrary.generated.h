// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicalTimeFunctionLibrary.h"

#ifdef TIMEMANAGEMENT_MusicalTimeFunctionLibrary_generated_h
#error "MusicalTimeFunctionLibrary.generated.h already included, missing '#pragma once' in MusicalTimeFunctionLibrary.h"
#endif
#define TIMEMANAGEMENT_MusicalTimeFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMusicalTime;

// ********** Begin Class UMusicalTimeFunctionLibrary **********************************************
#define FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBarAndBeat); \
	DECLARE_FUNCTION(execFractionalBars); \
	DECLARE_FUNCTION(execFractionalBeatsInBar); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_UMusicalTimeFunctionLibrary_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UMusicalTimeFunctionLibrary_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicalTimeFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMusicalTimeFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UMusicalTimeFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicalTimeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UMusicalTimeFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMusicalTimeFunctionLibrary)


#define FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UMusicalTimeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicalTimeFunctionLibrary(UMusicalTimeFunctionLibrary&&) = delete; \
	UMusicalTimeFunctionLibrary(const UMusicalTimeFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UMusicalTimeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicalTimeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicalTimeFunctionLibrary) \
	TIMEMANAGEMENT_API virtual ~UMusicalTimeFunctionLibrary();


#define FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_19_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicalTimeFunctionLibrary;

// ********** End Class UMusicalTimeFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_MusicalTimeFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
