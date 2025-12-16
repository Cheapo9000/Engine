// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGUnionElement.h"

#ifdef PCG_PCGUnionElement_generated_h
#error "PCGUnionElement.generated.h already included, missing '#pragma once' in PCGUnionElement.h"
#endif
#define PCG_PCGUnionElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGUnionSettings ********************************************************
struct Z_Construct_UClass_UPCGUnionSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGUnionSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGUnionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGUnionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGUnionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGUnionSettings, UPCGSettingsWithDynamicInputs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGUnionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGUnionSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGUnionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGUnionSettings(UPCGUnionSettings&&) = delete; \
	UPCGUnionSettings(const UPCGUnionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGUnionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUnionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUnionSettings) \
	PCG_API virtual ~UPCGUnionSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGUnionSettings;

// ********** End Class UPCGUnionSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
