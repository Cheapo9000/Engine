// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGExtractAttribute.h"

#ifdef PCG_PCGExtractAttribute_generated_h
#error "PCGExtractAttribute.generated.h already included, missing '#pragma once' in PCGExtractAttribute.h"
#endif
#define PCG_PCGExtractAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExtractAttributeSettings *********************************************
struct Z_Construct_UClass_UPCGExtractAttributeSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGExtractAttributeSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExtractAttributeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExtractAttributeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGExtractAttributeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExtractAttributeSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGExtractAttributeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExtractAttributeSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGExtractAttributeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExtractAttributeSettings(UPCGExtractAttributeSettings&&) = delete; \
	UPCGExtractAttributeSettings(const UPCGExtractAttributeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGExtractAttributeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExtractAttributeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExtractAttributeSettings) \
	PCG_API virtual ~UPCGExtractAttributeSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h_59_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExtractAttributeSettings;

// ********** End Class UPCGExtractAttributeSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGExtractAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
