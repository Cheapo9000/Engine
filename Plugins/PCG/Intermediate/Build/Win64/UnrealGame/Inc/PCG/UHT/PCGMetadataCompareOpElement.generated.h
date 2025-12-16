// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataCompareOpElement.h"

#ifdef PCG_PCGMetadataCompareOpElement_generated_h
#error "PCGMetadataCompareOpElement.generated.h already included, missing '#pragma once' in PCGMetadataCompareOpElement.h"
#endif
#define PCG_PCGMetadataCompareOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataCompareSettings **********************************************
struct Z_Construct_UClass_UPCGMetadataCompareSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataCompareSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataCompareSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataCompareSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataCompareSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataCompareSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataCompareSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataCompareSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataCompareSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataCompareSettings(UPCGMetadataCompareSettings&&) = delete; \
	UPCGMetadataCompareSettings(const UPCGMetadataCompareSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataCompareSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataCompareSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataCompareSettings) \
	PCG_API virtual ~UPCGMetadataCompareSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataCompareSettings;

// ********** End Class UPCGMetadataCompareSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataCompareOpElement_h

// ********** Begin Enum EPCGMetadataCompareOperation **********************************************
#define FOREACH_ENUM_EPCGMETADATACOMPAREOPERATION(op) \
	op(EPCGMetadataCompareOperation::Equal) \
	op(EPCGMetadataCompareOperation::NotEqual) \
	op(EPCGMetadataCompareOperation::Greater) \
	op(EPCGMetadataCompareOperation::GreaterOrEqual) \
	op(EPCGMetadataCompareOperation::Less) \
	op(EPCGMetadataCompareOperation::LessOrEqual) 

enum class EPCGMetadataCompareOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataCompareOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataCompareOperation>();
// ********** End Enum EPCGMetadataCompareOperation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
