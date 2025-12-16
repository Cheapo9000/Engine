// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TEDS/ChaosVDParticleEditorDataFactory.h"

#ifdef CHAOSVD_ChaosVDParticleEditorDataFactory_generated_h
#error "ChaosVDParticleEditorDataFactory.generated.h already included, missing '#pragma once' in ChaosVDParticleEditorDataFactory.h"
#endif
#define CHAOSVD_ChaosVDParticleEditorDataFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDObjectDataTag *********************************************
struct Z_Construct_UScriptStruct_FChaosVDObjectDataTag_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDObjectDataTag_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


struct FChaosVDObjectDataTag;
// ********** End ScriptStruct FChaosVDObjectDataTag ***********************************************

// ********** Begin ScriptStruct FTypedElementFromCVDWorldTag **************************************
struct Z_Construct_UScriptStruct_FTypedElementFromCVDWorldTag_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypedElementFromCVDWorldTag_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


struct FTypedElementFromCVDWorldTag;
// ********** End ScriptStruct FTypedElementFromCVDWorldTag ****************************************

// ********** Begin ScriptStruct FChaosVDActiveObjectTag *******************************************
struct Z_Construct_UScriptStruct_FChaosVDActiveObjectTag_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDActiveObjectTag_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


struct FChaosVDActiveObjectTag;
// ********** End ScriptStruct FChaosVDActiveObjectTag *********************************************

// ********** Begin Class UChaosVDParticleEditorDataFactory ****************************************
struct Z_Construct_UClass_UChaosVDParticleEditorDataFactory_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDParticleEditorDataFactory_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDParticleEditorDataFactory(); \
	friend struct ::Z_Construct_UClass_UChaosVDParticleEditorDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDParticleEditorDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDParticleEditorDataFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDParticleEditorDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDParticleEditorDataFactory)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDParticleEditorDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDParticleEditorDataFactory(UChaosVDParticleEditorDataFactory&&) = delete; \
	UChaosVDParticleEditorDataFactory(const UChaosVDParticleEditorDataFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDParticleEditorDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDParticleEditorDataFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDParticleEditorDataFactory)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_40_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDParticleEditorDataFactory;

// ********** End Class UChaosVDParticleEditorDataFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_TEDS_ChaosVDParticleEditorDataFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
