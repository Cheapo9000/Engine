// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Entries/AnimNextSharedVariablesEntry.h"

#ifdef UAFUNCOOKEDONLY_AnimNextSharedVariablesEntry_generated_h
#error "AnimNextSharedVariablesEntry.generated.h already included, missing '#pragma once' in AnimNextSharedVariablesEntry.h"
#endif
#define UAFUNCOOKEDONLY_AnimNextSharedVariablesEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextSharedVariablesEntry ********************************************
struct Z_Construct_UClass_UAnimNextSharedVariablesEntry_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextSharedVariablesEntry_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextSharedVariablesEntry(); \
	friend struct ::Z_Construct_UClass_UAnimNextSharedVariablesEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextSharedVariablesEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextSharedVariablesEntry, UAnimNextRigVMAssetEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextSharedVariablesEntry_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextSharedVariablesEntry)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextSharedVariablesEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextSharedVariablesEntry(UAnimNextSharedVariablesEntry&&) = delete; \
	UAnimNextSharedVariablesEntry(const UAnimNextSharedVariablesEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextSharedVariablesEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextSharedVariablesEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextSharedVariablesEntry) \
	UAFUNCOOKEDONLY_API virtual ~UAnimNextSharedVariablesEntry();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextSharedVariablesEntry;

// ********** End Class UAnimNextSharedVariablesEntry **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Entries_AnimNextSharedVariablesEntry_h

// ********** Begin Enum EAnimNextSharedVariablesType **********************************************
#define FOREACH_ENUM_EANIMNEXTSHAREDVARIABLESTYPE(op) \
	op(EAnimNextSharedVariablesType::Asset) \
	op(EAnimNextSharedVariablesType::Struct) 

enum class EAnimNextSharedVariablesType : uint8;
template<> struct TIsUEnumClass<EAnimNextSharedVariablesType> { enum { Value = true }; };
template<> UAFUNCOOKEDONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextSharedVariablesType>();
// ********** End Enum EAnimNextSharedVariablesType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
