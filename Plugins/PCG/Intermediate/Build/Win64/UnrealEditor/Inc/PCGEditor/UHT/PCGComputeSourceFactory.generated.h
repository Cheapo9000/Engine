// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PCGComputeSourceFactory.h"

#ifdef PCGEDITOR_PCGComputeSourceFactory_generated_h
#error "PCGComputeSourceFactory.generated.h already included, missing '#pragma once' in PCGComputeSourceFactory.h"
#endif
#define PCGEDITOR_PCGComputeSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGComputeSourceFactory *************************************************
struct Z_Construct_UClass_UPCGComputeSourceFactory_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGComputeSourceFactory_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeSourceFactory(); \
	friend struct ::Z_Construct_UClass_UPCGComputeSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGComputeSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGComputeSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeSourceFactory)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeSourceFactory(UPCGComputeSourceFactory&&) = delete; \
	UPCGComputeSourceFactory(const UPCGComputeSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGComputeSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeSourceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGComputeSourceFactory) \
	NO_API virtual ~UPCGComputeSourceFactory();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeSourceFactory;

// ********** End Class UPCGComputeSourceFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Factories_PCGComputeSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
