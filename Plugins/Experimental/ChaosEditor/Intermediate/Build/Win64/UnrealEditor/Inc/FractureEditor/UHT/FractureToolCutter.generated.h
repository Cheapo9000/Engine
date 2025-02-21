// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolCutter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolCutter_generated_h
#error "FractureToolCutter.generated.h already included, missing '#pragma once' in FractureToolCutter.h"
#endif
#define FRACTUREEDITOR_FractureToolCutter_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialNamesFunc);


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureCutterSettings(); \
	friend struct Z_Construct_UClass_UFractureCutterSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureCutterSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureCutterSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureCutterSettings(UFractureCutterSettings&&); \
	UFractureCutterSettings(const UFractureCutterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureCutterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureCutterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureCutterSettings) \
	NO_API virtual ~UFractureCutterSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureCutterSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureCollisionSettings(); \
	friend struct Z_Construct_UClass_UFractureCollisionSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureCollisionSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureCollisionSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_183_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureCollisionSettings(UFractureCollisionSettings&&); \
	UFractureCollisionSettings(const UFractureCollisionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureCollisionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureCollisionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureCollisionSettings) \
	NO_API virtual ~UFractureCollisionSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_179_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_183_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureCollisionSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolCutterBase(); \
	friend struct Z_Construct_UClass_UFractureToolCutterBase_Statics; \
public: \
	DECLARE_CLASS(UFractureToolCutterBase, UFractureInteractiveTool, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolCutterBase)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_217_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolCutterBase(UFractureToolCutterBase&&); \
	UFractureToolCutterBase(const UFractureToolCutterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolCutterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolCutterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolCutterBase) \
	NO_API virtual ~UFractureToolCutterBase();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_213_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_217_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_217_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolCutterBase>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_362_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolVoronoiCutterBase(); \
	friend struct Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics; \
public: \
	DECLARE_CLASS(UFractureToolVoronoiCutterBase, UFractureToolCutterBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolVoronoiCutterBase)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_362_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolVoronoiCutterBase(UFractureToolVoronoiCutterBase&&); \
	UFractureToolVoronoiCutterBase(const UFractureToolVoronoiCutterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolVoronoiCutterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolVoronoiCutterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolVoronoiCutterBase) \
	NO_API virtual ~UFractureToolVoronoiCutterBase();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_358_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_362_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_362_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_362_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolVoronoiCutterBase>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_446_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureTransformGizmoSettings(); \
	friend struct Z_Construct_UClass_UFractureTransformGizmoSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureTransformGizmoSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureTransformGizmoSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_446_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureTransformGizmoSettings(UFractureTransformGizmoSettings&&); \
	UFractureTransformGizmoSettings(const UFractureTransformGizmoSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureTransformGizmoSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureTransformGizmoSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureTransformGizmoSettings) \
	NO_API virtual ~UFractureTransformGizmoSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_442_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_446_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_446_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_446_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureTransformGizmoSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
