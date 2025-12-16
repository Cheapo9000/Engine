// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGSettingsWithDynamicInputs.h"

#ifdef PCG_PCGSettingsWithDynamicInputs_generated_h
#error "PCGSettingsWithDynamicInputs.generated.h already included, missing '#pragma once' in PCGSettingsWithDynamicInputs.h"
#endif
#define PCG_PCGSettingsWithDynamicInputs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSettingsWithDynamicInputs ********************************************
struct Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettingsWithDynamicInputs(); \
	friend struct ::Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSettingsWithDynamicInputs, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister) \
	DECLARE_SERIALIZER(UPCGSettingsWithDynamicInputs)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSettingsWithDynamicInputs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSettingsWithDynamicInputs(UPCGSettingsWithDynamicInputs&&) = delete; \
	UPCGSettingsWithDynamicInputs(const UPCGSettingsWithDynamicInputs&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSettingsWithDynamicInputs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettingsWithDynamicInputs); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettingsWithDynamicInputs) \
	PCG_API virtual ~UPCGSettingsWithDynamicInputs();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSettingsWithDynamicInputs;

// ********** End Class UPCGSettingsWithDynamicInputs **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
