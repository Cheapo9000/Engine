// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/Constraints/ConstraintCreationOptions.h"

#ifdef CONTROLRIGEDITOR_ConstraintCreationOptions_generated_h
#error "ConstraintCreationOptions.generated.h already included, missing '#pragma once' in ConstraintCreationOptions.h"
#endif
#define CONTROLRIGEDITOR_ConstraintCreationOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConstraintCreationOptions ***********************************************
struct Z_Construct_UClass_UConstraintCreationOptions_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UConstraintCreationOptions_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintCreationOptions(); \
	friend struct ::Z_Construct_UClass_UConstraintCreationOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UConstraintCreationOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstraintCreationOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UConstraintCreationOptions_NoRegister) \
	DECLARE_SERIALIZER(UConstraintCreationOptions)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintCreationOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstraintCreationOptions(UConstraintCreationOptions&&) = delete; \
	UConstraintCreationOptions(const UConstraintCreationOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintCreationOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintCreationOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintCreationOptions) \
	NO_API virtual ~UConstraintCreationOptions();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstraintCreationOptions;

// ********** End Class UConstraintCreationOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_Constraints_ConstraintCreationOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
