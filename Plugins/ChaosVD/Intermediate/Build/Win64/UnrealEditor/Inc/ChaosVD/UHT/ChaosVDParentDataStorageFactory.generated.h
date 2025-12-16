// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TEDS/ChaosVDParentDataStorageFactory.h"

#ifdef CHAOSVD_ChaosVDParentDataStorageFactory_generated_h
#error "ChaosVDParentDataStorageFactory.generated.h already included, missing '#pragma once' in ChaosVDParentDataStorageFactory.h"
#endif
#define CHAOSVD_ChaosVDParentDataStorageFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDTableRowParentColumn **************************************
struct Z_Construct_UScriptStruct_FChaosVDTableRowParentColumn_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDTableRowParentColumn_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


struct FChaosVDTableRowParentColumn;
// ********** End ScriptStruct FChaosVDTableRowParentColumn ****************************************

// ********** Begin Class UChaosVDParentDataStorageFactory *****************************************
struct Z_Construct_UClass_UChaosVDParentDataStorageFactory_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDParentDataStorageFactory_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDParentDataStorageFactory(); \
	friend struct ::Z_Construct_UClass_UChaosVDParentDataStorageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDParentDataStorageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDParentDataStorageFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDParentDataStorageFactory_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDParentDataStorageFactory)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDParentDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDParentDataStorageFactory(UChaosVDParentDataStorageFactory&&) = delete; \
	UChaosVDParentDataStorageFactory(const UChaosVDParentDataStorageFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDParentDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDParentDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDParentDataStorageFactory)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_25_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDParentDataStorageFactory;

// ********** End Class UChaosVDParentDataStorageFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParentDataStorageFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
