// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChaosVDStaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDStaticMeshComponent_generated_h
#error "ChaosVDStaticMeshComponent.generated.h already included, missing '#pragma once' in ChaosVDStaticMeshComponent.h"
#endif
#define CHAOSVD_ChaosVDStaticMeshComponent_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UChaosVDStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosVDStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), CHAOSVD_API) \
	DECLARE_SERIALIZER(UChaosVDStaticMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosVDStaticMeshComponent*>(this); }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDStaticMeshComponent(UChaosVDStaticMeshComponent&&); \
	UChaosVDStaticMeshComponent(const UChaosVDStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVD_API, UChaosVDStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDStaticMeshComponent) \
	CHAOSVD_API virtual ~UChaosVDStaticMeshComponent();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h_11_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
