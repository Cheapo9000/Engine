// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomCreateBindingOptions.h"

#ifdef HAIRSTRANDSCORE_GroomCreateBindingOptions_generated_h
#error "GroomCreateBindingOptions.generated.h already included, missing '#pragma once' in GroomCreateBindingOptions.h"
#endif
#define HAIRSTRANDSCORE_GroomCreateBindingOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGroomCreateBindingOptions ***********************************************
struct Z_Construct_UClass_UGroomCreateBindingOptions_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateBindingOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGroomCreateBindingOptions(); \
	friend struct ::Z_Construct_UClass_UGroomCreateBindingOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomCreateBindingOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomCreateBindingOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomCreateBindingOptions_NoRegister) \
	DECLARE_SERIALIZER(UGroomCreateBindingOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomCreateBindingOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomCreateBindingOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomCreateBindingOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomCreateBindingOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomCreateBindingOptions(UGroomCreateBindingOptions&&) = delete; \
	UGroomCreateBindingOptions(const UGroomCreateBindingOptions&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UGroomCreateBindingOptions();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_12_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomCreateBindingOptions;

// ********** End Class UGroomCreateBindingOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
