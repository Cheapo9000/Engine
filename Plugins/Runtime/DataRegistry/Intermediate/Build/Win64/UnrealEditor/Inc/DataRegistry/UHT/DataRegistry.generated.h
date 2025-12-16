// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistry.h"

#ifdef DATAREGISTRY_DataRegistry_generated_h
#error "DataRegistry.generated.h already included, missing '#pragma once' in DataRegistry.h"
#endif
#define DATAREGISTRY_DataRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataRegistry ************************************************************
struct Z_Construct_UClass_UDataRegistry_Statics;
DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistry_NoRegister();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataRegistry(); \
	friend struct ::Z_Construct_UClass_UDataRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAREGISTRY_API UClass* ::Z_Construct_UClass_UDataRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataRegistry"), Z_Construct_UClass_UDataRegistry_NoRegister) \
	DECLARE_SERIALIZER(UDataRegistry)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataRegistry(UDataRegistry&&) = delete; \
	UDataRegistry(const UDataRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAREGISTRY_API, UDataRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataRegistry)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataRegistry;

// ********** End Class UDataRegistry **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
