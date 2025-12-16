// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeGetFromIndexElement.h"

#ifdef PCG_PCGAttributeGetFromIndexElement_generated_h
#error "PCGAttributeGetFromIndexElement.generated.h already included, missing '#pragma once' in PCGAttributeGetFromIndexElement.h"
#endif
#define PCG_PCGAttributeGetFromIndexElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeGetFromIndexSettings ****************************************
struct Z_Construct_UClass_UPCGAttributeGetFromIndexSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeGetFromIndexSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeGetFromIndexSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeGetFromIndexSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeGetFromIndexSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeGetFromIndexSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeGetFromIndexSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeGetFromIndexSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAttributeGetFromIndexSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeGetFromIndexSettings(UPCGAttributeGetFromIndexSettings&&) = delete; \
	UPCGAttributeGetFromIndexSettings(const UPCGAttributeGetFromIndexSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeGetFromIndexSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeGetFromIndexSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributeGetFromIndexSettings) \
	PCG_API virtual ~UPCGAttributeGetFromIndexSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeGetFromIndexSettings;

// ********** End Class UPCGAttributeGetFromIndexSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeGetFromIndexElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
