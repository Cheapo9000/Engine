// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeManagementBlueprintLibrary.h"

#ifdef TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h
#error "TimeManagementBlueprintLibrary.generated.h already included, missing '#pragma once' in TimeManagementBlueprintLibrary.h"
#endif
#define TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FQualifiedFrameTime;
struct FTimecode;

// ********** Begin Class UTimeManagementBlueprintLibrary ******************************************
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimecodeFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger); \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger); \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger); \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execSnapFrameTimeToRate); \
	DECLARE_FUNCTION(execTransformTime); \
	DECLARE_FUNCTION(execIsValid_MultipleOf); \
	DECLARE_FUNCTION(execIsValid_Framerate); \
	DECLARE_FUNCTION(execConv_TimecodeToString); \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate); \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds); \
	DECLARE_FUNCTION(execConv_FrameRateToInterval); \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds);


struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&) = delete; \
	UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UTimeManagementBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary) \
	TIMEMANAGEMENT_API virtual ~UTimeManagementBlueprintLibrary();


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_26_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeManagementBlueprintLibrary;

// ********** End Class UTimeManagementBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
