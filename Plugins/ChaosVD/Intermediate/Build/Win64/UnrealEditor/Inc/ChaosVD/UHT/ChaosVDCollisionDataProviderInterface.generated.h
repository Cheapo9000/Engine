// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDCollisionDataProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDCollisionDataProviderInterface_generated_h
#error "ChaosVDCollisionDataProviderInterface.generated.h already included, missing '#pragma once' in ChaosVDCollisionDataProviderInterface.h"
#endif
#define CHAOSVD_ChaosVDCollisionDataProviderInterface_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDCollisionDataProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDCollisionDataProviderInterface(UChaosVDCollisionDataProviderInterface&&); \
	UChaosVDCollisionDataProviderInterface(const UChaosVDCollisionDataProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDCollisionDataProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDCollisionDataProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDCollisionDataProviderInterface) \
	NO_API virtual ~UChaosVDCollisionDataProviderInterface();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDCollisionDataProviderInterface(); \
	friend struct Z_Construct_UClass_UChaosVDCollisionDataProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UChaosVDCollisionDataProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDCollisionDataProviderInterface)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDCollisionDataProviderInterface() {} \
public: \
	typedef UChaosVDCollisionDataProviderInterface UClassType; \
	typedef IChaosVDCollisionDataProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_13_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDCollisionDataProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDCollisionDataProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
