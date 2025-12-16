// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataVectorOpElement.h"

#ifdef PCG_PCGMetadataVectorOpElement_generated_h
#error "PCGMetadataVectorOpElement.generated.h already included, missing '#pragma once' in PCGMetadataVectorOpElement.h"
#endif
#define PCG_PCGMetadataVectorOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataVectorSettings ***********************************************
struct Z_Construct_UClass_UPCGMetadataVectorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataVectorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataVectorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataVectorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataVectorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataVectorSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataVectorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataVectorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataVectorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataVectorSettings(UPCGMetadataVectorSettings&&) = delete; \
	UPCGMetadataVectorSettings(const UPCGMetadataVectorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataVectorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataVectorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataVectorSettings) \
	PCG_API virtual ~UPCGMetadataVectorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataVectorSettings;

// ********** End Class UPCGMetadataVectorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h

// ********** Begin Enum EPCGMetadataVectorOperation ***********************************************
#define FOREACH_ENUM_EPCGMETADATAVECTOROPERATION(op) \
	op(EPCGMetadataVectorOperation::VectorOp) \
	op(EPCGMetadataVectorOperation::Cross) \
	op(EPCGMetadataVectorOperation::Dot) \
	op(EPCGMetadataVectorOperation::Distance) \
	op(EPCGMetadataVectorOperation::Normalize) \
	op(EPCGMetadataVectorOperation::Length) \
	op(EPCGMetadataVectorOperation::RotateAroundAxis) \
	op(EPCGMetadataVectorOperation::TransformOp) \
	op(EPCGMetadataVectorOperation::TransformDirection) \
	op(EPCGMetadataVectorOperation::TransformLocation) \
	op(EPCGMetadataVectorOperation::InverseTransformDirection) \
	op(EPCGMetadataVectorOperation::InverseTransformLocation) 

enum class EPCGMetadataVectorOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataVectorOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataVectorOperation>();
// ********** End Enum EPCGMetadataVectorOperation *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
