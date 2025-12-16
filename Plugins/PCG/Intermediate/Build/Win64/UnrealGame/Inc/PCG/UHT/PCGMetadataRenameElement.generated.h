// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataRenameElement.h"

#ifdef PCG_PCGMetadataRenameElement_generated_h
#error "PCGMetadataRenameElement.generated.h already included, missing '#pragma once' in PCGMetadataRenameElement.h"
#endif
#define PCG_PCGMetadataRenameElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataRenameSettings ***********************************************
struct Z_Construct_UClass_UPCGMetadataRenameSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataRenameSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataRenameSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataRenameSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataRenameSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataRenameSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataRenameSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataRenameSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataRenameSettings(UPCGMetadataRenameSettings&&) = delete; \
	UPCGMetadataRenameSettings(const UPCGMetadataRenameSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataRenameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataRenameSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataRenameSettings) \
	PCG_API virtual ~UPCGMetadataRenameSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataRenameSettings;

// ********** End Class UPCGMetadataRenameSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
