// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolMaterials.h"

#ifdef FRACTUREEDITOR_FractureToolMaterials_generated_h
#error "FractureToolMaterials.generated.h already included, missing '#pragma once' in FractureToolMaterials.h"
#endif
#define FRACTUREEDITOR_FractureToolMaterials_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureMaterialsSettings ***********************************************
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialNamesFunc); \
	DECLARE_FUNCTION(execUseAssetMaterialsOnComponents); \
	DECLARE_FUNCTION(execRemoveMaterialSlot); \
	DECLARE_FUNCTION(execAddMaterialSlot);


struct Z_Construct_UClass_UFractureMaterialsSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureMaterialsSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureMaterialsSettings(); \
	friend struct ::Z_Construct_UClass_UFractureMaterialsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureMaterialsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureMaterialsSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureMaterialsSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureMaterialsSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureMaterialsSettings(UFractureMaterialsSettings&&) = delete; \
	UFractureMaterialsSettings(const UFractureMaterialsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureMaterialsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureMaterialsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureMaterialsSettings) \
	NO_API virtual ~UFractureMaterialsSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureMaterialsSettings;

// ********** End Class UFractureMaterialsSettings *************************************************

// ********** Begin Class UFractureToolMaterials ***************************************************
struct Z_Construct_UClass_UFractureToolMaterials_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMaterials_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolMaterials(); \
	friend struct ::Z_Construct_UClass_UFractureToolMaterials_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureToolMaterials_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureToolMaterials, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureToolMaterials_NoRegister) \
	DECLARE_SERIALIZER(UFractureToolMaterials)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_101_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureToolMaterials(UFractureToolMaterials&&) = delete; \
	UFractureToolMaterials(const UFractureToolMaterials&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolMaterials); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolMaterials); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolMaterials) \
	NO_API virtual ~UFractureToolMaterials();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_97_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_101_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureToolMaterials;

// ********** End Class UFractureToolMaterials *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h

// ********** Begin Enum EMaterialAssignmentTargets ************************************************
#define FOREACH_ENUM_EMATERIALASSIGNMENTTARGETS(op) \
	op(EMaterialAssignmentTargets::OnlyInternalFaces) \
	op(EMaterialAssignmentTargets::OnlyExternalFaces) \
	op(EMaterialAssignmentTargets::AllFaces) 

enum class EMaterialAssignmentTargets;
template<> struct TIsUEnumClass<EMaterialAssignmentTargets> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialAssignmentTargets>();
// ********** End Enum EMaterialAssignmentTargets **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
