// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataTrigOpElement.h"

#ifdef PCG_PCGMetadataTrigOpElement_generated_h
#error "PCGMetadataTrigOpElement.generated.h already included, missing '#pragma once' in PCGMetadataTrigOpElement.h"
#endif
#define PCG_PCGMetadataTrigOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataTrigSettings *************************************************
struct Z_Construct_UClass_UPCGMetadataTrigSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataTrigSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataTrigSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataTrigSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataTrigSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataTrigSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataTrigSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataTrigSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataTrigSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataTrigSettings(UPCGMetadataTrigSettings&&) = delete; \
	UPCGMetadataTrigSettings(const UPCGMetadataTrigSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataTrigSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataTrigSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataTrigSettings) \
	PCG_API virtual ~UPCGMetadataTrigSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataTrigSettings;

// ********** End Class UPCGMetadataTrigSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTrigOpElement_h

// ********** Begin Enum EPCGMetadataTrigOperation *************************************************
#define FOREACH_ENUM_EPCGMETADATATRIGOPERATION(op) \
	op(EPCGMetadataTrigOperation::Acos) \
	op(EPCGMetadataTrigOperation::Asin) \
	op(EPCGMetadataTrigOperation::Atan) \
	op(EPCGMetadataTrigOperation::Atan2) \
	op(EPCGMetadataTrigOperation::Cos) \
	op(EPCGMetadataTrigOperation::Sin) \
	op(EPCGMetadataTrigOperation::Tan) \
	op(EPCGMetadataTrigOperation::DegToRad) \
	op(EPCGMetadataTrigOperation::RadToDeg) 

enum class EPCGMetadataTrigOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataTrigOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataTrigOperation>();
// ********** End Enum EPCGMetadataTrigOperation ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
