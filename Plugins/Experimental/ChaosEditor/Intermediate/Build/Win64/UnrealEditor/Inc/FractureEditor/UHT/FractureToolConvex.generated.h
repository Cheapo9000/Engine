// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolConvex.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolConvex_generated_h
#error "FractureToolConvex.generated.h already included, missing '#pragma once' in FractureToolConvex.h"
#endif
#define FRACTUREEDITOR_FractureToolConvex_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCustomConvex); \
	DECLARE_FUNCTION(execDeleteFromSelected);


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureConvexSettings(); \
	friend struct Z_Construct_UClass_UFractureConvexSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureConvexSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureConvexSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureConvexSettings(UFractureConvexSettings&&); \
	UFractureConvexSettings(const UFractureConvexSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureConvexSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureConvexSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureConvexSettings) \
	NO_API virtual ~UFractureConvexSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureConvexSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFromDefaults); \
	DECLARE_FUNCTION(execSaveAsDefaults);


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureConvexActions(); \
	friend struct Z_Construct_UClass_UFractureConvexActions_Statics; \
public: \
	DECLARE_CLASS(UFractureConvexActions, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureConvexActions)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureConvexActions(UFractureConvexActions&&); \
	UFractureConvexActions(const UFractureConvexActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureConvexActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureConvexActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureConvexActions) \
	NO_API virtual ~UFractureConvexActions();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_73_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_78_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureConvexActions>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolConvex(); \
	friend struct Z_Construct_UClass_UFractureToolConvex_Statics; \
public: \
	DECLARE_CLASS(UFractureToolConvex, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolConvex)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolConvex(UFractureToolConvex&&); \
	UFractureToolConvex(const UFractureToolConvex&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolConvex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolConvex); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolConvex) \
	NO_API virtual ~UFractureToolConvex();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_96_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_100_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolConvex>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
