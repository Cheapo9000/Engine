// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/MLAdapterNoRPCManager.h"

#ifdef MLADAPTER_MLAdapterNoRPCManager_generated_h
#error "MLAdapterNoRPCManager.generated.h already included, missing '#pragma once' in MLAdapterNoRPCManager.h"
#endif
#define MLADAPTER_MLAdapterNoRPCManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMLAdapterNoRPCManager ***************************************************
struct Z_Construct_UClass_UMLAdapterNoRPCManager_Statics;
MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterNoRPCManager_NoRegister();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterNoRPCManager(); \
	friend struct ::Z_Construct_UClass_UMLAdapterNoRPCManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLADAPTER_API UClass* ::Z_Construct_UClass_UMLAdapterNoRPCManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLAdapterNoRPCManager, UMLAdapterManager, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MLAdapter"), Z_Construct_UClass_UMLAdapterNoRPCManager_NoRegister) \
	DECLARE_SERIALIZER(UMLAdapterNoRPCManager)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterNoRPCManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLAdapterNoRPCManager(UMLAdapterNoRPCManager&&) = delete; \
	UMLAdapterNoRPCManager(const UMLAdapterNoRPCManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterNoRPCManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterNoRPCManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterNoRPCManager) \
	NO_API virtual ~UMLAdapterNoRPCManager();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_13_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLAdapterNoRPCManager;

// ********** End Class UMLAdapterNoRPCManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
