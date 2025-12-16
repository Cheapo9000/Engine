// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/TakeRecorderDMXLibrarySource.h"

#ifdef DMXEDITOR_TakeRecorderDMXLibrarySource_generated_h
#error "TakeRecorderDMXLibrarySource.generated.h already included, missing '#pragma once' in TakeRecorderDMXLibrarySource.h"
#endif
#define DMXEDITOR_TakeRecorderDMXLibrarySource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAddAllPatchesButton **********************************************
struct Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FAddAllPatchesButton;
// ********** End ScriptStruct FAddAllPatchesButton ************************************************

// ********** Begin Class UTakeRecorderDMXLibrarySource ********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAllPatches);


struct Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics;
DMXEDITOR_API UClass* Z_Construct_UClass_UTakeRecorderDMXLibrarySource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderDMXLibrarySource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXEDITOR_API UClass* ::Z_Construct_UClass_UTakeRecorderDMXLibrarySource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderDMXLibrarySource, UTakeRecorderSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXEditor"), Z_Construct_UClass_UTakeRecorderDMXLibrarySource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderDMXLibrarySource)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderDMXLibrarySource(UTakeRecorderDMXLibrarySource&&) = delete; \
	UTakeRecorderDMXLibrarySource(const UTakeRecorderDMXLibrarySource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderDMXLibrarySource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderDMXLibrarySource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderDMXLibrarySource) \
	NO_API virtual ~UTakeRecorderDMXLibrarySource();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_36_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderDMXLibrarySource;

// ********** End Class UTakeRecorderDMXLibrarySource **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
