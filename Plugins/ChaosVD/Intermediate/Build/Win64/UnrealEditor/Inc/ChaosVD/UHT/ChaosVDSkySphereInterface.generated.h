// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDSkySphereInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADirectionalLight;
#ifdef CHAOSVD_ChaosVDSkySphereInterface_generated_h
#error "ChaosVDSkySphereInterface.generated.h already included, missing '#pragma once' in ChaosVDSkySphereInterface.h"
#endif
#define CHAOSVD_ChaosVDSkySphereInterface_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Refresh_Implementation() {}; \
	virtual void SetDirectionalLightSource_Implementation(ADirectionalLight* NewLightSource) {}; \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execSetDirectionalLightSource);


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDSkySphereInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDSkySphereInterface(UChaosVDSkySphereInterface&&); \
	UChaosVDSkySphereInterface(const UChaosVDSkySphereInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDSkySphereInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSkySphereInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDSkySphereInterface) \
	NO_API virtual ~UChaosVDSkySphereInterface();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDSkySphereInterface(); \
	friend struct Z_Construct_UClass_UChaosVDSkySphereInterface_Statics; \
public: \
	DECLARE_CLASS(UChaosVDSkySphereInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDSkySphereInterface)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDSkySphereInterface() {} \
public: \
	typedef UChaosVDSkySphereInterface UClassType; \
	typedef IChaosVDSkySphereInterface ThisClass; \
	static void Execute_Refresh(UObject* O); \
	static void Execute_SetDirectionalLightSource(UObject* O, ADirectionalLight* NewLightSource); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_10_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDSkySphereInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDSkySphereInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
