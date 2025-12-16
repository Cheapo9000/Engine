// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeSource.h"

#ifdef COMPUTEFRAMEWORK_ComputeSource_generated_h
#error "ComputeSource.generated.h already included, missing '#pragma once' in ComputeSource.h"
#endif
#define COMPUTEFRAMEWORK_ComputeSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeSource ***********************************************************
struct Z_Construct_UClass_UComputeSource_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeSource(); \
	friend struct ::Z_Construct_UClass_UComputeSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeSource_NoRegister) \
	DECLARE_SERIALIZER(UComputeSource)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeSource(UComputeSource&&) = delete; \
	UComputeSource(const UComputeSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeSource) \
	COMPUTEFRAMEWORK_API virtual ~UComputeSource();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeSource;

// ********** End Class UComputeSource *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
