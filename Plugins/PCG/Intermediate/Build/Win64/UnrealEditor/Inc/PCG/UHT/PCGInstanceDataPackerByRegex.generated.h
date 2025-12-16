// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceDataPackers/PCGInstanceDataPackerByRegex.h"

#ifdef PCG_PCGInstanceDataPackerByRegex_generated_h
#error "PCGInstanceDataPackerByRegex.generated.h already included, missing '#pragma once' in PCGInstanceDataPackerByRegex.h"
#endif
#define PCG_PCGInstanceDataPackerByRegex_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGInstanceDataPackerByRegex ********************************************
struct Z_Construct_UClass_UPCGInstanceDataPackerByRegex_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerByRegex_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstanceDataPackerByRegex(); \
	friend struct ::Z_Construct_UClass_UPCGInstanceDataPackerByRegex_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGInstanceDataPackerByRegex_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInstanceDataPackerByRegex, UPCGInstanceDataPackerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGInstanceDataPackerByRegex_NoRegister) \
	DECLARE_SERIALIZER(UPCGInstanceDataPackerByRegex)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGInstanceDataPackerByRegex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInstanceDataPackerByRegex(UPCGInstanceDataPackerByRegex&&) = delete; \
	UPCGInstanceDataPackerByRegex(const UPCGInstanceDataPackerByRegex&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGInstanceDataPackerByRegex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstanceDataPackerByRegex); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstanceDataPackerByRegex) \
	PCG_API virtual ~UPCGInstanceDataPackerByRegex();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInstanceDataPackerByRegex;

// ********** End Class UPCGInstanceDataPackerByRegex **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByRegex_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
