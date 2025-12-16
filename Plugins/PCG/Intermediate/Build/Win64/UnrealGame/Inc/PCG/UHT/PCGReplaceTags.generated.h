// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGReplaceTags.h"

#ifdef PCG_PCGReplaceTags_generated_h
#error "PCGReplaceTags.generated.h already included, missing '#pragma once' in PCGReplaceTags.h"
#endif
#define PCG_PCGReplaceTags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGReplaceTagsSettings **************************************************
struct Z_Construct_UClass_UPCGReplaceTagsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGReplaceTagsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGReplaceTagsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGReplaceTagsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGReplaceTagsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGReplaceTagsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGReplaceTagsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGReplaceTagsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGReplaceTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGReplaceTagsSettings(UPCGReplaceTagsSettings&&) = delete; \
	UPCGReplaceTagsSettings(const UPCGReplaceTagsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGReplaceTagsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGReplaceTagsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGReplaceTagsSettings) \
	PCG_API virtual ~UPCGReplaceTagsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGReplaceTagsSettings;

// ********** End Class UPCGReplaceTagsSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGReplaceTags_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
