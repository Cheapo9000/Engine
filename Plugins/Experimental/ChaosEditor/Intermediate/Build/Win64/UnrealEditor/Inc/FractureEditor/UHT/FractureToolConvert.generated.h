// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolConvert.h"

#ifdef FRACTUREEDITOR_FractureToolConvert_generated_h
#error "FractureToolConvert.generated.h already included, missing '#pragma once' in FractureToolConvert.h"
#endif
#define FRACTUREEDITOR_FractureToolConvert_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureConvertSettings *************************************************
struct Z_Construct_UClass_UFractureConvertSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvertSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureConvertSettings(); \
	friend struct ::Z_Construct_UClass_UFractureConvertSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureConvertSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureConvertSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureConvertSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureConvertSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureConvertSettings(UFractureConvertSettings&&) = delete; \
	UFractureConvertSettings(const UFractureConvertSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureConvertSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureConvertSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureConvertSettings) \
	NO_API virtual ~UFractureConvertSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureConvertSettings;

// ********** End Class UFractureConvertSettings ***************************************************

// ********** Begin Class UFractureReimportSettings ************************************************
struct Z_Construct_UClass_UFractureReimportSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureReimportSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureReimportSettings(); \
	friend struct ::Z_Construct_UClass_UFractureReimportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureReimportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureReimportSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureReimportSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureReimportSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFractureReimportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureReimportSettings(UFractureReimportSettings&&) = delete; \
	UFractureReimportSettings(const UFractureReimportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureReimportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureReimportSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureReimportSettings) \
	NO_API virtual ~UFractureReimportSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_50_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureReimportSettings;

// ********** End Class UFractureReimportSettings **************************************************

// ********** Begin Class UFractureToolConvert *****************************************************
struct Z_Construct_UClass_UFractureToolConvert_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvert_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolConvert(); \
	friend struct ::Z_Construct_UClass_UFractureToolConvert_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureToolConvert_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureToolConvert, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureToolConvert_NoRegister) \
	DECLARE_SERIALIZER(UFractureToolConvert)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureToolConvert(UFractureToolConvert&&) = delete; \
	UFractureToolConvert(const UFractureToolConvert&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolConvert); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolConvert); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolConvert) \
	NO_API virtual ~UFractureToolConvert();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_62_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_66_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureToolConvert;

// ********** End Class UFractureToolConvert *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
