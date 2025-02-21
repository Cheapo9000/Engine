// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Entries/AnimNextEventGraphEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_AnimNextEventGraphEntry_generated_h
#error "AnimNextEventGraphEntry.generated.h already included, missing '#pragma once' in AnimNextEventGraphEntry.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_AnimNextEventGraphEntry_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextEventGraphEntry(); \
	friend struct Z_Construct_UClass_UAnimNextEventGraphEntry_Statics; \
public: \
	DECLARE_CLASS(UAnimNextEventGraphEntry, UAnimNextRigVMAssetEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), ANIMNEXTUNCOOKEDONLY_API) \
	DECLARE_SERIALIZER(UAnimNextEventGraphEntry) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimNextEventGraphEntry*>(this); }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMNEXTUNCOOKEDONLY_API UAnimNextEventGraphEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextEventGraphEntry(UAnimNextEventGraphEntry&&); \
	UAnimNextEventGraphEntry(const UAnimNextEventGraphEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMNEXTUNCOOKEDONLY_API, UAnimNextEventGraphEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextEventGraphEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextEventGraphEntry) \
	ANIMNEXTUNCOOKEDONLY_API virtual ~UAnimNextEventGraphEntry();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextEventGraphEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextEventGraphEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
