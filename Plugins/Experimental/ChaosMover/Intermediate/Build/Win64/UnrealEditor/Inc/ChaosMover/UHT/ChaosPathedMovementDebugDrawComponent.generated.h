// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/PathedMovement/ChaosPathedMovementDebugDrawComponent.h"

#ifdef CHAOSMOVER_ChaosPathedMovementDebugDrawComponent_generated_h
#error "ChaosPathedMovementDebugDrawComponent.generated.h already included, missing '#pragma once' in ChaosPathedMovementDebugDrawComponent.h"
#endif
#define CHAOSMOVER_ChaosPathedMovementDebugDrawComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;

// ********** Begin Interface UChaosPathedMovementDebugDrawInterface *******************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UMaterialInterface* GetProgressPreviewMeshMaterial_Implementation() const { return NULL; }; \
	virtual float GetPreviewMeshOverallPathProgress_Implementation() const { return 0; }; \
	virtual bool ShouldDisplayProgressPreviewMesh_Implementation() const { return false; }; \
	DECLARE_FUNCTION(execGetProgressPreviewMeshMaterial); \
	DECLARE_FUNCTION(execGetPreviewMeshOverallPathProgress); \
	DECLARE_FUNCTION(execShouldDisplayProgressPreviewMesh);


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UChaosPathedMovementDebugDrawInterface_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosPathedMovementDebugDrawInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMOVER_API UChaosPathedMovementDebugDrawInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosPathedMovementDebugDrawInterface(UChaosPathedMovementDebugDrawInterface&&) = delete; \
	UChaosPathedMovementDebugDrawInterface(const UChaosPathedMovementDebugDrawInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosPathedMovementDebugDrawInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPathedMovementDebugDrawInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosPathedMovementDebugDrawInterface) \
	virtual ~UChaosPathedMovementDebugDrawInterface() = default;


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosPathedMovementDebugDrawInterface(); \
	friend struct ::Z_Construct_UClass_UChaosPathedMovementDebugDrawInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosPathedMovementDebugDrawInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosPathedMovementDebugDrawInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosPathedMovementDebugDrawInterface_NoRegister) \
	DECLARE_SERIALIZER(UChaosPathedMovementDebugDrawInterface)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosPathedMovementDebugDrawInterface() {} \
public: \
	typedef UChaosPathedMovementDebugDrawInterface UClassType; \
	typedef IChaosPathedMovementDebugDrawInterface ThisClass; \
	static float Execute_GetPreviewMeshOverallPathProgress(const UObject* O); \
	static UMaterialInterface* Execute_GetProgressPreviewMeshMaterial(const UObject* O); \
	static bool Execute_ShouldDisplayProgressPreviewMesh(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosPathedMovementDebugDrawInterface;

// ********** End Interface UChaosPathedMovementDebugDrawInterface *********************************

// ********** Begin Class UChaosPathedMovementDebugDrawComponent ***********************************
struct Z_Construct_UClass_UChaosPathedMovementDebugDrawComponent_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosPathedMovementDebugDrawComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosPathedMovementDebugDrawComponent(); \
	friend struct ::Z_Construct_UClass_UChaosPathedMovementDebugDrawComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosPathedMovementDebugDrawComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosPathedMovementDebugDrawComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosPathedMovementDebugDrawComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosPathedMovementDebugDrawComponent)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosPathedMovementDebugDrawComponent(UChaosPathedMovementDebugDrawComponent&&) = delete; \
	UChaosPathedMovementDebugDrawComponent(const UChaosPathedMovementDebugDrawComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosPathedMovementDebugDrawComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPathedMovementDebugDrawComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosPathedMovementDebugDrawComponent) \
	NO_API virtual ~UChaosPathedMovementDebugDrawComponent();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosPathedMovementDebugDrawComponent;

// ********** End Class UChaosPathedMovementDebugDrawComponent *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementDebugDrawComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
