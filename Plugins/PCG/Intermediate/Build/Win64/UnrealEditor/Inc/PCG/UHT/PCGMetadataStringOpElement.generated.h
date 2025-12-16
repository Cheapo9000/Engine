// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataStringOpElement.h"

#ifdef PCG_PCGMetadataStringOpElement_generated_h
#error "PCGMetadataStringOpElement.generated.h already included, missing '#pragma once' in PCGMetadataStringOpElement.h"
#endif
#define PCG_PCGMetadataStringOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataStringOpSettings *********************************************
struct Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataStringOpSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataStringOpSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataStringOpSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataStringOpSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataStringOpSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataStringOpSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataStringOpSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataStringOpSettings(UPCGMetadataStringOpSettings&&) = delete; \
	UPCGMetadataStringOpSettings(const UPCGMetadataStringOpSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataStringOpSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataStringOpSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataStringOpSettings) \
	PCG_API virtual ~UPCGMetadataStringOpSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataStringOpSettings;

// ********** End Class UPCGMetadataStringOpSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h

// ********** Begin Enum EPCGMetadataStringOperation ***********************************************
#define FOREACH_ENUM_EPCGMETADATASTRINGOPERATION(op) \
	op(EPCGMetadataStringOperation::Append) \
	op(EPCGMetadataStringOperation::Replace) \
	op(EPCGMetadataStringOperation::Substring) \
	op(EPCGMetadataStringOperation::Matches) \
	op(EPCGMetadataStringOperation::ToUpper) \
	op(EPCGMetadataStringOperation::ToLower) \
	op(EPCGMetadataStringOperation::TrimStart) \
	op(EPCGMetadataStringOperation::TrimEnd) \
	op(EPCGMetadataStringOperation::TrimStartAndEnd) 

enum class EPCGMetadataStringOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataStringOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataStringOperation>();
// ********** End Enum EPCGMetadataStringOperation *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
