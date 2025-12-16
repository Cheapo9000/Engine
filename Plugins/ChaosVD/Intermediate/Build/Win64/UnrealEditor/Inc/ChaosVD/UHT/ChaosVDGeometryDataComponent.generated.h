// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDGeometryDataComponent.h"

#ifdef CHAOSVD_ChaosVDGeometryDataComponent_generated_h
#error "ChaosVDGeometryDataComponent.generated.h already included, missing '#pragma once' in ChaosVDGeometryDataComponent.h"
#endif
#define CHAOSVD_ChaosVDGeometryDataComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDImplicitObjectBasicView ***********************************
struct Z_Construct_UScriptStruct_FChaosVDImplicitObjectBasicView_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDImplicitObjectBasicView_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


struct FChaosVDImplicitObjectBasicView;
// ********** End ScriptStruct FChaosVDImplicitObjectBasicView *************************************

// ********** Begin ScriptStruct FChaosVDMeshDataInstanceState *************************************
struct Z_Construct_UScriptStruct_FChaosVDMeshDataInstanceState_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDMeshDataInstanceState_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


struct FChaosVDMeshDataInstanceState;
// ********** End ScriptStruct FChaosVDMeshDataInstanceState ***************************************

// ********** Begin Interface UChaosVDGeometryComponent ********************************************
struct Z_Construct_UClass_UChaosVDGeometryComponent_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDGeometryComponent_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDGeometryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDGeometryComponent(UChaosVDGeometryComponent&&) = delete; \
	UChaosVDGeometryComponent(const UChaosVDGeometryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDGeometryComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDGeometryComponent) \
	virtual ~UChaosVDGeometryComponent() = default;


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDGeometryComponent(); \
	friend struct ::Z_Construct_UClass_UChaosVDGeometryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDGeometryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDGeometryComponent, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDGeometryComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDGeometryComponent)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDGeometryComponent() {} \
public: \
	typedef UChaosVDGeometryComponent UClassType; \
	typedef IChaosVDGeometryComponent ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_283_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_295_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h_286_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDGeometryComponent;

// ********** End Interface UChaosVDGeometryComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDGeometryDataComponent_h

// ********** Begin Enum EChaosVDMaterialType ******************************************************
#define FOREACH_ENUM_ECHAOSVDMATERIALTYPE(op) \
	op(EChaosVDMaterialType::SMOpaque) \
	op(EChaosVDMaterialType::SMTranslucent) \
	op(EChaosVDMaterialType::ISMCOpaque) \
	op(EChaosVDMaterialType::ISMCTranslucent) 

enum class EChaosVDMaterialType;
template<> struct TIsUEnumClass<EChaosVDMaterialType> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDMaterialType>();
// ********** End Enum EChaosVDMaterialType ********************************************************

// ********** Begin Enum EChaosVDMeshComponent *****************************************************
#define FOREACH_ENUM_ECHAOSVDMESHCOMPONENT(op) \
	op(EChaosVDMeshComponent::Invalid) \
	op(EChaosVDMeshComponent::Static) \
	op(EChaosVDMeshComponent::InstancedStatic) \
	op(EChaosVDMeshComponent::Dynamic) 

enum class EChaosVDMeshComponent;
template<> struct TIsUEnumClass<EChaosVDMeshComponent> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDMeshComponent>();
// ********** End Enum EChaosVDMeshComponent *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
