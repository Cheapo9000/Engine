// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigBlueprintEditorLibrary.h"
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
#ifdef CONTROLRIGEDITOR_ControlRigBlueprintEditorLibrary_generated_h
#error "ControlRigBlueprintEditorLibrary.generated.h already included, missing '#pragma once' in ControlRigBlueprintEditorLibrary.h"
#endif
#define CONTROLRIGEDITOR_ControlRigBlueprintEditorLibrary_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigBlueprintEditorLibrary(); \
	friend struct Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UControlRigBlueprintEditorLibrary, URigVMEditorBlueprintLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigBlueprintEditorLibrary)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigBlueprintEditorLibrary(UControlRigBlueprintEditorLibrary&&); \
	UControlRigBlueprintEditorLibrary(const UControlRigBlueprintEditorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigBlueprintEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprintEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigBlueprintEditorLibrary) \
	NO_API virtual ~UControlRigBlueprintEditorLibrary();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_23_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UControlRigBlueprintEditorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h


#define FOREACH_ENUM_ECASTTOCONTROLRIGBLUEPRINTCASES(op) \
	op(ECastToControlRigBlueprintCases::CastSucceeded) \
	op(ECastToControlRigBlueprintCases::CastFailed) 

enum class ECastToControlRigBlueprintCases : uint8;
template<> struct TIsUEnumClass<ECastToControlRigBlueprintCases> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<ECastToControlRigBlueprintCases>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
