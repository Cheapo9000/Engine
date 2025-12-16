// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyManager.h"

#ifdef WATER_BuoyancyManager_generated_h
#error "BuoyancyManager.generated.h already included, missing '#pragma once' in BuoyancyManager.h"
#endif
#define WATER_BuoyancyManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABuoyancyManager;
class UObject;

// ********** Begin Class ABuoyancyManager *********************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBuoyancyComponentManager);


struct Z_Construct_UClass_ABuoyancyManager_Statics;
WATER_API UClass* Z_Construct_UClass_ABuoyancyManager_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_INCLASS \
private: \
	static void StaticRegisterNativesABuoyancyManager(); \
	friend struct ::Z_Construct_UClass_ABuoyancyManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_ABuoyancyManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ABuoyancyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_ABuoyancyManager_NoRegister) \
	DECLARE_SERIALIZER(ABuoyancyManager)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API ABuoyancyManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuoyancyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, ABuoyancyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuoyancyManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABuoyancyManager(ABuoyancyManager&&) = delete; \
	ABuoyancyManager(const ABuoyancyManager&) = delete; \
	WATER_API virtual ~ABuoyancyManager();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABuoyancyManager;

// ********** End Class ABuoyancyManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
