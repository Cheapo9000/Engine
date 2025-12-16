// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataMakeTransform.h"

#ifdef PCG_PCGMetadataMakeTransform_generated_h
#error "PCGMetadataMakeTransform.generated.h already included, missing '#pragma once' in PCGMetadataMakeTransform.h"
#endif
#define PCG_PCGMetadataMakeTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataMakeTransformSettings ****************************************
struct Z_Construct_UClass_UPCGMetadataMakeTransformSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeTransformSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataMakeTransformSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataMakeTransformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataMakeTransformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataMakeTransformSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataMakeTransformSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataMakeTransformSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataMakeTransformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataMakeTransformSettings(UPCGMetadataMakeTransformSettings&&) = delete; \
	UPCGMetadataMakeTransformSettings(const UPCGMetadataMakeTransformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataMakeTransformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataMakeTransformSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataMakeTransformSettings) \
	PCG_API virtual ~UPCGMetadataMakeTransformSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataMakeTransformSettings;

// ********** End Class UPCGMetadataMakeTransformSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
