// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/ImportanceSamplingLibrary.h"

#ifdef ENGINE_ImportanceSamplingLibrary_generated_h
#error "ImportanceSamplingLibrary.generated.h already included, missing '#pragma once' in ImportanceSamplingLibrary.h"
#endif
#define ENGINE_ImportanceSamplingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FImportanceTexture;
struct FLinearColor;

// ********** Begin ScriptStruct FImportanceTexture ************************************************
struct Z_Construct_UScriptStruct_FImportanceTexture_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportanceTexture_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FImportanceTexture;
// ********** End ScriptStruct FImportanceTexture **************************************************

// ********** Begin Class UImportanceSamplingLibrary ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_RPC_WRAPPERS \
	DECLARE_FUNCTION(execImportanceSample); \
	DECLARE_FUNCTION(execBreakImportanceTexture); \
	DECLARE_FUNCTION(execMakeImportanceTexture); \
	DECLARE_FUNCTION(execNextSobolCell3D); \
	DECLARE_FUNCTION(execRandomSobolCell3D); \
	DECLARE_FUNCTION(execNextSobolCell2D); \
	DECLARE_FUNCTION(execRandomSobolCell2D); \
	DECLARE_FUNCTION(execNextSobolFloat); \
	DECLARE_FUNCTION(execRandomSobolFloat);


struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUImportanceSamplingLibrary(); \
	friend struct ::Z_Construct_UClass_UImportanceSamplingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportanceSamplingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister) \
	DECLARE_SERIALIZER(UImportanceSamplingLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportanceSamplingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportanceSamplingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportanceSamplingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportanceSamplingLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportanceSamplingLibrary(UImportanceSamplingLibrary&&) = delete; \
	UImportanceSamplingLibrary(const UImportanceSamplingLibrary&) = delete; \
	ENGINE_API virtual ~UImportanceSamplingLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_117_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportanceSamplingLibrary;

// ********** End Class UImportanceSamplingLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h

// ********** Begin Enum EImportanceWeight *********************************************************
#define FOREACH_ENUM_EIMPORTANCEWEIGHT(op) \
	op(EImportanceWeight::Luminance) \
	op(EImportanceWeight::Red) \
	op(EImportanceWeight::Green) \
	op(EImportanceWeight::Blue) \
	op(EImportanceWeight::Alpha) 

namespace EImportanceWeight { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EImportanceWeight::Type>();
// ********** End Enum EImportanceWeight ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
