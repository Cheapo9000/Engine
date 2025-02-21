// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementBases/FollowSplineMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;
struct FSplineOffsetRangeInput;
#ifdef MOVEREXAMPLES_FollowSplineMode_generated_h
#error "FollowSplineMode.generated.h already included, missing '#pragma once' in FollowSplineMode.h"
#endif
#define MOVEREXAMPLES_FollowSplineMode_generated_h

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct();


template<> MOVEREXAMPLES_API UScriptStruct* StaticStruct<struct FSplineOffsetRangeInput>();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetControlSpline); \
	DECLARE_FUNCTION(execOnSimulationTick); \
	DECLARE_FUNCTION(execOnGenerateMove);


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUFollowSplineMode(); \
	friend struct Z_Construct_UClass_UFollowSplineMode_Statics; \
public: \
	DECLARE_CLASS(UFollowSplineMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverExamples"), NO_API) \
	DECLARE_SERIALIZER(UFollowSplineMode)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFollowSplineMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFollowSplineMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFollowSplineMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFollowSplineMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFollowSplineMode(UFollowSplineMode&&); \
	UFollowSplineMode(const UFollowSplineMode&); \
public: \
	NO_API virtual ~UFollowSplineMode();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_52_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_INCLASS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEREXAMPLES_API UClass* StaticClass<class UFollowSplineMode>();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFollowSplineState_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> MOVEREXAMPLES_API UScriptStruct* StaticStruct<struct FFollowSplineState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h


#define FOREACH_ENUM_ESPLINEOFFSETUNIT(op) \
	op(ESplineOffsetUnit::Percentage) \
	op(ESplineOffsetUnit::DurationAbsoluteSeconds) \
	op(ESplineOffsetUnit::DistanceAbsolute) 

enum class ESplineOffsetUnit : uint8;
template<> struct TIsUEnumClass<ESplineOffsetUnit> { enum { Value = true }; };
template<> MOVEREXAMPLES_API UEnum* StaticEnum<ESplineOffsetUnit>();

#define FOREACH_ENUM_EFOLLOWSPLINEROTATIONTYPE(op) \
	op(EFollowSplineRotationType::FollowSplineTangent) \
	op(EFollowSplineRotationType::NoRotation) 

enum class EFollowSplineRotationType : uint8;
template<> struct TIsUEnumClass<EFollowSplineRotationType> { enum { Value = true }; };
template<> MOVEREXAMPLES_API UEnum* StaticEnum<EFollowSplineRotationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
