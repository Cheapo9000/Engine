// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerNetDriver.h"

#ifdef MULTISERVERREPLICATION_MultiServerNetDriver_generated_h
#error "MultiServerNetDriver.generated.h already included, missing '#pragma once' in MultiServerNetDriver.h"
#endif
#define MULTISERVERREPLICATION_MultiServerNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMultiServerNetDriver ****************************************************
struct Z_Construct_UClass_UMultiServerNetDriver_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UMultiServerNetDriver_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiServerNetDriver(); \
	friend struct ::Z_Construct_UClass_UMultiServerNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UMultiServerNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiServerNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UMultiServerNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UMultiServerNetDriver)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiServerNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiServerNetDriver(UMultiServerNetDriver&&) = delete; \
	UMultiServerNetDriver(const UMultiServerNetDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiServerNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiServerNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiServerNetDriver) \
	NO_API virtual ~UMultiServerNetDriver();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiServerNetDriver;

// ********** End Class UMultiServerNetDriver ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
