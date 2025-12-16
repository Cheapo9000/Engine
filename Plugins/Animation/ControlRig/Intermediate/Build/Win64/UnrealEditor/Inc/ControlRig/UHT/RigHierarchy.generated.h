// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigHierarchy.h"

#ifdef CONTROLRIG_RigHierarchy_generated_h
#error "RigHierarchy.generated.h already included, missing '#pragma once' in RigHierarchy.h"
#endif
#define CONTROLRIG_RigHierarchy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModularRigRuleManager;
class URigHierarchy;
class URigHierarchyController;
class UScriptStruct;
enum class EEulerRotationOrder : uint8;
enum class ERigControlValueType : uint8;
enum class ERigElementType : uint8;
enum class ERigHierarchyNotification : uint8;
enum class ERigMetadataType : uint8;
struct FEulerTransform;
struct FLinearColor;
struct FRigBoneElement;
struct FRigComponentKey;
struct FRigConnectorSettings;
struct FRigConnectorState;
struct FRigControlElement;
struct FRigControlSettings;
struct FRigControlValue;
struct FRigElementKey;
struct FRigElementWeight;
struct FRigHierarchyKey;
struct FRigNullElement;
struct FRigPose;
struct FRigSocketState;
struct FTransformNoScale;

// ********** Begin Delegate FRigHierarchyModifiedDynamicEvent *************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_32_DELEGATE \
CONTROLRIG_API void FRigHierarchyModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& RigHierarchyModifiedDynamicEvent, ERigHierarchyNotification NotifType, URigHierarchy* Hierarchy, FRigElementKey Subject);


// ********** End Delegate FRigHierarchyModifiedDynamicEvent ***************************************

// ********** Begin ScriptStruct FRigTransformStackEntry *******************************************
struct Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigTransformStackEntry;
// ********** End ScriptStruct FRigTransformStackEntry *********************************************

