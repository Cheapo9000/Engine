// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGGraphExecutionStateInterface.h"

#ifdef PCG_PCGGraphExecutionStateInterface_generated_h
#error "PCGGraphExecutionStateInterface.generated.h already included, missing '#pragma once' in PCGGraphExecutionStateInterface.h"
#endif
#define PCG_PCGGraphExecutionStateInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPCGGraphExecutionSource *********************************************
struct Z_Construct_UClass_UPCGGraphExecutionSource_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGraphExecutionSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphExecutionSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGraphExecutionSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphExecutionSource); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraphExecutionSource(UPCGGraphExecutionSource&&) = delete; \
	UPCGGraphExecutionSource(const UPCGGraphExecutionSource&) = delete; \
	virtual ~UPCGGraphExecutionSource() = default;


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGGraphExecutionSource(); \
	friend struct ::Z_Construct_UClass_UPCGGraphExecutionSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraphExecutionSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraphExecutionSource)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_INCLASS_IINTERFACE \
protected: \
	virtual ~IPCGGraphExecutionSource() {} \
public: \
	typedef UPCGGraphExecutionSource UClassType; \
	typedef IPCGGraphExecutionSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_158_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_161_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraphExecutionSource;

// ********** End Interface UPCGGraphExecutionSource ***********************************************

// ********** Begin ScriptStruct FPCGSoftGraphExecutionSource **************************************
struct Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSoftGraphExecutionSource;
// ********** End ScriptStruct FPCGSoftGraphExecutionSource ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
