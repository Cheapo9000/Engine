// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRTool.h"

#ifdef VPUTILITIESEDITOR_VRTool_generated_h
#error "VRTool.generated.h already included, missing '#pragma once' in VRTool.h"
#endif
#define VPUTILITIESEDITOR_VRTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;

// ********** Begin Class AVRTool ******************************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


struct Z_Construct_UClass_AVRTool_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVRTool_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRTool(); \
	friend struct ::Z_Construct_UClass_AVRTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_AVRTool_NoRegister(); \
public: \
	DECLARE_CLASS2(AVRTool, AVPTransientEditorTickableActorBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_AVRTool_NoRegister) \
	DECLARE_SERIALIZER(AVRTool)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVRTool(AVRTool&&) = delete; \
	AVRTool(const AVRTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRTool) \
	NO_API virtual ~AVRTool();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVRTool;

// ********** End Class AVRTool ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
