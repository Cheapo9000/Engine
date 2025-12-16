// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGHashAttribute.h"

#ifdef PCG_PCGHashAttribute_generated_h
#error "PCGHashAttribute.generated.h already included, missing '#pragma once' in PCGHashAttribute.h"
#endif
#define PCG_PCGHashAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGHashAttributeSettings ************************************************
struct Z_Construct_UClass_UPCGHashAttributeSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGHashAttributeSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGHashAttributeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGHashAttributeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGHashAttributeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGHashAttributeSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGHashAttributeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGHashAttributeSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGHashAttributeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGHashAttributeSettings(UPCGHashAttributeSettings&&) = delete; \
	UPCGHashAttributeSettings(const UPCGHashAttributeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGHashAttributeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGHashAttributeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGHashAttributeSettings) \
	PCG_API virtual ~UPCGHashAttributeSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGHashAttributeSettings;

// ********** End Class UPCGHashAttributeSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGHashAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
