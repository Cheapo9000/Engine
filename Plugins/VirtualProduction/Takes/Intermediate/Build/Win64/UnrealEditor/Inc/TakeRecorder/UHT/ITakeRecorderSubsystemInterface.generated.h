// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/ITakeRecorderSubsystemInterface.h"

#ifdef TAKERECORDER_ITakeRecorderSubsystemInterface_generated_h
#error "ITakeRecorderSubsystemInterface.generated.h already included, missing '#pragma once' in ITakeRecorderSubsystemInterface.h"
#endif
#define TAKERECORDER_ITakeRecorderSubsystemInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UTakeRecorderSubsystemInterface **************************************
struct Z_Construct_UClass_UTakeRecorderSubsystemInterface_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderSubsystemInterface_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKERECORDER_API UTakeRecorderSubsystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderSubsystemInterface(UTakeRecorderSubsystemInterface&&) = delete; \
	UTakeRecorderSubsystemInterface(const UTakeRecorderSubsystemInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorderSubsystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSubsystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderSubsystemInterface) \
	virtual ~UTakeRecorderSubsystemInterface() = default;


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTakeRecorderSubsystemInterface(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderSubsystemInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderSubsystemInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderSubsystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderSubsystemInterface_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderSubsystemInterface)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITakeRecorderSubsystemInterface() {} \
public: \
	typedef UTakeRecorderSubsystemInterface UClassType; \
	typedef ITakeRecorderSubsystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderSubsystemInterface;

// ********** End Interface UTakeRecorderSubsystemInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_ITakeRecorderSubsystemInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
