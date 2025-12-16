// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeDataInterfaceBuffer.h"

#ifdef COMPUTEFRAMEWORK_ComputeDataInterfaceBuffer_generated_h
#error "ComputeDataInterfaceBuffer.generated.h already included, missing '#pragma once' in ComputeDataInterfaceBuffer.h"
#endif
#define COMPUTEFRAMEWORK_ComputeDataInterfaceBuffer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeDataInterfaceBuffer **********************************************
struct Z_Construct_UClass_UComputeDataInterfaceBuffer_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterfaceBuffer_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeDataInterfaceBuffer(); \
	friend struct ::Z_Construct_UClass_UComputeDataInterfaceBuffer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeDataInterfaceBuffer_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeDataInterfaceBuffer, UComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeDataInterfaceBuffer_NoRegister) \
	DECLARE_SERIALIZER(UComputeDataInterfaceBuffer)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeDataInterfaceBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeDataInterfaceBuffer(UComputeDataInterfaceBuffer&&) = delete; \
	UComputeDataInterfaceBuffer(const UComputeDataInterfaceBuffer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeDataInterfaceBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeDataInterfaceBuffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeDataInterfaceBuffer) \
	COMPUTEFRAMEWORK_API virtual ~UComputeDataInterfaceBuffer();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeDataInterfaceBuffer;

// ********** End Class UComputeDataInterfaceBuffer ************************************************

// ********** Begin Class UBufferDataProvider ******************************************************
struct Z_Construct_UClass_UBufferDataProvider_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UBufferDataProvider_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBufferDataProvider(); \
	friend struct ::Z_Construct_UClass_UBufferDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UBufferDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UBufferDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UBufferDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UBufferDataProvider)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UBufferDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBufferDataProvider(UBufferDataProvider&&) = delete; \
	UBufferDataProvider(const UBufferDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UBufferDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBufferDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBufferDataProvider) \
	COMPUTEFRAMEWORK_API virtual ~UBufferDataProvider();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBufferDataProvider;

// ********** End Class UBufferDataProvider ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
