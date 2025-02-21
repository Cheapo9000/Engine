// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterVariants/Ziplining/ZipliningMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEREXAMPLES_ZipliningMode_generated_h
#error "ZipliningMode.generated.h already included, missing '#pragma once' in ZipliningMode.h"
#endif
#define MOVEREXAMPLES_ZipliningMode_generated_h

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUZipliningMode(); \
	friend struct Z_Construct_UClass_UZipliningMode_Statics; \
public: \
	DECLARE_CLASS(UZipliningMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverExamples"), NO_API) \
	DECLARE_SERIALIZER(UZipliningMode)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZipliningMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZipliningMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZipliningMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZipliningMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UZipliningMode(UZipliningMode&&); \
	UZipliningMode(const UZipliningMode&); \
public: \
	NO_API virtual ~UZipliningMode();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEREXAMPLES_API UClass* StaticClass<class UZipliningMode>();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FZipliningState_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> MOVEREXAMPLES_API UScriptStruct* StaticStruct<struct FZipliningState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
