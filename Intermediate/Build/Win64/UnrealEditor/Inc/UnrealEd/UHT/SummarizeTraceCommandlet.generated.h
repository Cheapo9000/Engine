// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/SummarizeTraceCommandlet.h"

#ifdef UNREALED_SummarizeTraceCommandlet_generated_h
#error "SummarizeTraceCommandlet.generated.h already included, missing '#pragma once' in SummarizeTraceCommandlet.h"
#endif
#define UNREALED_SummarizeTraceCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USummarizeTraceCommandlet ************************************************
struct Z_Construct_UClass_USummarizeTraceCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_USummarizeTraceCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSummarizeTraceCommandlet(); \
	friend struct ::Z_Construct_UClass_USummarizeTraceCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USummarizeTraceCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(USummarizeTraceCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USummarizeTraceCommandlet_NoRegister) \
	DECLARE_SERIALIZER(USummarizeTraceCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USummarizeTraceCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USummarizeTraceCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USummarizeTraceCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USummarizeTraceCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USummarizeTraceCommandlet(USummarizeTraceCommandlet&&) = delete; \
	USummarizeTraceCommandlet(const USummarizeTraceCommandlet&) = delete; \
	NO_API virtual ~USummarizeTraceCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USummarizeTraceCommandlet;

// ********** End Class USummarizeTraceCommandlet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
