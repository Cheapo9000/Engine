// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Entries/AnimNextAnimationGraphEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_AnimNextAnimationGraphEntry_generated_h
#error "AnimNextAnimationGraphEntry.generated.h already included, missing '#pragma once' in AnimNextAnimationGraphEntry.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_AnimNextAnimationGraphEntry_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextAnimationGraphEntry(); \
	friend struct Z_Construct_UClass_UAnimNextAnimationGraphEntry_Statics; \
public: \
	DECLARE_CLASS(UAnimNextAnimationGraphEntry, UAnimNextRigVMAssetEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), ANIMNEXTUNCOOKEDONLY_API) \
	DECLARE_SERIALIZER(UAnimNextAnimationGraphEntry) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimNextAnimationGraphEntry*>(this); }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMNEXTUNCOOKEDONLY_API UAnimNextAnimationGraphEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextAnimationGraphEntry(UAnimNextAnimationGraphEntry&&); \
	UAnimNextAnimationGraphEntry(const UAnimNextAnimationGraphEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMNEXTUNCOOKEDONLY_API, UAnimNextAnimationGraphEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextAnimationGraphEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextAnimationGraphEntry) \
	ANIMNEXTUNCOOKEDONLY_API virtual ~UAnimNextAnimationGraphEntry();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextAnimationGraphEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextAnimationGraphEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