// ********** Begin Class URigHierarchy ************************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPreviousHierarchyParent); \
	DECLARE_FUNCTION(execGetPreviousParent); \
	DECLARE_FUNCTION(execGetPreviousHierarchyName); \
	DECLARE_FUNCTION(execGetPreviousName); \
	DECLARE_FUNCTION(execGetTransformNoScaleFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromTransformNoScale); \
	DECLARE_FUNCTION(execGetEulerTransformFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromEulerTransform); \
	DECLARE_FUNCTION(execGetTransformFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromTransform); \
	DECLARE_FUNCTION(execGetRotatorFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromRotator); \
	DECLARE_FUNCTION(execGetVectorFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromVector); \
	DECLARE_FUNCTION(execGetVector2DFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromVector2D); \
	DECLARE_FUNCTION(execGetIntFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromInt); \
	DECLARE_FUNCTION(execGetFloatFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromFloat); \
	DECLARE_FUNCTION(execMakeControlValueFromBool); \
	DECLARE_FUNCTION(execSetPose_ForBlueprint); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execGetRuleManager); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execIsControllerAvailable); \
	DECLARE_FUNCTION(execSendAutoKeyEvent); \
	DECLARE_FUNCTION(execGetAllKeys_ForBlueprint); \
	DECLARE_FUNCTION(execIsParentedTo); \
	DECLARE_FUNCTION(execSwitchToWorldSpace); \
	DECLARE_FUNCTION(execSwitchToDefaultParent); \
	DECLARE_FUNCTION(execSwitchToParent); \
	DECLARE_FUNCTION(execSetParentWeightArray); \
	DECLARE_FUNCTION(execSetParentWeight); \
	DECLARE_FUNCTION(execGetParentWeightArray); \
	DECLARE_FUNCTION(execGetParentWeight); \
	DECLARE_FUNCTION(execGetNumberOfParents); \
	DECLARE_FUNCTION(execGetFirstParent); \
	DECLARE_FUNCTION(execGetDefaultParent); \
	DECLARE_FUNCTION(execGetParents); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetParentTransformByIndex); \
	DECLARE_FUNCTION(execGetParentTransform); \
	DECLARE_FUNCTION(execSetConnectorSettingsByIndex); \
	DECLARE_FUNCTION(execSetConnectorSettings); \
	DECLARE_FUNCTION(execSetControlSettingsByIndex); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execSetControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execSetControlShapeTransform); \
	DECLARE_FUNCTION(execSetControlOffsetTransformByIndex); \
	DECLARE_FUNCTION(execSetControlOffsetTransform); \
	DECLARE_FUNCTION(execUnsetCurveValueByIndex); \
	DECLARE_FUNCTION(execUnsetCurveValue); \
	DECLARE_FUNCTION(execSetCurveValueByIndex); \
	DECLARE_FUNCTION(execSetCurveValue); \
	DECLARE_FUNCTION(execIsCurveValueSetByIndex); \
	DECLARE_FUNCTION(execIsCurveValueSet); \
	DECLARE_FUNCTION(execGetCurveValueByIndex); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execSetControlVisibilityByIndex); \
	DECLARE_FUNCTION(execSetControlVisibility); \
	DECLARE_FUNCTION(execSetControlValueByIndex); \
	DECLARE_FUNCTION(execSetControlValue); \
	DECLARE_FUNCTION(execSetControlPreferredRotationOrderByIndex); \
	DECLARE_FUNCTION(execSetControlPreferredRotationOrder); \
	DECLARE_FUNCTION(execGetControlPreferredEulerRotationOrderByIndex); \
	DECLARE_FUNCTION(execGetControlPreferredEulerRotationOrder); \
	DECLARE_FUNCTION(execSetControlPreferredEulerAnglesByIndex); \
	DECLARE_FUNCTION(execSetControlPreferredEulerAngles); \
	DECLARE_FUNCTION(execGetControlPreferredEulerAnglesByIndex); \
	DECLARE_FUNCTION(execGetControlPreferredEulerAngles); \
	DECLARE_FUNCTION(execSetControlPreferredRotatorByIndex); \
	DECLARE_FUNCTION(execSetControlPreferredRotator); \
	DECLARE_FUNCTION(execGetControlPreferredRotatorByIndex); \
	DECLARE_FUNCTION(execGetControlPreferredRotator); \
	DECLARE_FUNCTION(execGetControlValueByIndex); \
	DECLARE_FUNCTION(execGetControlValue); \
	DECLARE_FUNCTION(execGetGlobalControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalControlShapeTransform); \
	DECLARE_FUNCTION(execGetLocalControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execGetLocalControlShapeTransform); \
	DECLARE_FUNCTION(execGetGlobalControlOffsetTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalControlOffsetTransform); \
	DECLARE_FUNCTION(execSetGlobalTransformByIndex); \
	DECLARE_FUNCTION(execSetGlobalTransform); \
	DECLARE_FUNCTION(execGetGlobalTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalTransform); \
	DECLARE_FUNCTION(execSetLocalTransformByIndex); \
	DECLARE_FUNCTION(execSetLocalTransform); \
	DECLARE_FUNCTION(execGetLocalTransformByIndex); \
	DECLARE_FUNCTION(execGetLocalTransform); \
	DECLARE_FUNCTION(execSortKeys); \
	DECLARE_FUNCTION(execIsSelectedByIndex); \
	DECLARE_FUNCTION(execIsComponentSelected); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execGetSelectedHierarchyKeys_ForBlueprint); \
	DECLARE_FUNCTION(execGetSelectedKeys); \
	DECLARE_FUNCTION(execSetTag); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetNameSpace); \
	DECLARE_FUNCTION(execGetNameSpaceFName); \
	DECLARE_FUNCTION(execGetModulePrefix); \
	DECLARE_FUNCTION(execGetModuleName); \
	DECLARE_FUNCTION(execGetModuleFName); \
	DECLARE_FUNCTION(execGetModulePath); \
	DECLARE_FUNCTION(execGetModulePathFName); \
	DECLARE_FUNCTION(execSetRigElementKeyArrayMetadata); \
	DECLARE_FUNCTION(execSetRigElementKeyMetadata); \
	DECLARE_FUNCTION(execGetRigElementKeyArrayMetadata); \
	DECLARE_FUNCTION(execGetRigElementKeyMetadata); \
	DECLARE_FUNCTION(execSetLinearColorArrayMetadata); \
	DECLARE_FUNCTION(execSetLinearColorMetadata); \
	DECLARE_FUNCTION(execGetLinearColorArrayMetadata); \
	DECLARE_FUNCTION(execGetLinearColorMetadata); \
	DECLARE_FUNCTION(execSetTransformArrayMetadata); \
	DECLARE_FUNCTION(execSetTransformMetadata); \
	DECLARE_FUNCTION(execGetTransformArrayMetadata); \
	DECLARE_FUNCTION(execGetTransformMetadata); \
	DECLARE_FUNCTION(execSetQuatArrayMetadata); \
	DECLARE_FUNCTION(execSetQuatMetadata); \
	DECLARE_FUNCTION(execGetQuatArrayMetadata); \
	DECLARE_FUNCTION(execGetQuatMetadata); \
	DECLARE_FUNCTION(execSetRotatorArrayMetadata); \
	DECLARE_FUNCTION(execSetRotatorMetadata); \
	DECLARE_FUNCTION(execGetRotatorArrayMetadata); \
	DECLARE_FUNCTION(execGetRotatorMetadata); \
	DECLARE_FUNCTION(execSetVectorArrayMetadata); \
	DECLARE_FUNCTION(execSetVectorMetadata); \
	DECLARE_FUNCTION(execGetVectorArrayMetadata); \
	DECLARE_FUNCTION(execGetVectorMetadata); \
	DECLARE_FUNCTION(execSetNameArrayMetadata); \
	DECLARE_FUNCTION(execSetNameMetadata); \
	DECLARE_FUNCTION(execGetNameArrayMetadata); \
	DECLARE_FUNCTION(execGetNameMetadata); \
	DECLARE_FUNCTION(execSetInt32ArrayMetadata); \
	DECLARE_FUNCTION(execSetInt32Metadata); \
	DECLARE_FUNCTION(execGetInt32ArrayMetadata); \
	DECLARE_FUNCTION(execGetInt32Metadata); \
	DECLARE_FUNCTION(execSetFloatArrayMetadata); \
	DECLARE_FUNCTION(execSetFloatMetadata); \
	DECLARE_FUNCTION(execGetFloatArrayMetadata); \
	DECLARE_FUNCTION(execGetFloatMetadata); \
	DECLARE_FUNCTION(execSetBoolArrayMetadata); \
	DECLARE_FUNCTION(execSetBoolMetadata); \
	DECLARE_FUNCTION(execGetBoolArrayMetadata); \
	DECLARE_FUNCTION(execGetBoolMetadata); \
	DECLARE_FUNCTION(execRemoveAllMetadata); \
	DECLARE_FUNCTION(execRemoveMetadata); \
	DECLARE_FUNCTION(execGetMetadataType); \
	DECLARE_FUNCTION(execGetMetadataNames); \
	DECLARE_FUNCTION(execGetRootElementKeys); \
	DECLARE_FUNCTION(execGetSocketKeys); \
	DECLARE_FUNCTION(execRestoreConnectorsFromStates); \
	DECLARE_FUNCTION(execGetConnectorStates); \
	DECLARE_FUNCTION(execRestoreSocketsFromStates); \
	DECLARE_FUNCTION(execGetSocketStates); \
	DECLARE_FUNCTION(execGetConnectorKeys); \
	DECLARE_FUNCTION(execGetReferenceKeys); \
	DECLARE_FUNCTION(execGetCurveKeys); \
	DECLARE_FUNCTION(execGetControlKeys); \
	DECLARE_FUNCTION(execGetNullKeys); \
	DECLARE_FUNCTION(execGetBoneKeys); \
	DECLARE_FUNCTION(execFindNull_ForBlueprintOnly); \
	DECLARE_FUNCTION(execFindControl_ForBlueprintOnly); \
	DECLARE_FUNCTION(execFindBone_ForBlueprintOnly); \
	DECLARE_FUNCTION(execGetComponentContent); \
	DECLARE_FUNCTION(execGetComponentType); \
	DECLARE_FUNCTION(execGetComponentName); \
	DECLARE_FUNCTION(execGetComponentKey); \
	DECLARE_FUNCTION(execGetComponentKeys); \
	DECLARE_FUNCTION(execGetAllComponentKeys); \
	DECLARE_FUNCTION(execNumComponents); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execGetLocalIndex_ForBlueprint); \
	DECLARE_FUNCTION(execGetIndex_ForBlueprint); \
	DECLARE_FUNCTION(execIsProcedural); \
	DECLARE_FUNCTION(execContains_ForBlueprint); \
	DECLARE_FUNCTION(execIsValidIndex); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execResetCurveValues); \
	DECLARE_FUNCTION(execResetPoseToInitial); \
	DECLARE_FUNCTION(execCopyPose); \
	DECLARE_FUNCTION(execCopyHierarchy); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchy, CONTROLRIG_API)


