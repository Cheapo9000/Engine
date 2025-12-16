// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDReferenceOptions.h"

#ifdef USDCLASSES_USDReferenceOptions_generated_h
#error "USDReferenceOptions.generated.h already included, missing '#pragma once' in USDReferenceOptions.h"
#endif
#define USDCLASSES_USDReferenceOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdReferenceOptions *****************************************************
struct Z_Construct_UClass_UUsdReferenceOptions_Statics;
USDCLASSES_API UClass* Z_Construct_UClass_UUsdReferenceOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdReferenceOptions(); \
	friend struct ::Z_Construct_UClass_UUsdReferenceOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDCLASSES_API UClass* ::Z_Construct_UClass_UUsdReferenceOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdReferenceOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDClasses"), Z_Construct_UClass_UUsdReferenceOptions_NoRegister) \
	DECLARE_SERIALIZER(UUsdReferenceOptions)


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDCLASSES_API UUsdReferenceOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdReferenceOptions(UUsdReferenceOptions&&) = delete; \
	UUsdReferenceOptions(const UUsdReferenceOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDCLASSES_API, UUsdReferenceOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdReferenceOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdReferenceOptions) \
	USDCLASSES_API virtual ~UUsdReferenceOptions();


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdReferenceOptions;

// ********** End Class UUsdReferenceOptions *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDReferenceOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
