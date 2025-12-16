// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneSplicerBP.h"

#ifdef GENESPLICERMODULE_GeneSplicerBP_generated_h
#error "GeneSplicerBP.generated.h already included, missing '#pragma once' in GeneSplicerBP.h"
#endif
#define GENESPLICERMODULE_GeneSplicerBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URegionAffiliationAsset;
class USpliceData;

// ********** Begin Class UGeneSplicerBP ***********************************************************
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSplice); \
	DECLARE_FUNCTION(execCreateArchetype); \
	DECLARE_FUNCTION(execCreateGenePool);


struct Z_Construct_UClass_UGeneSplicerBP_Statics;
GENESPLICERMODULE_API UClass* Z_Construct_UClass_UGeneSplicerBP_NoRegister();

#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneSplicerBP(); \
	friend struct ::Z_Construct_UClass_UGeneSplicerBP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GENESPLICERMODULE_API UClass* ::Z_Construct_UClass_UGeneSplicerBP_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeneSplicerBP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeneSplicerModule"), Z_Construct_UClass_UGeneSplicerBP_NoRegister) \
	DECLARE_SERIALIZER(UGeneSplicerBP)


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneSplicerBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeneSplicerBP(UGeneSplicerBP&&) = delete; \
	UGeneSplicerBP(const UGeneSplicerBP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneSplicerBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneSplicerBP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneSplicerBP) \
	NO_API virtual ~UGeneSplicerBP();


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_13_PROLOG
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeneSplicerBP;

// ********** End Class UGeneSplicerBP *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GeneSplicerBP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
