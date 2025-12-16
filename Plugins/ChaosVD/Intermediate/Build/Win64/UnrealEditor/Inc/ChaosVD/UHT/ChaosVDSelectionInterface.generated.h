// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TEDS/ChaosVDSelectionInterface.h"

#ifdef CHAOSVD_ChaosVDSelectionInterface_generated_h
#error "ChaosVDSelectionInterface.generated.h already included, missing '#pragma once' in ChaosVDSelectionInterface.h"
#endif
#define CHAOSVD_ChaosVDSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDSelectionInterface ***********************************************
struct Z_Construct_UClass_UChaosVDSelectionInterface_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDSelectionInterface_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UChaosVDSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDSelectionInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDSelectionInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosVDSelectionInterface*>(this); }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVD_API UChaosVDSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDSelectionInterface(UChaosVDSelectionInterface&&) = delete; \
	UChaosVDSelectionInterface(const UChaosVDSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVD_API, UChaosVDSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDSelectionInterface) \
	CHAOSVD_API virtual ~UChaosVDSelectionInterface();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h_12_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDSelectionInterface;

// ********** End Class UChaosVDSelectionInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_TEDS_ChaosVDSelectionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
