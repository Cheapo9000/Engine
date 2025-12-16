// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MatchAndSet/PCGMatchAndSetWeighted.h"

#ifdef PCG_PCGMatchAndSetWeighted_generated_h
#error "PCGMatchAndSetWeighted.generated.h already included, missing '#pragma once' in PCGMatchAndSetWeighted.h"
#endif
#define PCG_PCGMatchAndSetWeighted_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGMatchAndSetWeightedEntry **************************************
struct Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGMatchAndSetWeightedEntry;
// ********** End ScriptStruct FPCGMatchAndSetWeightedEntry ****************************************

// ********** Begin Class UPCGMatchAndSetWeighted **************************************************
struct Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMatchAndSetWeighted(); \
	friend struct ::Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMatchAndSetWeighted, UPCGMatchAndSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister) \
	DECLARE_SERIALIZER(UPCGMatchAndSetWeighted)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMatchAndSetWeighted(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMatchAndSetWeighted(UPCGMatchAndSetWeighted&&) = delete; \
	UPCGMatchAndSetWeighted(const UPCGMatchAndSetWeighted&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMatchAndSetWeighted); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMatchAndSetWeighted); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMatchAndSetWeighted) \
	PCG_API virtual ~UPCGMatchAndSetWeighted();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_37_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMatchAndSetWeighted;

// ********** End Class UPCGMatchAndSetWeighted ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
