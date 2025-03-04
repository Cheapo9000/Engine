// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolAutoCluster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolAutoCluster_generated_h
#error "FractureToolAutoCluster.generated.h already included, missing '#pragma once' in FractureToolAutoCluster.h"
#endif
#define FRACTUREEDITOR_FractureToolAutoCluster_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureAutoClusterSettings(); \
	friend struct Z_Construct_UClass_UFractureAutoClusterSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureAutoClusterSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureAutoClusterSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureAutoClusterSettings(UFractureAutoClusterSettings&&); \
	UFractureAutoClusterSettings(const UFractureAutoClusterSettings&); \
public: \
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


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureAutoClusterSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolAutoCluster(); \
	friend struct Z_Construct_UClass_UFractureToolAutoCluster_Statics; \
public: \
	DECLARE_CLASS(UFractureToolAutoCluster, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolAutoCluster)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolAutoCluster(UFractureToolAutoCluster&&); \
	UFractureToolAutoCluster(const UFractureToolAutoCluster&); \
public: \
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


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolAutoCluster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h


#define FOREACH_ENUM_EFRACTUREAUTOCLUSTERMODE(op) \
	op(EFractureAutoClusterMode::BoundingBox) \
	op(EFractureAutoClusterMode::Proximity) \
	op(EFractureAutoClusterMode::Distance) \
	op(EFractureAutoClusterMode::Voronoi) 

enum class EFractureAutoClusterMode : uint8;
template<> struct TIsUEnumClass<EFractureAutoClusterMode> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EFractureAutoClusterMode>();

#define FOREACH_ENUM_ECLUSTERSIZEMETHOD(op) \
	op(EClusterSizeMethod::ByNumber) \
	op(EClusterSizeMethod::ByFractionOfInput) \
	op(EClusterSizeMethod::BySize) \
	op(EClusterSizeMethod::ByGrid) 

enum class EClusterSizeMethod : uint8;
template<> struct TIsUEnumClass<EClusterSizeMethod> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EClusterSizeMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