struct Z_Construct_UClass_URigHierarchy_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigHierarchy(); \
	friend struct ::Z_Construct_UClass_URigHierarchy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_URigHierarchy_NoRegister(); \
public: \
	DECLARE_CLASS2(URigHierarchy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_URigHierarchy_NoRegister) \
	DECLARE_SERIALIZER(URigHierarchy) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigHierarchy(URigHierarchy&&) = delete; \
	URigHierarchy(const URigHierarchy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, URigHierarchy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigHierarchy) \
	CONTROLRIG_API virtual ~URigHierarchy();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_166_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigHierarchy;

// ********** End Class URigHierarchy **************************************************************

// ********** Begin Interface URigHierarchyProvider ************************************************
struct Z_Construct_UClass_URigHierarchyProvider_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyProvider_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API URigHierarchyProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigHierarchyProvider(URigHierarchyProvider&&) = delete; \
	URigHierarchyProvider(const URigHierarchyProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, URigHierarchyProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchyProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigHierarchyProvider) \
	virtual ~URigHierarchyProvider() = default;


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURigHierarchyProvider(); \
	friend struct ::Z_Construct_UClass_URigHierarchyProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_URigHierarchyProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(URigHierarchyProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_URigHierarchyProvider_NoRegister) \
	DECLARE_SERIALIZER(URigHierarchyProvider)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRigHierarchyProvider() {} \
public: \
	typedef URigHierarchyProvider UClassType; \
	typedef IRigHierarchyProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5775_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5783_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_5778_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigHierarchyProvider;

// ********** End Interface URigHierarchyProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h

// ********** Begin Enum ERigTransformStackEntryType ***********************************************
#define FOREACH_ENUM_ERIGTRANSFORMSTACKENTRYTYPE(op) \
	op(TransformPose) \
	op(ControlOffset) \
	op(ControlShape) \
	op(CurveValue) 

enum ERigTransformStackEntryType : int;
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigTransformStackEntryType>();
// ********** End Enum ERigTransformStackEntryType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
