// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/IO/PCGExportSelectedAttributes.h"

#ifdef PCG_PCGExportSelectedAttributes_generated_h
#error "PCGExportSelectedAttributes.generated.h already included, missing '#pragma once' in PCGExportSelectedAttributes.h"
#endif
#define PCG_PCGExportSelectedAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExportSelectedAttributesSettings *************************************
struct Z_Construct_UClass_UPCGExportSelectedAttributesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGExportSelectedAttributesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExportSelectedAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExportSelectedAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGExportSelectedAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExportSelectedAttributesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGExportSelectedAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExportSelectedAttributesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExportSelectedAttributesSettings(UPCGExportSelectedAttributesSettings&&) = delete; \
	UPCGExportSelectedAttributesSettings(const UPCGExportSelectedAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGExportSelectedAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExportSelectedAttributesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGExportSelectedAttributesSettings) \
	PCG_API virtual ~UPCGExportSelectedAttributesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h_36_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExportSelectedAttributesSettings;

// ********** End Class UPCGExportSelectedAttributesSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGExportSelectedAttributes_h

// ********** Begin Enum EPCGExportAttributesFormat ************************************************
#define FOREACH_ENUM_EPCGEXPORTATTRIBUTESFORMAT(op) \
	op(EPCGExportAttributesFormat::Binary) \
	op(EPCGExportAttributesFormat::Json) 

enum class EPCGExportAttributesFormat : uint8;
template<> struct TIsUEnumClass<EPCGExportAttributesFormat> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExportAttributesFormat>();
// ********** End Enum EPCGExportAttributesFormat **************************************************

// ********** Begin Enum EPCGExportAttributesLayout ************************************************
#define FOREACH_ENUM_EPCGEXPORTATTRIBUTESLAYOUT(op) \
	op(EPCGExportAttributesLayout::ByElement) \
	op(EPCGExportAttributesLayout::ByAttribute) 

enum class EPCGExportAttributesLayout : uint8;
template<> struct TIsUEnumClass<EPCGExportAttributesLayout> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExportAttributesLayout>();
// ********** End Enum EPCGExportAttributesLayout **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
