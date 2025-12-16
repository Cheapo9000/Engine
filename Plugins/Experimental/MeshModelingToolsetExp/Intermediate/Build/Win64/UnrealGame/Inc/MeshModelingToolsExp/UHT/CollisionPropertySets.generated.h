// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/CollisionPropertySets.h"

#ifdef MESHMODELINGTOOLSEXP_CollisionPropertySets_generated_h
#error "CollisionPropertySets.generated.h already included, missing '#pragma once' in CollisionPropertySets.h"
#endif
#define MESHMODELINGTOOLSEXP_CollisionPropertySets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicsSphereData ************************************************
struct Z_Construct_UScriptStruct_FPhysicsSphereData_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsSphereData_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FPhysicsSphereData;
// ********** End ScriptStruct FPhysicsSphereData **************************************************

// ********** Begin ScriptStruct FPhysicsBoxData ***************************************************
struct Z_Construct_UScriptStruct_FPhysicsBoxData_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsBoxData_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FPhysicsBoxData;
// ********** End ScriptStruct FPhysicsBoxData *****************************************************

// ********** Begin ScriptStruct FPhysicsCapsuleData ***********************************************
struct Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FPhysicsCapsuleData;
// ********** End ScriptStruct FPhysicsCapsuleData *************************************************

// ********** Begin ScriptStruct FPhysicsConvexData ************************************************
struct Z_Construct_UScriptStruct_FPhysicsConvexData_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsConvexData_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FPhysicsConvexData;
// ********** End ScriptStruct FPhysicsConvexData **************************************************

// ********** Begin ScriptStruct FPhysicsLevelSetData **********************************************
struct Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FPhysicsLevelSetData;
// ********** End ScriptStruct FPhysicsLevelSetData ************************************************

// ********** Begin Class UPhysicsObjectToolPropertySet ********************************************
struct Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsObjectToolPropertySet(); \
	friend struct ::Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsObjectToolPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsObjectToolPropertySet)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UPhysicsObjectToolPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsObjectToolPropertySet(UPhysicsObjectToolPropertySet&&) = delete; \
	UPhysicsObjectToolPropertySet(const UPhysicsObjectToolPropertySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UPhysicsObjectToolPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsObjectToolPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsObjectToolPropertySet) \
	MESHMODELINGTOOLSEXP_API virtual ~UPhysicsObjectToolPropertySet();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsObjectToolPropertySet;

// ********** End Class UPhysicsObjectToolPropertySet **********************************************

// ********** Begin Class UCollisionGeometryVisualizationProperties ********************************
struct Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionGeometryVisualizationProperties(); \
	friend struct ::Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UCollisionGeometryVisualizationProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister) \
	DECLARE_SERIALIZER(UCollisionGeometryVisualizationProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UCollisionGeometryVisualizationProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCollisionGeometryVisualizationProperties(UCollisionGeometryVisualizationProperties&&) = delete; \
	UCollisionGeometryVisualizationProperties(const UCollisionGeometryVisualizationProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UCollisionGeometryVisualizationProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionGeometryVisualizationProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionGeometryVisualizationProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UCollisionGeometryVisualizationProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_143_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCollisionGeometryVisualizationProperties;

// ********** End Class UCollisionGeometryVisualizationProperties **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h

// ********** Begin Enum ECollisionGeometryMode ****************************************************
#define FOREACH_ENUM_ECOLLISIONGEOMETRYMODE(op) \
	op(ECollisionGeometryMode::Default) \
	op(ECollisionGeometryMode::SimpleAndComplex) \
	op(ECollisionGeometryMode::UseSimpleAsComplex) \
	op(ECollisionGeometryMode::UseComplexAsSimple) 

enum class ECollisionGeometryMode;
template<> struct TIsUEnumClass<ECollisionGeometryMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_NON_ATTRIBUTED_API UEnum* StaticEnum<ECollisionGeometryMode>();
// ********** End Enum ECollisionGeometryMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
