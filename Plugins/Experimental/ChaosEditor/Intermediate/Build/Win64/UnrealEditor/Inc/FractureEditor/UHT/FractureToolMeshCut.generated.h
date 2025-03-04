// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolMeshCut.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolMeshCut_generated_h
#error "FractureToolMeshCut.generated.h already included, missing '#pragma once' in FractureToolMeshCut.h"
#endif
#define FRACTUREEDITOR_FractureToolMeshCut_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureMeshCutSettings(); \
	friend struct Z_Construct_UClass_UFractureMeshCutSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureMeshCutSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureMeshCutSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureMeshCutSettings(UFractureMeshCutSettings&&); \
	UFractureMeshCutSettings(const UFractureMeshCutSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureMeshCutSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureMeshCutSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureMeshCutSettings) \
	NO_API virtual ~UFractureMeshCutSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureMeshCutSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolMeshCut(); \
	friend struct Z_Construct_UClass_UFractureToolMeshCut_Statics; \
public: \
	DECLARE_CLASS(UFractureToolMeshCut, UFractureToolCutterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolMeshCut)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolMeshCut(UFractureToolMeshCut&&); \
	UFractureToolMeshCut(const UFractureToolMeshCut&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolMeshCut); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolMeshCut); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolMeshCut) \
	NO_API virtual ~UFractureToolMeshCut();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_90_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolMeshCut>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h


#define FOREACH_ENUM_EMESHCUTDISTRIBUTION(op) \
	op(EMeshCutDistribution::SingleCut) \
	op(EMeshCutDistribution::UniformRandom) \
	op(EMeshCutDistribution::Grid) 

enum class EMeshCutDistribution;
template<> struct TIsUEnumClass<EMeshCutDistribution> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EMeshCutDistribution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
