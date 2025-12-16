// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/MeshTopologySelectionMechanic.h"

#ifdef MODELINGCOMPONENTS_MeshTopologySelectionMechanic_generated_h
#error "MeshTopologySelectionMechanic.generated.h already included, missing '#pragma once' in MeshTopologySelectionMechanic.h"
#endif
#define MODELINGCOMPONENTS_MeshTopologySelectionMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshTopologySelectionMechanicProperties *********************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectAll); \
	DECLARE_FUNCTION(execInvertSelection);


struct Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshTopologySelectionMechanicProperties(); \
	friend struct ::Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshTopologySelectionMechanicProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshTopologySelectionMechanicProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UMeshTopologySelectionMechanicProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshTopologySelectionMechanicProperties(UMeshTopologySelectionMechanicProperties&&) = delete; \
	UMeshTopologySelectionMechanicProperties(const UMeshTopologySelectionMechanicProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UMeshTopologySelectionMechanicProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshTopologySelectionMechanicProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshTopologySelectionMechanicProperties) \
	MODELINGCOMPONENTS_API virtual ~UMeshTopologySelectionMechanicProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshTopologySelectionMechanicProperties;

// ********** End Class UMeshTopologySelectionMechanicProperties ***********************************

// ********** Begin Class UMeshTopologySelectionMechanic *******************************************
struct Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshTopologySelectionMechanic(); \
	friend struct ::Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshTopologySelectionMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister) \
	DECLARE_SERIALIZER(UMeshTopologySelectionMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UMeshTopologySelectionMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshTopologySelectionMechanic(UMeshTopologySelectionMechanic&&) = delete; \
	UMeshTopologySelectionMechanic(const UMeshTopologySelectionMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UMeshTopologySelectionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshTopologySelectionMechanic); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMeshTopologySelectionMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_126_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshTopologySelectionMechanic;

// ********** End Class UMeshTopologySelectionMechanic *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h

// ********** Begin Enum EMarqueeSelectionUpdateType ***********************************************
#define FOREACH_ENUM_EMARQUEESELECTIONUPDATETYPE(op) \
	op(EMarqueeSelectionUpdateType::OnDrag) \
	op(EMarqueeSelectionUpdateType::OnTickAndRelease) \
	op(EMarqueeSelectionUpdateType::OnRelease) 

enum class EMarqueeSelectionUpdateType;
template<> struct TIsUEnumClass<EMarqueeSelectionUpdateType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMarqueeSelectionUpdateType>();
// ********** End Enum EMarqueeSelectionUpdateType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
