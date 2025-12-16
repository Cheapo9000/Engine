// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolAutoCluster.h"

#ifdef FRACTUREEDITOR_FractureToolAutoCluster_generated_h
#error "FractureToolAutoCluster.generated.h already included, missing '#pragma once' in FractureToolAutoCluster.h"
#endif
#define FRACTUREEDITOR_FractureToolAutoCluster_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureAutoClusterSettings *********************************************
struct Z_Construct_UClass_UFractureAutoClusterSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureAutoClusterSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureAutoClusterSettings(); \
	friend struct ::Z_Construct_UClass_UFractureAutoClusterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureAutoClusterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureAutoClusterSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureAutoClusterSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureAutoClusterSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureAutoClusterSettings(UFractureAutoClusterSettings&&) = delete; \
	UFractureAutoClusterSettings(const UFractureAutoClusterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureAutoClusterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureAutoClusterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureAutoClusterSettings) \
	NO_API virtual ~UFractureAutoClusterSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureAutoClusterSettings;

// ********** End Class UFractureAutoClusterSettings ***********************************************

// ********** Begin Class UFractureToolAutoCluster *************************************************
struct Z_Construct_UClass_UFractureToolAutoCluster_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolAutoCluster_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolAutoCluster(); \
	friend struct ::Z_Construct_UClass_UFractureToolAutoCluster_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureToolAutoCluster_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureToolAutoCluster, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureToolAutoCluster_NoRegister) \
	DECLARE_SERIALIZER(UFractureToolAutoCluster)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureToolAutoCluster(UFractureToolAutoCluster&&) = delete; \
	UFractureToolAutoCluster(const UFractureToolAutoCluster&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolAutoCluster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolAutoCluster); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolAutoCluster) \
	NO_API virtual ~UFractureToolAutoCluster();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_115_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureToolAutoCluster;

// ********** End Class UFractureToolAutoCluster ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h

// ********** Begin Enum EFractureAutoClusterMode **************************************************
#define FOREACH_ENUM_EFRACTUREAUTOCLUSTERMODE(op) \
	op(EFractureAutoClusterMode::BoundingBox) \
	op(EFractureAutoClusterMode::Proximity) \
	op(EFractureAutoClusterMode::Distance) \
	op(EFractureAutoClusterMode::Voronoi) 

enum class EFractureAutoClusterMode : uint8;
template<> struct TIsUEnumClass<EFractureAutoClusterMode> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFractureAutoClusterMode>();
// ********** End Enum EFractureAutoClusterMode ****************************************************

// ********** Begin Enum EClusterSizeMethod ********************************************************
#define FOREACH_ENUM_ECLUSTERSIZEMETHOD(op) \
	op(EClusterSizeMethod::ByNumber) \
	op(EClusterSizeMethod::ByFractionOfInput) \
	op(EClusterSizeMethod::BySize) \
	op(EClusterSizeMethod::ByGrid) 

enum class EClusterSizeMethod : uint8;
template<> struct TIsUEnumClass<EClusterSizeMethod> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EClusterSizeMethod>();
// ********** End Enum EClusterSizeMethod **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
