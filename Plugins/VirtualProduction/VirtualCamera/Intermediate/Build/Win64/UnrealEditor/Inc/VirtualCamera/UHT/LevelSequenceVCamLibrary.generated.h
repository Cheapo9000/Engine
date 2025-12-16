// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/LevelSequenceVCamLibrary.h"

#ifdef VIRTUALCAMERA_LevelSequenceVCamLibrary_generated_h
#error "LevelSequenceVCamLibrary.generated.h already included, missing '#pragma once' in LevelSequenceVCamLibrary.h"
#endif
#define VIRTUALCAMERA_LevelSequenceVCamLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
struct FPilotableSequenceCameraInfo;

// ********** Begin ScriptStruct FPilotableSequenceCameraInfo **************************************
struct Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics; \
	VIRTUALCAMERA_API static class UScriptStruct* StaticStruct();


struct FPilotableSequenceCameraInfo;
// ********** End ScriptStruct FPilotableSequenceCameraInfo ****************************************

// ********** Begin Class ULevelSequenceVCamLibrary ************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindPilotableCamerasInActiveLevelSequence); \
	DECLARE_FUNCTION(execHasAnyCameraCutsInLevelSequence);


struct Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequenceVCamLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceVCamLibrary(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_ULevelSequenceVCamLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceVCamLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_ULevelSequenceVCamLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceVCamLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceVCamLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceVCamLibrary(ULevelSequenceVCamLibrary&&) = delete; \
	ULevelSequenceVCamLibrary(const ULevelSequenceVCamLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceVCamLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceVCamLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceVCamLibrary) \
	NO_API virtual ~ULevelSequenceVCamLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceVCamLibrary;

// ********** End Class ULevelSequenceVCamLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
