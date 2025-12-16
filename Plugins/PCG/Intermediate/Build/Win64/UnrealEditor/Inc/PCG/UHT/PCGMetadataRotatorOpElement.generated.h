// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataRotatorOpElement.h"

#ifdef PCG_PCGMetadataRotatorOpElement_generated_h
#error "PCGMetadataRotatorOpElement.generated.h already included, missing '#pragma once' in PCGMetadataRotatorOpElement.h"
#endif
#define PCG_PCGMetadataRotatorOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataRotatorSettings **********************************************
struct Z_Construct_UClass_UPCGMetadataRotatorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataRotatorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataRotatorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataRotatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataRotatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataRotatorSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataRotatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataRotatorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataRotatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataRotatorSettings(UPCGMetadataRotatorSettings&&) = delete; \
	UPCGMetadataRotatorSettings(const UPCGMetadataRotatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataRotatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataRotatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataRotatorSettings) \
	PCG_API virtual ~UPCGMetadataRotatorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h_29_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataRotatorSettings;

// ********** End Class UPCGMetadataRotatorSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRotatorOpElement_h

// ********** Begin Enum EPCGMetadataRotatorOperation **********************************************
#define FOREACH_ENUM_EPCGMETADATAROTATOROPERATION(op) \
	op(EPCGMetadataRotatorOperation::RotatorOp) \
	op(EPCGMetadataRotatorOperation::Combine) \
	op(EPCGMetadataRotatorOperation::Invert) \
	op(EPCGMetadataRotatorOperation::Lerp) \
	op(EPCGMetadataRotatorOperation::Normalize) \
	op(EPCGMetadataRotatorOperation::TransformOp) \
	op(EPCGMetadataRotatorOperation::TransformRotation) \
	op(EPCGMetadataRotatorOperation::InverseTransformRotation) 

enum class EPCGMetadataRotatorOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataRotatorOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataRotatorOperation>();
// ********** End Enum EPCGMetadataRotatorOperation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
