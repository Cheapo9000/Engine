// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigBlueprintLegacy.h"

#ifdef CONTROLRIGDEVELOPER_ControlRigBlueprintLegacy_generated_h
#error "ControlRigBlueprintLegacy.generated.h already included, missing '#pragma once' in ControlRigBlueprintLegacy.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigBlueprintLegacy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UControlRig;
class UControlRigBlueprint;
class UModularRigController;
class UObject;
class URigHierarchy;
class URigHierarchyController;
class URigVMNode;
class USkeletalMesh;
class UTexture2D;
struct FModuleReferenceData;
struct FRigElementKey;

// ********** Begin Class UControlRigBlueprint *****************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRecompileModularRig); \
	DECLARE_FUNCTION(execGetModularRigController); \
	DECLARE_FUNCTION(execGetHierarchyController); \
	DECLARE_FUNCTION(execGetCurrentlyOpenRigBlueprints); \
	DECLARE_FUNCTION(execUpdateExposedModuleConnectors); \
	DECLARE_FUNCTION(execFindReferencesToModule); \
	DECLARE_FUNCTION(execGetRigModuleIcon); \
	DECLARE_FUNCTION(execConvertHierarchyElementsToSpawnerNodes); \
	DECLARE_FUNCTION(execTurnIntoStandaloneRig_Blueprint); \
	DECLARE_FUNCTION(execCanTurnIntoStandaloneRig_Blueprint); \
	DECLARE_FUNCTION(execTurnIntoControlRigModule_Blueprint); \
	DECLARE_FUNCTION(execIsControlRigModule); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh); \
	DECLARE_FUNCTION(execGetDebuggedControlRig); \
	DECLARE_FUNCTION(execCreateControlRig); \
	DECLARE_FUNCTION(execGetControlRigClass);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigBlueprint, CONTROLRIGDEVELOPER_API)


struct Z_Construct_UClass_UControlRigBlueprint_Statics;
CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigBlueprint(); \
	friend struct ::Z_Construct_UClass_UControlRigBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGDEVELOPER_API UClass* ::Z_Construct_UClass_UControlRigBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigBlueprint, URigVMBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), Z_Construct_UClass_UControlRigBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UControlRigBlueprint) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRigBlueprint*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGDEVELOPER_API UControlRigBlueprint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGDEVELOPER_API, UControlRigBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigBlueprint(UControlRigBlueprint&&) = delete; \
	UControlRigBlueprint(const UControlRigBlueprint&) = delete; \
	CONTROLRIGDEVELOPER_API virtual ~UControlRigBlueprint();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_33_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigBlueprint;

// ********** End Class UControlRigBlueprint *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprintLegacy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
