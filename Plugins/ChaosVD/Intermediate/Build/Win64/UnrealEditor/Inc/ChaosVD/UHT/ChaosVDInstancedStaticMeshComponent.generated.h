// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChaosVDInstancedStaticMeshComponent.h"

#ifdef CHAOSVD_ChaosVDInstancedStaticMeshComponent_generated_h
#error "ChaosVDInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in ChaosVDInstancedStaticMeshComponent.h"
#endif
#define CHAOSVD_ChaosVDInstancedStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDInstancedStaticMeshComponent *************************************
struct Z_Construct_UClass_UChaosVDInstancedStaticMeshComponent_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDInstancedStaticMeshComponent_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDInstancedStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UChaosVDInstancedStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDInstancedStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDInstancedStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDInstancedStaticMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosVDInstancedStaticMeshComponent*>(this); }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDInstancedStaticMeshComponent(UChaosVDInstancedStaticMeshComponent&&) = delete; \
	UChaosVDInstancedStaticMeshComponent(const UChaosVDInstancedStaticMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDInstancedStaticMeshComponent) \
	NO_API virtual ~UChaosVDInstancedStaticMeshComponent();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h_25_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDInstancedStaticMeshComponent;

// ********** End Class UChaosVDInstancedStaticMeshComponent ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDInstancedStaticMeshComponent_h

// ********** Begin Enum EChaosVDMeshInstanceOperationsFlags ***************************************
#define FOREACH_ENUM_ECHAOSVDMESHINSTANCEOPERATIONSFLAGS(op) \
	op(EChaosVDMeshInstanceOperationsFlags::None) \
	op(EChaosVDMeshInstanceOperationsFlags::Add) \
	op(EChaosVDMeshInstanceOperationsFlags::Remove) \
	op(EChaosVDMeshInstanceOperationsFlags::ColorUpdate) \
	op(EChaosVDMeshInstanceOperationsFlags::SelectionUpdate) \
	op(EChaosVDMeshInstanceOperationsFlags::TransformUpdate) 

enum class EChaosVDMeshInstanceOperationsFlags;
template<> struct TIsUEnumClass<EChaosVDMeshInstanceOperationsFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDMeshInstanceOperationsFlags>();
// ********** End Enum EChaosVDMeshInstanceOperationsFlags *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
