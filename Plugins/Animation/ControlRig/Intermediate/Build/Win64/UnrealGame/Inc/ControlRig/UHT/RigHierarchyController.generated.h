// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigHierarchyController.h"

#ifdef CONTROLRIG_RigHierarchyController_generated_h
#error "RigHierarchyController.generated.h already included, missing '#pragma once' in RigHierarchyController.h"
#endif
#define CONTROLRIG_RigHierarchyController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigHierarchy;
class UScriptStruct;
class USkeletalMesh;
class USkeleton;
enum class ERigBoneType : uint8;
struct FLinearColor;
struct FRigComponentKey;
struct FRigConnectorSettings;
struct FRigControlSettings;
struct FRigControlValue;
struct FRigElementKey;
struct FRigHierarchyKey;
struct FRigVMMirrorSettings;

// ********** Begin Class URigHierarchyController **************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMirrorElements); \
	DECLARE_FUNCTION(execDuplicateElements); \
	DECLARE_FUNCTION(execRemoveChannelHost); \
	DECLARE_FUNCTION(execAddChannelHost); \
	DECLARE_FUNCTION(execSetAvailableSpaceLabel); \
	DECLARE_FUNCTION(execSetAvailableSpaceIndex); \
	DECLARE_FUNCTION(execRemoveAvailableSpace); \
	DECLARE_FUNCTION(execAddAvailableSpace); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execRemoveAllParents); \
	DECLARE_FUNCTION(execRemoveParent); \
	DECLARE_FUNCTION(execAddParent); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execReorderElement); \
	DECLARE_FUNCTION(execRenameElement); \
	DECLARE_FUNCTION(execRemoveElement); \
	DECLARE_FUNCTION(execImportFromText); \
	DECLARE_FUNCTION(execExportToText); \
	DECLARE_FUNCTION(execExportSelectionToText); \
	DECLARE_FUNCTION(execImportPreviewSkeletalMesh); \
	DECLARE_FUNCTION(execImportCurvesFromSkeletalMesh); \
	DECLARE_FUNCTION(execImportCurves); \
	DECLARE_FUNCTION(execImportSocketsFromSkeletalMesh); \
	DECLARE_FUNCTION(execImportBonesFromSkeletalMesh); \
	DECLARE_FUNCTION(execImportBones); \
	DECLARE_FUNCTION(execSetComponentContent); \
	DECLARE_FUNCTION(execReparentComponent); \
	DECLARE_FUNCTION(execRenameComponent); \
	DECLARE_FUNCTION(execRemoveComponent); \
	DECLARE_FUNCTION(execAddComponent); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execGetControlSettings); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execAddConnector); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execAddAnimationChannel_ForBlueprint); \
	DECLARE_FUNCTION(execAddControl_ForBlueprint); \
	DECLARE_FUNCTION(execAddNull); \
	DECLARE_FUNCTION(execAddBone); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execSetHierarchySelection); \
	DECLARE_FUNCTION(execSetComponentSelection); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectHierarchyKey); \
	DECLARE_FUNCTION(execSelectHierarchyKey); \
	DECLARE_FUNCTION(execDeselectComponent); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execSetHierarchy); \
	DECLARE_FUNCTION(execGetHierarchy);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execImportCurvesFromAsset); \
	DECLARE_FUNCTION(execImportBonesFromAsset);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchyController, CONTROLRIG_API)


struct Z_Construct_UClass_URigHierarchyController_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigHierarchyController(); \
	friend struct ::Z_Construct_UClass_URigHierarchyController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_URigHierarchyController_NoRegister(); \
public: \
	DECLARE_CLASS2(URigHierarchyController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_URigHierarchyController_NoRegister) \
	DECLARE_SERIALIZER(URigHierarchyController) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigHierarchyController(URigHierarchyController&&) = delete; \
	URigHierarchyController(const URigHierarchyController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, URigHierarchyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigHierarchyController)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigHierarchyController;

// ********** End Class URigHierarchyController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
