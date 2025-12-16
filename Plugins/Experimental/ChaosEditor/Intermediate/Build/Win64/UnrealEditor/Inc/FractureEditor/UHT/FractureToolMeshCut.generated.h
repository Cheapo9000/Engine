// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolMeshCut.h"

#ifdef FRACTUREEDITOR_FractureToolMeshCut_generated_h
#error "FractureToolMeshCut.generated.h already included, missing '#pragma once' in FractureToolMeshCut.h"
#endif
#define FRACTUREEDITOR_FractureToolMeshCut_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureMeshCutSettings *************************************************
struct Z_Construct_UClass_UFractureMeshCutSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureMeshCutSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureMeshCutSettings(); \
	friend struct ::Z_Construct_UClass_UFractureMeshCutSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureMeshCutSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureMeshCutSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureMeshCutSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureMeshCutSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureMeshCutSettings(UFractureMeshCutSettings&&) = delete; \
	UFractureMeshCutSettings(const UFractureMeshCutSettings&) = delete; \
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


class UFractureMeshCutSettings;

// ********** End Class UFractureMeshCutSettings ***************************************************

// ********** Begin Class UFractureToolMeshCut *****************************************************
struct Z_Construct_UClass_UFractureToolMeshCut_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMeshCut_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolMeshCut(); \
	friend struct ::Z_Construct_UClass_UFractureToolMeshCut_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureToolMeshCut_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureToolMeshCut, UFractureToolCutterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureToolMeshCut_NoRegister) \
	DECLARE_SERIALIZER(UFractureToolMeshCut)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureToolMeshCut(UFractureToolMeshCut&&) = delete; \
	UFractureToolMeshCut(const UFractureToolMeshCut&) = delete; \
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


class UFractureToolMeshCut;

// ********** End Class UFractureToolMeshCut *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h

// ********** Begin Enum EMeshCutDistribution ******************************************************
#define FOREACH_ENUM_EMESHCUTDISTRIBUTION(op) \
	op(EMeshCutDistribution::SingleCut) \
	op(EMeshCutDistribution::UniformRandom) \
	op(EMeshCutDistribution::Grid) 

enum class EMeshCutDistribution;
template<> struct TIsUEnumClass<EMeshCutDistribution> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshCutDistribution>();
// ********** End Enum EMeshCutDistribution ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
