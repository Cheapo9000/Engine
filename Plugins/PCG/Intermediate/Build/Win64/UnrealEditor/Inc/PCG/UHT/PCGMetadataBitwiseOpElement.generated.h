// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataBitwiseOpElement.h"

#ifdef PCG_PCGMetadataBitwiseOpElement_generated_h
#error "PCGMetadataBitwiseOpElement.generated.h already included, missing '#pragma once' in PCGMetadataBitwiseOpElement.h"
#endif
#define PCG_PCGMetadataBitwiseOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataBitwiseSettings **********************************************
struct Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataBitwiseSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataBitwiseSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataBitwiseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataBitwiseSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataBitwiseSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataBitwiseSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataBitwiseSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataBitwiseSettings(UPCGMetadataBitwiseSettings&&) = delete; \
	UPCGMetadataBitwiseSettings(const UPCGMetadataBitwiseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataBitwiseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataBitwiseSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataBitwiseSettings) \
	PCG_API virtual ~UPCGMetadataBitwiseSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataBitwiseSettings;

// ********** End Class UPCGMetadataBitwiseSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h

// ********** Begin Enum EPCGMetadataBitwiseOperation **********************************************
#define FOREACH_ENUM_EPCGMETADATABITWISEOPERATION(op) \
	op(EPCGMetadataBitwiseOperation::And) \
	op(EPCGMetadataBitwiseOperation::Not) \
	op(EPCGMetadataBitwiseOperation::Or) \
	op(EPCGMetadataBitwiseOperation::Xor) \
	op(EPCGMetadataBitwiseOperation::ShiftLeft) \
	op(EPCGMetadataBitwiseOperation::ShiftRight) 

enum class EPCGMetadataBitwiseOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataBitwiseOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataBitwiseOperation>();
// ********** End Enum EPCGMetadataBitwiseOperation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
