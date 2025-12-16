// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGAttributeRemap.h"

#ifdef PCG_PCGAttributeRemap_generated_h
#error "PCGAttributeRemap.generated.h already included, missing '#pragma once' in PCGAttributeRemap.h"
#endif
#define PCG_PCGAttributeRemap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeRemapSettings ***********************************************
struct Z_Construct_UClass_UPCGAttributeRemapSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeRemapSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeRemapSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeRemapSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeRemapSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeRemapSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeRemapSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeRemapSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeRemapSettings(UPCGAttributeRemapSettings&&) = delete; \
	UPCGAttributeRemapSettings(const UPCGAttributeRemapSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeRemapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeRemapSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttributeRemapSettings) \
	PCG_API virtual ~UPCGAttributeRemapSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h_26_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeRemapSettings;

// ********** End Class UPCGAttributeRemapSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeRemap_h

// ********** Begin Enum EPCGAttributeRemapMode ****************************************************
#define FOREACH_ENUM_EPCGATTRIBUTEREMAPMODE(op) \
	op(EPCGAttributeRemapMode::Ranges) \
	op(EPCGAttributeRemapMode::Curve) 

enum class EPCGAttributeRemapMode;
template<> struct TIsUEnumClass<EPCGAttributeRemapMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeRemapMode>();
// ********** End Enum EPCGAttributeRemapMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
