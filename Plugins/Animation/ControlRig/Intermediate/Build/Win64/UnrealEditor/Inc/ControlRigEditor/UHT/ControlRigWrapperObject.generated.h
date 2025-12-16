// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/ControlRigWrapperObject.h"

#ifdef CONTROLRIGEDITOR_ControlRigWrapperObject_generated_h
#error "ControlRigWrapperObject.generated.h already included, missing '#pragma once' in ControlRigWrapperObject.h"
#endif
#define CONTROLRIGEDITOR_ControlRigWrapperObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigWrapperObject *************************************************
struct Z_Construct_UClass_UControlRigWrapperObject_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigWrapperObject_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigWrapperObject(); \
	friend struct ::Z_Construct_UClass_UControlRigWrapperObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigWrapperObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigWrapperObject, URigVMDetailsViewWrapperObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigWrapperObject_NoRegister) \
	DECLARE_SERIALIZER(UControlRigWrapperObject)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UControlRigWrapperObject(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigWrapperObject(UControlRigWrapperObject&&) = delete; \
	UControlRigWrapperObject(const UControlRigWrapperObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigWrapperObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigWrapperObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigWrapperObject) \
	CONTROLRIGEDITOR_API virtual ~UControlRigWrapperObject();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_11_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigWrapperObject;

// ********** End Class UControlRigWrapperObject ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
