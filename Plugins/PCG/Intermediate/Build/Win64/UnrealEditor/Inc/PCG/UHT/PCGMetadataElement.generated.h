// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataElement.h"

#ifdef PCG_PCGMetadataElement_generated_h
#error "PCGMetadataElement.generated.h already included, missing '#pragma once' in PCGMetadataElement.h"
#endif
#define PCG_PCGMetadataElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataOperationSettings ********************************************
struct Z_Construct_UClass_UPCGMetadataOperationSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataOperationSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataOperationSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataOperationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataOperationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataOperationSettings, UPCGCopyAttributesSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataOperationSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataOperationSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataOperationSettings(UPCGMetadataOperationSettings&&) = delete; \
	UPCGMetadataOperationSettings(const UPCGMetadataOperationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataOperationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataOperationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGMetadataOperationSettings) \
	PCG_API virtual ~UPCGMetadataOperationSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataOperationSettings;

// ********** End Class UPCGMetadataOperationSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
