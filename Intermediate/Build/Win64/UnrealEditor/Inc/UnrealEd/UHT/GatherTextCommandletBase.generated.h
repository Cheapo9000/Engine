// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GatherTextCommandletBase.h"

#ifdef UNREALED_GatherTextCommandletBase_generated_h
#error "GatherTextCommandletBase.generated.h already included, missing '#pragma once' in GatherTextCommandletBase.h"
#endif
#define UNREALED_GatherTextCommandletBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGatherTextCommandletBase ************************************************
struct Z_Construct_UClass_UGatherTextCommandletBase_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_201_INCLASS \
private: \
	static void StaticRegisterNativesUGatherTextCommandletBase(); \
	friend struct ::Z_Construct_UClass_UGatherTextCommandletBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGatherTextCommandletBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGatherTextCommandletBase, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGatherTextCommandletBase_NoRegister) \
	DECLARE_SERIALIZER(UGatherTextCommandletBase)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_201_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UGatherTextCommandletBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextCommandletBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UGatherTextCommandletBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextCommandletBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGatherTextCommandletBase(UGatherTextCommandletBase&&) = delete; \
	UGatherTextCommandletBase(const UGatherTextCommandletBase&) = delete; \
	UNREALED_API virtual ~UGatherTextCommandletBase();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_198_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_201_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_201_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_201_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGatherTextCommandletBase;

// ********** End Class UGatherTextCommandletBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
