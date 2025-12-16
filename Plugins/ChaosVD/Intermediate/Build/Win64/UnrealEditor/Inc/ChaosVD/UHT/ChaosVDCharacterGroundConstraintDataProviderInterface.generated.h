// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDCharacterGroundConstraintDataProviderInterface.h"

#ifdef CHAOSVD_ChaosVDCharacterGroundConstraintDataProviderInterface_generated_h
#error "ChaosVDCharacterGroundConstraintDataProviderInterface.generated.h already included, missing '#pragma once' in ChaosVDCharacterGroundConstraintDataProviderInterface.h"
#endif
#define CHAOSVD_ChaosVDCharacterGroundConstraintDataProviderInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChaosVDCharacterGroundConstraintDataProviderInterface ***************
struct Z_Construct_UClass_UChaosVDCharacterGroundConstraintDataProviderInterface_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDCharacterGroundConstraintDataProviderInterface_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDCharacterGroundConstraintDataProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDCharacterGroundConstraintDataProviderInterface(UChaosVDCharacterGroundConstraintDataProviderInterface&&) = delete; \
	UChaosVDCharacterGroundConstraintDataProviderInterface(const UChaosVDCharacterGroundConstraintDataProviderInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDCharacterGroundConstraintDataProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDCharacterGroundConstraintDataProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDCharacterGroundConstraintDataProviderInterface) \
	virtual ~UChaosVDCharacterGroundConstraintDataProviderInterface() = default;


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDCharacterGroundConstraintDataProviderInterface(); \
	friend struct ::Z_Construct_UClass_UChaosVDCharacterGroundConstraintDataProviderInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDCharacterGroundConstraintDataProviderInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDCharacterGroundConstraintDataProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDCharacterGroundConstraintDataProviderInterface_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDCharacterGroundConstraintDataProviderInterface)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDCharacterGroundConstraintDataProviderInterface() {} \
public: \
	typedef UChaosVDCharacterGroundConstraintDataProviderInterface UClassType; \
	typedef IChaosVDCharacterGroundConstraintDataProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_11_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDCharacterGroundConstraintDataProviderInterface;

// ********** End Interface UChaosVDCharacterGroundConstraintDataProviderInterface *****************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDCharacterGroundConstraintDataProviderInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
