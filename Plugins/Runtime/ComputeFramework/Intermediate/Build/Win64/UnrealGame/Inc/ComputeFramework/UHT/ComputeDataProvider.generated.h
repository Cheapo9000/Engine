// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeDataProvider.h"

#ifdef COMPUTEFRAMEWORK_ComputeDataProvider_generated_h
#error "ComputeDataProvider.generated.h already included, missing '#pragma once' in ComputeDataProvider.h"
#endif
#define COMPUTEFRAMEWORK_ComputeDataProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeDataProvider *****************************************************
struct Z_Construct_UClass_UComputeDataProvider_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeDataProvider(); \
	friend struct ::Z_Construct_UClass_UComputeDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UComputeDataProvider)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeDataProvider(UComputeDataProvider&&) = delete; \
	UComputeDataProvider(const UComputeDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeDataProvider) \
	COMPUTEFRAMEWORK_API virtual ~UComputeDataProvider();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeDataProvider;

// ********** End Class UComputeDataProvider *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
