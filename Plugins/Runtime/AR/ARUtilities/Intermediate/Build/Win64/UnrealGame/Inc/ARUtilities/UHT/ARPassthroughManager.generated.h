// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARPassthroughManager.h"

#ifdef ARUTILITIES_ARPassthroughManager_generated_h
#error "ARPassthroughManager.generated.h already included, missing '#pragma once' in ARPassthroughManager.h"
#endif
#define ARUTILITIES_ARPassthroughManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPassthroughMaterialUpdateComponent;

// ********** Begin Class AARPassthroughManager ****************************************************
#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPassthroughMaterialUpdateComponent);


struct Z_Construct_UClass_AARPassthroughManager_Statics;
ARUTILITIES_API UClass* Z_Construct_UClass_AARPassthroughManager_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAARPassthroughManager(); \
	friend struct ::Z_Construct_UClass_AARPassthroughManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARUTILITIES_API UClass* ::Z_Construct_UClass_AARPassthroughManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AARPassthroughManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARUtilities"), Z_Construct_UClass_AARPassthroughManager_NoRegister) \
	DECLARE_SERIALIZER(AARPassthroughManager)


#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPassthroughManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPassthroughManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPassthroughManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPassthroughManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AARPassthroughManager(AARPassthroughManager&&) = delete; \
	AARPassthroughManager(const AARPassthroughManager&) = delete; \
	NO_API virtual ~AARPassthroughManager();


#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AARPassthroughManager;

// ********** End Class AARPassthroughManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
