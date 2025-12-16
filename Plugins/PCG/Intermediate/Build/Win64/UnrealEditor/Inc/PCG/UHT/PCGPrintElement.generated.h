// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPrintElement.h"

#ifdef PCG_PCGPrintElement_generated_h
#error "PCGPrintElement.generated.h already included, missing '#pragma once' in PCGPrintElement.h"
#endif
#define PCG_PCGPrintElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGManagedDebugStringMessageKey *****************************************
struct Z_Construct_UClass_UPCGManagedDebugStringMessageKey_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedDebugStringMessageKey_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedDebugStringMessageKey(); \
	friend struct ::Z_Construct_UClass_UPCGManagedDebugStringMessageKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedDebugStringMessageKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedDebugStringMessageKey, UPCGManagedResource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedDebugStringMessageKey_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedDebugStringMessageKey)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGManagedDebugStringMessageKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedDebugStringMessageKey(UPCGManagedDebugStringMessageKey&&) = delete; \
	UPCGManagedDebugStringMessageKey(const UPCGManagedDebugStringMessageKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGManagedDebugStringMessageKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedDebugStringMessageKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedDebugStringMessageKey) \
	NO_API virtual ~UPCGManagedDebugStringMessageKey();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedDebugStringMessageKey;

// ********** End Class UPCGManagedDebugStringMessageKey *******************************************

// ********** Begin Class UPCGPrintElementSettings *************************************************
struct Z_Construct_UClass_UPCGPrintElementSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPrintElementSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPrintElementSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPrintElementSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPrintElementSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPrintElementSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPrintElementSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPrintElementSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPrintElementSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPrintElementSettings(UPCGPrintElementSettings&&) = delete; \
	UPCGPrintElementSettings(const UPCGPrintElementSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPrintElementSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPrintElementSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPrintElementSettings) \
	NO_API virtual ~UPCGPrintElementSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_47_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPrintElementSettings;

// ********** End Class UPCGPrintElementSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPrintElement_h

// ********** Begin Enum EPCGPrintVerbosity ********************************************************
#define FOREACH_ENUM_EPCGPRINTVERBOSITY(op) \
	op(EPCGPrintVerbosity::NoLogging) \
	op(EPCGPrintVerbosity::Log) \
	op(EPCGPrintVerbosity::Warning) \
	op(EPCGPrintVerbosity::Error) \
	op(EPCGPrintVerbosity::Display) 

enum class EPCGPrintVerbosity : uint8;
template<> struct TIsUEnumClass<EPCGPrintVerbosity> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPrintVerbosity>();
// ********** End Enum EPCGPrintVerbosity **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
