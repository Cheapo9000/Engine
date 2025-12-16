// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeKernelSource.h"

#ifdef COMPUTEFRAMEWORK_ComputeKernelSource_generated_h
#error "ComputeKernelSource.generated.h already included, missing '#pragma once' in ComputeKernelSource.h"
#endif
#define COMPUTEFRAMEWORK_ComputeKernelSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeKernelSource *****************************************************
struct Z_Construct_UClass_UComputeKernelSource_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeKernelSource(); \
	friend struct ::Z_Construct_UClass_UComputeKernelSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeKernelSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeKernelSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeKernelSource_NoRegister) \
	DECLARE_SERIALIZER(UComputeKernelSource)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeKernelSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeKernelSource(UComputeKernelSource&&) = delete; \
	UComputeKernelSource(const UComputeKernelSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeKernelSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeKernelSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeKernelSource) \
	COMPUTEFRAMEWORK_API virtual ~UComputeKernelSource();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeKernelSource;

// ********** End Class UComputeKernelSource *******************************************************

// ********** Begin Class UComputeKernelSourceWithText *********************************************
struct Z_Construct_UClass_UComputeKernelSourceWithText_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSourceWithText_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeKernelSourceWithText(); \
	friend struct ::Z_Construct_UClass_UComputeKernelSourceWithText_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeKernelSourceWithText_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeKernelSourceWithText, UComputeKernelSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeKernelSourceWithText_NoRegister) \
	DECLARE_SERIALIZER(UComputeKernelSourceWithText)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeKernelSourceWithText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeKernelSourceWithText(UComputeKernelSourceWithText&&) = delete; \
	UComputeKernelSourceWithText(const UComputeKernelSourceWithText&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeKernelSourceWithText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeKernelSourceWithText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeKernelSourceWithText) \
	COMPUTEFRAMEWORK_API virtual ~UComputeKernelSourceWithText();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeKernelSourceWithText;

// ********** End Class UComputeKernelSourceWithText ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
