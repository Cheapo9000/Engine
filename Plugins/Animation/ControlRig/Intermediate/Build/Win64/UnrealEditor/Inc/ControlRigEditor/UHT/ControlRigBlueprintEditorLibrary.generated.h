// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigBlueprintEditorLibrary.h"

#ifdef CONTROLRIGEDITOR_ControlRigBlueprintEditorLibrary_generated_h
#error "ControlRigBlueprintEditorLibrary.generated.h already included, missing '#pragma once' in ControlRigBlueprintEditorLibrary.h"
#endif
#define CONTROLRIGEDITOR_ControlRigBlueprintEditorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRigBlueprint;
class UObject;
class URigHierarchy;
class URigHierarchyController;
class USkeletalMesh;
class UStruct;
enum class ECastToControlRigBlueprintCases : uint8;
struct FRigModuleDescription;

// ********** Begin Class UControlRigBlueprintEditorLibrary ****************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableRigModules); \
	DECLARE_FUNCTION(execSetupAllEditorMenus); \
	DECLARE_FUNCTION(execGetHierarchyController); \
	DECLARE_FUNCTION(execGetHierarchy); \
	DECLARE_FUNCTION(execGetAvailableRigUnits); \
	DECLARE_FUNCTION(execGetCurrentlyOpenRigBlueprints); \
	DECLARE_FUNCTION(execRequestControlRigInit); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh); \
	DECLARE_FUNCTION(execCastToControlRigBlueprint);


struct Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBlueprintEditorLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigBlueprintEditorLibrary(); \
	friend struct ::Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigBlueprintEditorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigBlueprintEditorLibrary, URigVMEditorBlueprintLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigBlueprintEditorLibrary_NoRegister) \
	DECLARE_SERIALIZER(UControlRigBlueprintEditorLibrary)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UControlRigBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigBlueprintEditorLibrary(UControlRigBlueprintEditorLibrary&&) = delete; \
	UControlRigBlueprintEditorLibrary(const UControlRigBlueprintEditorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigBlueprintEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprintEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigBlueprintEditorLibrary) \
	CONTROLRIGEDITOR_API virtual ~UControlRigBlueprintEditorLibrary();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_25_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigBlueprintEditorLibrary;

// ********** End Class UControlRigBlueprintEditorLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h

// ********** Begin Enum ECastToControlRigBlueprintCases *******************************************
#define FOREACH_ENUM_ECASTTOCONTROLRIGBLUEPRINTCASES(op) \
	op(ECastToControlRigBlueprintCases::CastSucceeded) \
	op(ECastToControlRigBlueprintCases::CastFailed) 

enum class ECastToControlRigBlueprintCases : uint8;
template<> struct TIsUEnumClass<ECastToControlRigBlueprintCases> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECastToControlRigBlueprintCases>();
// ********** End Enum ECastToControlRigBlueprintCases *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
