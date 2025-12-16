// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderSubsystemImplementation.h"

#ifdef TAKERECORDER_TakeRecorderSubsystemImplementation_generated_h
#error "TakeRecorderSubsystemImplementation.generated.h already included, missing '#pragma once' in TakeRecorderSubsystemImplementation.h"
#endif
#define TAKERECORDER_TakeRecorderSubsystemImplementation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderSubsystemImplementation *************************************
struct Z_Construct_UClass_UTakeRecorderSubsystemImplementation_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderSubsystemImplementation_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderSubsystemImplementation(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderSubsystemImplementation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderSubsystemImplementation_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderSubsystemImplementation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderSubsystemImplementation_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderSubsystemImplementation) \
	virtual UObject* _getUObject() const override { return const_cast<UTakeRecorderSubsystemImplementation*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorderSubsystemImplementation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderSubsystemImplementation(UTakeRecorderSubsystemImplementation&&) = delete; \
	UTakeRecorderSubsystemImplementation(const UTakeRecorderSubsystemImplementation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderSubsystemImplementation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSubsystemImplementation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderSubsystemImplementation) \
	NO_API virtual ~UTakeRecorderSubsystemImplementation();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderSubsystemImplementation;

// ********** End Class UTakeRecorderSubsystemImplementation ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_Recorder_TakeRecorderSubsystemImplementation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
