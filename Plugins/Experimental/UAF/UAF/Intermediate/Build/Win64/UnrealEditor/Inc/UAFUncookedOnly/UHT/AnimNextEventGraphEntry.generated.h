// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Entries/AnimNextEventGraphEntry.h"

#ifdef UAFUNCOOKEDONLY_AnimNextEventGraphEntry_generated_h
#error "AnimNextEventGraphEntry.generated.h already included, missing '#pragma once' in AnimNextEventGraphEntry.h"
#endif
#define UAFUNCOOKEDONLY_AnimNextEventGraphEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextEventGraphEntry *************************************************
struct Z_Construct_UClass_UAnimNextEventGraphEntry_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextEventGraphEntry_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextEventGraphEntry(); \
	friend struct ::Z_Construct_UClass_UAnimNextEventGraphEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextEventGraphEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextEventGraphEntry, UAnimNextRigVMAssetEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextEventGraphEntry_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextEventGraphEntry) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimNextEventGraphEntry*>(this); }


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextEventGraphEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextEventGraphEntry(UAnimNextEventGraphEntry&&) = delete; \
	UAnimNextEventGraphEntry(const UAnimNextEventGraphEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextEventGraphEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextEventGraphEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextEventGraphEntry) \
	UAFUNCOOKEDONLY_API virtual ~UAnimNextEventGraphEntry();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextEventGraphEntry;

// ********** End Class UAnimNextEventGraphEntry ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
