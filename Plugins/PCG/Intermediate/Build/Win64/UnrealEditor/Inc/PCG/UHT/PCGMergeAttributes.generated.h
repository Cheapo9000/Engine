// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGMergeAttributes.h"

#ifdef PCG_PCGMergeAttributes_generated_h
#error "PCGMergeAttributes.generated.h already included, missing '#pragma once' in PCGMergeAttributes.h"
#endif
#define PCG_PCGMergeAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMergeAttributesSettings **********************************************
struct Z_Construct_UClass_UPCGMergeAttributesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMergeAttributesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMergeAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMergeAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMergeAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMergeAttributesSettings, UPCGSettingsWithDynamicInputs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMergeAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMergeAttributesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMergeAttributesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMergeAttributesSettings(UPCGMergeAttributesSettings&&) = delete; \
	UPCGMergeAttributesSettings(const UPCGMergeAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMergeAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMergeAttributesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMergeAttributesSettings) \
	PCG_API virtual ~UPCGMergeAttributesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMergeAttributesSettings;

// ********** End Class UPCGMergeAttributesSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeAttributes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
