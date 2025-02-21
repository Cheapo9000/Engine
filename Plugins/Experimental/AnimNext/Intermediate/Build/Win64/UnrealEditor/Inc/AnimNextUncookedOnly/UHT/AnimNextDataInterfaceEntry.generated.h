// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Entries/AnimNextDataInterfaceEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_AnimNextDataInterfaceEntry_generated_h
#error "AnimNextDataInterfaceEntry.generated.h already included, missing '#pragma once' in AnimNextDataInterfaceEntry.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_AnimNextDataInterfaceEntry_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextDataInterfaceEntry(); \
	friend struct Z_Construct_UClass_UAnimNextDataInterfaceEntry_Statics; \
public: \
	DECLARE_CLASS(UAnimNextDataInterfaceEntry, UAnimNextRigVMAssetEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), ANIMNEXTUNCOOKEDONLY_API) \
	DECLARE_SERIALIZER(UAnimNextDataInterfaceEntry)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMNEXTUNCOOKEDONLY_API UAnimNextDataInterfaceEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextDataInterfaceEntry(UAnimNextDataInterfaceEntry&&); \
	UAnimNextDataInterfaceEntry(const UAnimNextDataInterfaceEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMNEXTUNCOOKEDONLY_API, UAnimNextDataInterfaceEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextDataInterfaceEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextDataInterfaceEntry) \
	ANIMNEXTUNCOOKEDONLY_API virtual ~UAnimNextDataInterfaceEntry();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h_60_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextDataInterfaceEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Entries_AnimNextDataInterfaceEntry_h


#define FOREACH_ENUM_EANIMNEXTDATAINTERFACEAUTOMATICBINDINGMODE(op) \
	op(EAnimNextDataInterfaceAutomaticBindingMode::NoBinding) \
	op(EAnimNextDataInterfaceAutomaticBindingMode::BindSharedInterfaces) 

enum class EAnimNextDataInterfaceAutomaticBindingMode : uint8;
template<> struct TIsUEnumClass<EAnimNextDataInterfaceAutomaticBindingMode> { enum { Value = true }; };
template<> ANIMNEXTUNCOOKEDONLY_API UEnum* StaticEnum<EAnimNextDataInterfaceAutomaticBindingMode>();

#define FOREACH_ENUM_EANIMNEXTDATAINTERFACEVALUEOVERRIDESTATUS(op) \
	op(EAnimNextDataInterfaceValueOverrideStatus::NotOverridden) \
	op(EAnimNextDataInterfaceValueOverrideStatus::OverriddenInThisAsset) \
	op(EAnimNextDataInterfaceValueOverrideStatus::OverriddenInParentAsset) 

enum class EAnimNextDataInterfaceValueOverrideStatus;
template<> struct TIsUEnumClass<EAnimNextDataInterfaceValueOverrideStatus> { enum { Value = true }; };
template<> ANIMNEXTUNCOOKEDONLY_API UEnum* StaticEnum<EAnimNextDataInterfaceValueOverrideStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
