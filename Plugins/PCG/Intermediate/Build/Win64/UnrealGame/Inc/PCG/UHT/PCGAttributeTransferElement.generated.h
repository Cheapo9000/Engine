// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeTransferElement.h"

#ifdef PCG_PCGAttributeTransferElement_generated_h
#error "PCGAttributeTransferElement.generated.h already included, missing '#pragma once' in PCGAttributeTransferElement.h"
#endif
#define PCG_PCGAttributeTransferElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeTransferSettings ********************************************
struct Z_Construct_UClass_UPCGAttributeTransferSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeTransferSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeTransferSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeTransferSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeTransferSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeTransferSettings, UPCGCopyAttributesSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeTransferSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeTransferSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeTransferSettings(UPCGAttributeTransferSettings&&) = delete; \
	UPCGAttributeTransferSettings(const UPCGAttributeTransferSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeTransferSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeTransferSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttributeTransferSettings) \
	PCG_API virtual ~UPCGAttributeTransferSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeTransferSettings;

// ********** End Class UPCGAttributeTransferSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
