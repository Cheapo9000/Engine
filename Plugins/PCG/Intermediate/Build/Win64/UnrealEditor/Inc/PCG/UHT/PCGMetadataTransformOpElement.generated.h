// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataTransformOpElement.h"

#ifdef PCG_PCGMetadataTransformOpElement_generated_h
#error "PCGMetadataTransformOpElement.generated.h already included, missing '#pragma once' in PCGMetadataTransformOpElement.h"
#endif
#define PCG_PCGMetadataTransformOpElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataTransformSettings ********************************************
struct Z_Construct_UClass_UPCGMetadataTransformSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataTransformSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataTransformSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataTransformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataTransformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataTransformSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataTransformSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataTransformSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataTransformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataTransformSettings(UPCGMetadataTransformSettings&&) = delete; \
	UPCGMetadataTransformSettings(const UPCGMetadataTransformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataTransformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataTransformSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataTransformSettings) \
	PCG_API virtual ~UPCGMetadataTransformSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_31_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataTransformSettings;

// ********** End Class UPCGMetadataTransformSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h

// ********** Begin Enum EPCGMetadataTransformOperation ********************************************
#define FOREACH_ENUM_EPCGMETADATATRANSFORMOPERATION(op) \
	op(EPCGMetadataTransformOperation::Compose) \
	op(EPCGMetadataTransformOperation::Invert) \
	op(EPCGMetadataTransformOperation::Lerp) 

enum class EPCGMetadataTransformOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataTransformOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataTransformOperation>();
// ********** End Enum EPCGMetadataTransformOperation **********************************************

// ********** Begin Enum EPCGTransformLerpMode *****************************************************
#define FOREACH_ENUM_EPCGTRANSFORMLERPMODE(op) \
	op(EPCGTransformLerpMode::QuatInterp) \
	op(EPCGTransformLerpMode::EulerInterp) \
	op(EPCGTransformLerpMode::DualQuatInterp) 

enum class EPCGTransformLerpMode : uint16;
template<> struct TIsUEnumClass<EPCGTransformLerpMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTransformLerpMode>();
// ********** End Enum EPCGTransformLerpMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
