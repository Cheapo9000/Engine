// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceFilterCollection.h"

#ifdef SOURCEFILTERINGTRACE_SourceFilterCollection_generated_h
#error "SourceFilterCollection.generated.h already included, missing '#pragma once' in SourceFilterCollection.h"
#endif
#define SOURCEFILTERINGTRACE_SourceFilterCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USourceFilterCollection **************************************************
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USourceFilterCollection, SOURCEFILTERINGTRACE_API)


struct Z_Construct_UClass_USourceFilterCollection_Statics;
SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_USourceFilterCollection_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceFilterCollection(); \
	friend struct ::Z_Construct_UClass_USourceFilterCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGTRACE_API UClass* ::Z_Construct_UClass_USourceFilterCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceFilterCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), Z_Construct_UClass_USourceFilterCollection_NoRegister) \
	DECLARE_SERIALIZER(USourceFilterCollection) \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCEFILTERINGTRACE_API USourceFilterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceFilterCollection(USourceFilterCollection&&) = delete; \
	USourceFilterCollection(const USourceFilterCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGTRACE_API, USourceFilterCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceFilterCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceFilterCollection)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_16_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceFilterCollection;

// ********** End Class USourceFilterCollection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
