// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Persistence/BuilderPersistenceManager.h"

#ifdef WIDGETREGISTRATION_BuilderPersistenceManager_generated_h
#error "BuilderPersistenceManager.generated.h already included, missing '#pragma once' in BuilderPersistenceManager.h"
#endif
#define WIDGETREGISTRATION_BuilderPersistenceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPersistedNameArray ***********************************************
struct Z_Construct_UScriptStruct_FPersistedNameArray_Statics;
#define FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPersistedNameArray_Statics; \
	WIDGETREGISTRATION_API static class UScriptStruct* StaticStruct();


struct FPersistedNameArray;
// ********** End ScriptStruct FPersistedNameArray *************************************************

// ********** Begin ScriptStruct FPersistedBool ****************************************************
struct Z_Construct_UScriptStruct_FPersistedBool_Statics;
#define FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPersistedBool_Statics; \
	WIDGETREGISTRATION_API static class UScriptStruct* StaticStruct();


struct FPersistedBool;
// ********** End ScriptStruct FPersistedBool ******************************************************

// ********** Begin Class UBuilderPersistenceManager ***********************************************
struct Z_Construct_UClass_UBuilderPersistenceManager_Statics;
WIDGETREGISTRATION_API UClass* Z_Construct_UClass_UBuilderPersistenceManager_NoRegister();

#define FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuilderPersistenceManager(); \
	friend struct ::Z_Construct_UClass_UBuilderPersistenceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WIDGETREGISTRATION_API UClass* ::Z_Construct_UClass_UBuilderPersistenceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuilderPersistenceManager, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetRegistration"), Z_Construct_UClass_UBuilderPersistenceManager_NoRegister) \
	DECLARE_SERIALIZER(UBuilderPersistenceManager)


#define FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WIDGETREGISTRATION_API UBuilderPersistenceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuilderPersistenceManager(UBuilderPersistenceManager&&) = delete; \
	UBuilderPersistenceManager(const UBuilderPersistenceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WIDGETREGISTRATION_API, UBuilderPersistenceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuilderPersistenceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuilderPersistenceManager) \
	WIDGETREGISTRATION_API virtual ~UBuilderPersistenceManager();


#define FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_44_PROLOG
#define FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuilderPersistenceManager;

// ********** End Class UBuilderPersistenceManager *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_WidgetRegistration_Public_Persistence_BuilderPersistenceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
