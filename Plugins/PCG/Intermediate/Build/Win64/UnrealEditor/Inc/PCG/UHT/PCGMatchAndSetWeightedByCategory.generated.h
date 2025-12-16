// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MatchAndSet/PCGMatchAndSetWeightedByCategory.h"

#ifdef PCG_PCGMatchAndSetWeightedByCategory_generated_h
#error "PCGMatchAndSetWeightedByCategory.generated.h already included, missing '#pragma once' in PCGMatchAndSetWeightedByCategory.h"
#endif
#define PCG_PCGMatchAndSetWeightedByCategory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGMatchAndSetWeightedByCategoryEntryList ************************
struct Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGMatchAndSetWeightedByCategoryEntryList;
// ********** End ScriptStruct FPCGMatchAndSetWeightedByCategoryEntryList **************************

// ********** Begin Class UPCGMatchAndSetWeightedByCategory ****************************************
struct Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMatchAndSetWeightedByCategory(); \
	friend struct ::Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMatchAndSetWeightedByCategory, UPCGMatchAndSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_NoRegister) \
	DECLARE_SERIALIZER(UPCGMatchAndSetWeightedByCategory)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMatchAndSetWeightedByCategory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMatchAndSetWeightedByCategory(UPCGMatchAndSetWeightedByCategory&&) = delete; \
	UPCGMatchAndSetWeightedByCategory(const UPCGMatchAndSetWeightedByCategory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMatchAndSetWeightedByCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMatchAndSetWeightedByCategory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMatchAndSetWeightedByCategory) \
	PCG_API virtual ~UPCGMatchAndSetWeightedByCategory();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_41_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMatchAndSetWeightedByCategory;

// ********** End Class UPCGMatchAndSetWeightedByCategory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
