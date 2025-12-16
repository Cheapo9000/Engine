// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPScoutingSubsystem.h"

#ifdef VPUTILITIESEDITOR_VPScoutingSubsystem_generated_h
#error "VPScoutingSubsystem.generated.h already included, missing '#pragma once' in VPScoutingSubsystem.h"
#endif
#define VPUTILITIESEDITOR_VPScoutingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVREditorFloatingUI;
class UUserWidget;
class UVREditorInteractor;
class UVREditorMode;
enum class EVProdPanelIDs : uint8;
struct FVREditorFloatingUICreationContext;

// ********** Begin Class UVPScoutingSubsystemHelpersBase ******************************************
struct Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPScoutingSubsystemHelpersBase(); \
	friend struct ::Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPScoutingSubsystemHelpersBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_NoRegister) \
	DECLARE_SERIALIZER(UVPScoutingSubsystemHelpersBase)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VPUTILITIESEDITOR_API UVPScoutingSubsystemHelpersBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPScoutingSubsystemHelpersBase(UVPScoutingSubsystemHelpersBase&&) = delete; \
	UVPScoutingSubsystemHelpersBase(const UVPScoutingSubsystemHelpersBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VPUTILITIESEDITOR_API, UVPScoutingSubsystemHelpersBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPScoutingSubsystemHelpersBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPScoutingSubsystemHelpersBase) \
	VPUTILITIESEDITOR_API virtual ~UVPScoutingSubsystemHelpersBase();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPScoutingSubsystemHelpersBase;

// ********** End Class UVPScoutingSubsystemHelpersBase ********************************************

// ********** Begin Class UVPScoutingSubsystemGestureManagerBase ***********************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnVREditingModeExit_Implementation(); \
	virtual void OnVREditingModeEnter_Implementation(); \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
	DECLARE_FUNCTION(execOnVREditingModeExit); \
	DECLARE_FUNCTION(execOnVREditingModeEnter); \
	DECLARE_FUNCTION(execEditorTick);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPScoutingSubsystemGestureManagerBase(); \
	friend struct ::Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPScoutingSubsystemGestureManagerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_NoRegister) \
	DECLARE_SERIALIZER(UVPScoutingSubsystemGestureManagerBase)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPScoutingSubsystemGestureManagerBase(UVPScoutingSubsystemGestureManagerBase&&) = delete; \
	UVPScoutingSubsystemGestureManagerBase(const UVPScoutingSubsystemGestureManagerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VPUTILITIESEDITOR_API, UVPScoutingSubsystemGestureManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPScoutingSubsystemGestureManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVPScoutingSubsystemGestureManagerBase) \
	VPUTILITIESEDITOR_API virtual ~UVPScoutingSubsystemGestureManagerBase();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPScoutingSubsystemGestureManagerBase;

// ********** End Class UVPScoutingSubsystemGestureManagerBase *************************************

// ********** Begin Class UVPScoutingSubsystem *****************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleRotationGridSnapping); \
	DECLARE_FUNCTION(execIsRotationGridSnappingEnabled); \
	DECLARE_FUNCTION(execToggleLocationGridSnapping); \
	DECLARE_FUNCTION(execIsLocationGridSnappingEnabled); \
	DECLARE_FUNCTION(execExitVRMode); \
	DECLARE_FUNCTION(execEnterVRMode); \
	DECLARE_FUNCTION(execGetVREditorMode); \
	DECLARE_FUNCTION(execSetIsHelperSystemEnabled); \
	DECLARE_FUNCTION(execIsHelperSystemEnabled); \
	DECLARE_FUNCTION(execSetInertiaDampingCVar); \
	DECLARE_FUNCTION(execSetIsUsingInertiaDamping); \
	DECLARE_FUNCTION(execIsUsingInertiaDamping); \
	DECLARE_FUNCTION(execSetGripNavSpeed); \
	DECLARE_FUNCTION(execGetGripNavSpeed); \
	DECLARE_FUNCTION(execSetFlightSpeed); \
	DECLARE_FUNCTION(execGetFlightSpeed); \
	DECLARE_FUNCTION(execSetShowTransformGizmoCVar); \
	DECLARE_FUNCTION(execSetIsUsingTransformGizmo); \
	DECLARE_FUNCTION(execIsUsingTransformGizmo); \
	DECLARE_FUNCTION(execSetIsUsingMetricSystem); \
	DECLARE_FUNCTION(execIsUsingMetricSystem); \
	DECLARE_FUNCTION(execGetShowName); \
	DECLARE_FUNCTION(execGetDirectorName); \
	DECLARE_FUNCTION(execGetVProdPanelID); \
	DECLARE_FUNCTION(execGetActiveEditorVRControllers); \
	DECLARE_FUNCTION(execGetPanelWidget); \
	DECLARE_FUNCTION(execGetPanelActor); \
	DECLARE_FUNCTION(execIsVRScoutingUIOpen); \
	DECLARE_FUNCTION(execHideInfoDisplayPanel); \
	DECLARE_FUNCTION(execToggleVRScoutingUI);


struct Z_Construct_UClass_UVPScoutingSubsystem_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPScoutingSubsystem(); \
	friend struct ::Z_Construct_UClass_UVPScoutingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UVPScoutingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPScoutingSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_UVPScoutingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVPScoutingSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPScoutingSubsystem(UVPScoutingSubsystem&&) = delete; \
	UVPScoutingSubsystem(const UVPScoutingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPScoutingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPScoutingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVPScoutingSubsystem) \
	NO_API virtual ~UVPScoutingSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_84_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPScoutingSubsystem;

// ********** End Class UVPScoutingSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h

// ********** Begin Enum EVProdPanelIDs ************************************************************
#define FOREACH_ENUM_EVPRODPANELIDS(op) \
	op(EVProdPanelIDs::Main) \
	op(EVProdPanelIDs::Left) \
	op(EVProdPanelIDs::Right) \
	op(EVProdPanelIDs::Context) \
	op(EVProdPanelIDs::Timeline) \
	op(EVProdPanelIDs::Measure) \
	op(EVProdPanelIDs::Gaffer) 

enum class EVProdPanelIDs : uint8;
template<> struct TIsUEnumClass<EVProdPanelIDs> { enum { Value = true }; };
template<> VPUTILITIESEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EVProdPanelIDs>();
// ********** End Enum EVProdPanelIDs **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
