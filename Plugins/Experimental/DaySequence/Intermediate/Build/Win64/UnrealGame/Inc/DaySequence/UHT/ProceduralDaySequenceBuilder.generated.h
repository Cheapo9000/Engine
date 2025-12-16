// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralDaySequenceBuilder.h"

#ifdef DAYSEQUENCE_ProceduralDaySequenceBuilder_generated_h
#error "ProceduralDaySequenceBuilder.generated.h already included, missing '#pragma once' in ProceduralDaySequenceBuilder.h"
#endif
#define DAYSEQUENCE_ProceduralDaySequenceBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;
class UDaySequence;
class UMaterialInterface;
class UObject;
struct FLinearColor;

// ********** Begin Class UProceduralDaySequenceBuilder ********************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearKeys); \
	DECLARE_FUNCTION(execAddVisibilityOverride); \
	DECLARE_FUNCTION(execAddColorMaterialParameterOverride); \
	DECLARE_FUNCTION(execAddScalarMaterialParameterOverride); \
	DECLARE_FUNCTION(execAddMaterialOverride); \
	DECLARE_FUNCTION(execAddScaleKey); \
	DECLARE_FUNCTION(execAddRotationKey); \
	DECLARE_FUNCTION(execAddTranslationKey); \
	DECLARE_FUNCTION(execAddTransformOverride); \
	DECLARE_FUNCTION(execAddColorOverride); \
	DECLARE_FUNCTION(execAddVectorKey); \
	DECLARE_FUNCTION(execAddVectorOverride); \
	DECLARE_FUNCTION(execAddScalarKey); \
	DECLARE_FUNCTION(execAddScalarOverride); \
	DECLARE_FUNCTION(execAddBoolKey); \
	DECLARE_FUNCTION(execAddBoolOverride); \
	DECLARE_FUNCTION(execSetActiveBoundObject); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UProceduralDaySequenceBuilder_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UProceduralDaySequenceBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralDaySequenceBuilder(); \
	friend struct ::Z_Construct_UClass_UProceduralDaySequenceBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UProceduralDaySequenceBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralDaySequenceBuilder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UProceduralDaySequenceBuilder_NoRegister) \
	DECLARE_SERIALIZER(UProceduralDaySequenceBuilder)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAYSEQUENCE_API UProceduralDaySequenceBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralDaySequenceBuilder(UProceduralDaySequenceBuilder&&) = delete; \
	UProceduralDaySequenceBuilder(const UProceduralDaySequenceBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UProceduralDaySequenceBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralDaySequenceBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralDaySequenceBuilder) \
	DAYSEQUENCE_API virtual ~UProceduralDaySequenceBuilder();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralDaySequenceBuilder;

// ********** End Class UProceduralDaySequenceBuilder **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_ProceduralDaySequenceBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
