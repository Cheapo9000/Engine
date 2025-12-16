// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakesCoreBlueprintLibrary.h"

#ifdef TAKESCORE_TakesCoreBlueprintLibrary_generated_h
#error "TakesCoreBlueprintLibrary.generated.h already included, missing '#pragma once' in TakesCoreBlueprintLibrary.h"
#endif
#define TAKESCORE_TakesCoreBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;

// ********** Begin Delegate FOnTakeRecorderSlateChanged *******************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_37_DELEGATE \
static TAKESCORE_API void FOnTakeRecorderSlateChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderSlateChanged, const FString& Slate);


// ********** End Delegate FOnTakeRecorderSlateChanged *********************************************

// ********** Begin Delegate FOnTakeRecorderTakeNumberChanged **************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_38_DELEGATE \
static TAKESCORE_API void FOnTakeRecorderTakeNumberChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderTakeNumberChanged, int32 TakeNumber);


// ********** End Delegate FOnTakeRecorderTakeNumberChanged ****************************************

// ********** Begin Class UTakesCoreBlueprintLibrary ***********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOnTakeRecorderTakeNumberChanged); \
	DECLARE_FUNCTION(execSetOnTakeRecorderSlateChanged); \
	DECLARE_FUNCTION(execFindTakes); \
	DECLARE_FUNCTION(execComputeNextTakeNumber);


struct Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics;
TAKESCORE_API UClass* Z_Construct_UClass_UTakesCoreBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakesCoreBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKESCORE_API UClass* ::Z_Construct_UClass_UTakesCoreBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakesCoreBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), Z_Construct_UClass_UTakesCoreBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTakesCoreBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKESCORE_API UTakesCoreBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakesCoreBlueprintLibrary(UTakesCoreBlueprintLibrary&&) = delete; \
	UTakesCoreBlueprintLibrary(const UTakesCoreBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKESCORE_API, UTakesCoreBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakesCoreBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakesCoreBlueprintLibrary) \
	TAKESCORE_API virtual ~UTakesCoreBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakesCoreBlueprintLibrary;

// ********** End Class UTakesCoreBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
