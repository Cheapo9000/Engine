// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolBrick.h"

#ifdef FRACTUREEDITOR_FractureToolBrick_generated_h
#error "FractureToolBrick.generated.h already included, missing '#pragma once' in FractureToolBrick.h"
#endif
#define FRACTUREEDITOR_FractureToolBrick_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureBrickSettings ***************************************************
struct Z_Construct_UClass_UFractureBrickSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureBrickSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureBrickSettings(); \
	friend struct ::Z_Construct_UClass_UFractureBrickSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureBrickSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureBrickSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureBrickSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureBrickSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureBrickSettings(UFractureBrickSettings&&) = delete; \
	UFractureBrickSettings(const UFractureBrickSettings&) = delete; \
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


class UFractureBrickSettings;

// ********** End Class UFractureBrickSettings *****************************************************

// ********** Begin Class UFractureToolBrick *******************************************************
struct Z_Construct_UClass_UFractureToolBrick_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolBrick_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolBrick(); \
	friend struct ::Z_Construct_UClass_UFractureToolBrick_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureToolBrick_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureToolBrick, UFractureToolCutterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureToolBrick_NoRegister) \
	DECLARE_SERIALIZER(UFractureToolBrick)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_84_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureToolBrick(UFractureToolBrick&&) = delete; \
	UFractureToolBrick(const UFractureToolBrick&) = delete; \
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


class UFractureToolBrick;

// ********** End Class UFractureToolBrick *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h

// ********** Begin Enum EFractureBrickBond ********************************************************
#define FOREACH_ENUM_EFRACTUREBRICKBOND(op) \
	op(EFractureBrickBond::Stretcher) \
	op(EFractureBrickBond::Stack) \
	op(EFractureBrickBond::English) \
	op(EFractureBrickBond::Header) \
	op(EFractureBrickBond::Flemish) 

enum class EFractureBrickBond : uint8;
template<> struct TIsUEnumClass<EFractureBrickBond> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFractureBrickBond>();
// ********** End Enum EFractureBrickBond **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
