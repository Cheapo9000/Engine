// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/RemeshProperties.h"

#ifdef MESHMODELINGTOOLS_RemeshProperties_generated_h
#error "RemeshProperties.generated.h already included, missing '#pragma once' in RemeshProperties.h"
#endif
#define MESHMODELINGTOOLS_RemeshProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshConstraintProperties ************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPreventTinyTrianglesEnabled); \
	DECLARE_FUNCTION(execIsPreventNormalFlipsEnabled);


struct Z_Construct_UClass_UMeshConstraintProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshConstraintProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshConstraintProperties(); \
	friend struct ::Z_Construct_UClass_UMeshConstraintProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMeshConstraintProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshConstraintProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMeshConstraintProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshConstraintProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMeshConstraintProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshConstraintProperties(UMeshConstraintProperties&&) = delete; \
	UMeshConstraintProperties(const UMeshConstraintProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMeshConstraintProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshConstraintProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshConstraintProperties) \
	MESHMODELINGTOOLS_API virtual ~UMeshConstraintProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshConstraintProperties;

// ********** End Class UMeshConstraintProperties **************************************************

// ********** Begin Class URemeshProperties ********************************************************
struct Z_Construct_UClass_URemeshProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URemeshProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemeshProperties(); \
	friend struct ::Z_Construct_UClass_URemeshProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_URemeshProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(URemeshProperties, UMeshConstraintProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_URemeshProperties_NoRegister) \
	DECLARE_SERIALIZER(URemeshProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API URemeshProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemeshProperties(URemeshProperties&&) = delete; \
	URemeshProperties(const URemeshProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, URemeshProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemeshProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemeshProperties) \
	MESHMODELINGTOOLS_API virtual ~URemeshProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_79_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemeshProperties;

// ********** End Class URemeshProperties **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h

// ********** Begin Enum EMeshBoundaryConstraint ***************************************************
#define FOREACH_ENUM_EMESHBOUNDARYCONSTRAINT(op) \
	op(EMeshBoundaryConstraint::Fixed) \
	op(EMeshBoundaryConstraint::Refine) \
	op(EMeshBoundaryConstraint::Free) 

enum class EMeshBoundaryConstraint : uint8;
template<> struct TIsUEnumClass<EMeshBoundaryConstraint> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshBoundaryConstraint>();
// ********** End Enum EMeshBoundaryConstraint *****************************************************

// ********** Begin Enum EGroupBoundaryConstraint **************************************************
#define FOREACH_ENUM_EGROUPBOUNDARYCONSTRAINT(op) \
	op(EGroupBoundaryConstraint::Fixed) \
	op(EGroupBoundaryConstraint::Refine) \
	op(EGroupBoundaryConstraint::Free) \
	op(EGroupBoundaryConstraint::Ignore) 

enum class EGroupBoundaryConstraint : uint8;
template<> struct TIsUEnumClass<EGroupBoundaryConstraint> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroupBoundaryConstraint>();
// ********** End Enum EGroupBoundaryConstraint ****************************************************

// ********** Begin Enum EMaterialBoundaryConstraint ***********************************************
#define FOREACH_ENUM_EMATERIALBOUNDARYCONSTRAINT(op) \
	op(EMaterialBoundaryConstraint::Fixed) \
	op(EMaterialBoundaryConstraint::Refine) \
	op(EMaterialBoundaryConstraint::Free) \
	op(EMaterialBoundaryConstraint::Ignore) 

enum class EMaterialBoundaryConstraint : uint8;
template<> struct TIsUEnumClass<EMaterialBoundaryConstraint> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialBoundaryConstraint>();
// ********** End Enum EMaterialBoundaryConstraint *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
