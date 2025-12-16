// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGParseString.h"

#ifdef PCG_PCGParseString_generated_h
#error "PCGParseString.generated.h already included, missing '#pragma once' in PCGParseString.h"
#endif
#define PCG_PCGParseString_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGParseStringSettings **************************************************
struct Z_Construct_UClass_UPCGParseStringSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGParseStringSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGParseStringSettings(); \
	friend struct ::Z_Construct_UClass_UPCGParseStringSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGParseStringSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGParseStringSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGParseStringSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGParseStringSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGParseStringSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGParseStringSettings(UPCGParseStringSettings&&) = delete; \
	UPCGParseStringSettings(const UPCGParseStringSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGParseStringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGParseStringSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGParseStringSettings) \
	PCG_API virtual ~UPCGParseStringSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGParseStringSettings;

// ********** End Class UPCGParseStringSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGParseString_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
