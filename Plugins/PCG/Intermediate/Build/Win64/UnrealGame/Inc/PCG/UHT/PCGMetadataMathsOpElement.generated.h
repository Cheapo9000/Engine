// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataMathsOpElement.h"

#ifdef PCG_PCGMetadataMathsOpElement_generated_h
#error "PCGMetadataMathsOpElement.generated.h already included, missing '#pragma once' in PCGMetadataMathsOpElement.h"
#endif
#define PCG_PCGMetadataMathsOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataMathsSettings ************************************************
struct Z_Construct_UClass_UPCGMetadataMathsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataMathsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataMathsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataMathsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataMathsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataMathsSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataMathsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataMathsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataMathsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataMathsSettings(UPCGMetadataMathsSettings&&) = delete; \
	UPCGMetadataMathsSettings(const UPCGMetadataMathsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataMathsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataMathsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataMathsSettings) \
	PCG_API virtual ~UPCGMetadataMathsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_51_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataMathsSettings;

// ********** End Class UPCGMetadataMathsSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h

// ********** Begin Enum EPCGMetadataMathsOperation ************************************************
#define FOREACH_ENUM_EPCGMETADATAMATHSOPERATION(op) \
	op(EPCGMetadataMathsOperation::UnaryOp) \
	op(EPCGMetadataMathsOperation::Sign) \
	op(EPCGMetadataMathsOperation::Frac) \
	op(EPCGMetadataMathsOperation::Truncate) \
	op(EPCGMetadataMathsOperation::Round) \
	op(EPCGMetadataMathsOperation::Sqrt) \
	op(EPCGMetadataMathsOperation::Abs) \
	op(EPCGMetadataMathsOperation::Floor) \
	op(EPCGMetadataMathsOperation::Ceil) \
	op(EPCGMetadataMathsOperation::OneMinus) \
	op(EPCGMetadataMathsOperation::Inc) \
	op(EPCGMetadataMathsOperation::Dec) \
	op(EPCGMetadataMathsOperation::Negate) \
	op(EPCGMetadataMathsOperation::BinaryOp) \
	op(EPCGMetadataMathsOperation::Add) \
	op(EPCGMetadataMathsOperation::Subtract) \
	op(EPCGMetadataMathsOperation::Multiply) \
	op(EPCGMetadataMathsOperation::Divide) \
	op(EPCGMetadataMathsOperation::Max) \
	op(EPCGMetadataMathsOperation::Min) \
	op(EPCGMetadataMathsOperation::Pow) \
	op(EPCGMetadataMathsOperation::ClampMin) \
	op(EPCGMetadataMathsOperation::ClampMax) \
	op(EPCGMetadataMathsOperation::Modulo) \
	op(EPCGMetadataMathsOperation::Set) \
	op(EPCGMetadataMathsOperation::TernaryOp) \
	op(EPCGMetadataMathsOperation::Clamp) \
	op(EPCGMetadataMathsOperation::Lerp) \
	op(EPCGMetadataMathsOperation::MulAdd) \
	op(EPCGMetadataMathsOperation::AddModulo) 

enum class EPCGMetadataMathsOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataMathsOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataMathsOperation>();
// ********** End Enum EPCGMetadataMathsOperation **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
