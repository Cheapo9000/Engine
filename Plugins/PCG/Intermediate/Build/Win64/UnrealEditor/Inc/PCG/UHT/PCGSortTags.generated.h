// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSortTags.h"

#ifdef PCG_PCGSortTags_generated_h
#error "PCGSortTags.generated.h already included, missing '#pragma once' in PCGSortTags.h"
#endif
#define PCG_PCGSortTags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSortTagsSettings *****************************************************
struct Z_Construct_UClass_UPCGSortTagsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSortTagsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSortTagsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSortTagsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSortTagsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSortTagsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSortTagsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSortTagsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSortTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSortTagsSettings(UPCGSortTagsSettings&&) = delete; \
	UPCGSortTagsSettings(const UPCGSortTagsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSortTagsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSortTagsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSortTagsSettings) \
	PCG_API virtual ~UPCGSortTagsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSortTagsSettings;

// ********** End Class UPCGSortTagsSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortTags_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
