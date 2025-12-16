// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorder.h"

#ifdef TAKERECORDER_TakeRecorder_generated_h
#error "TakeRecorder.generated.h already included, missing '#pragma once' in TakeRecorder.h"
#endif
#define TAKERECORDER_TakeRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
enum class ETakeRecorderState : uint8;

// ********** Begin Class UTakeRecorder ************************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execSetCountdown); \
	DECLARE_FUNCTION(execGetCountdownSeconds);


struct Z_Construct_UClass_UTakeRecorder_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorder_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorder(); \
	friend struct ::Z_Construct_UClass_UTakeRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorder_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorder(UTakeRecorder&&) = delete; \
	UTakeRecorder(const UTakeRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorder) \
	TAKERECORDER_API virtual ~UTakeRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_62_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_67_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorder;

// ********** End Class UTakeRecorder **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h

// ********** Begin Enum ETakeRecorderState ********************************************************
#define FOREACH_ENUM_ETAKERECORDERSTATE(op) \
	op(ETakeRecorderState::PreInitialization) \
	op(ETakeRecorderState::CountingDown) \
	op(ETakeRecorderState::PreRecord) \
	op(ETakeRecorderState::TickingAfterPre) \
	op(ETakeRecorderState::Started) \
	op(ETakeRecorderState::Stopped) \
	op(ETakeRecorderState::Cancelled) 

enum class ETakeRecorderState : uint8;
template<> struct TIsUEnumClass<ETakeRecorderState> { enum { Value = true }; };
template<> TAKERECORDER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETakeRecorderState>();
// ********** End Enum ETakeRecorderState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
