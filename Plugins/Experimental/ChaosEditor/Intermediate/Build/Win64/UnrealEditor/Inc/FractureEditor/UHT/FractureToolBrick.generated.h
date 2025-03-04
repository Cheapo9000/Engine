// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolBrick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolBrick_generated_h
#error "FractureToolBrick.generated.h already included, missing '#pragma once' in FractureToolBrick.h"
#endif
#define FRACTUREEDITOR_FractureToolBrick_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureBrickSettings(); \
	friend struct Z_Construct_UClass_UFractureBrickSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureBrickSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureBrickSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureBrickSettings(UFractureBrickSettings&&); \
	UFractureBrickSettings(const UFractureBrickSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureBrickSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureBrickSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureBrickSettings) \
	NO_API virtual ~UFractureBrickSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureBrickSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolBrick(); \
	friend struct Z_Construct_UClass_UFractureToolBrick_Statics; \
public: \
	DECLARE_CLASS(UFractureToolBrick, UFractureToolCutterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolBrick)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolBrick(UFractureToolBrick&&); \
	UFractureToolBrick(const UFractureToolBrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolBrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolBrick); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolBrick) \
	NO_API virtual ~UFractureToolBrick();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_80_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolBrick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h


#define FOREACH_ENUM_EFRACTUREBRICKBOND(op) \
	op(EFractureBrickBond::Stretcher) \
	op(EFractureBrickBond::Stack) \
	op(EFractureBrickBond::English) \
	op(EFractureBrickBond::Header) \
	op(EFractureBrickBond::Flemish) 

enum class EFractureBrickBond : uint8;
template<> struct TIsUEnumClass<EFractureBrickBond> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EFractureBrickBond>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
