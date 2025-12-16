// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGDataAsset.h"

#ifdef PCG_PCGDataAsset_generated_h
#error "PCGDataAsset.generated.h already included, missing '#pragma once' in PCGDataAsset.h"
#endif
#define PCG_PCGDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataAsset ************************************************************
struct Z_Construct_UClass_UPCGDataAsset_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataAsset_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataAsset(); \
	friend struct ::Z_Construct_UClass_UPCGDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataAsset)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataAsset(UPCGDataAsset&&) = delete; \
	UPCGDataAsset(const UPCGDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataAsset) \
	PCG_API virtual ~UPCGDataAsset();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataAsset;

// ********** End Class UPCGDataAsset **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
