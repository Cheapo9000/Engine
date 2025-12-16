// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderMicrophoneAudioManager.h"

#ifdef TAKERECORDERSOURCES_TakeRecorderMicrophoneAudioManager_generated_h
#error "TakeRecorderMicrophoneAudioManager.generated.h already included, missing '#pragma once' in TakeRecorderMicrophoneAudioManager.h"
#endif
#define TAKERECORDERSOURCES_TakeRecorderMicrophoneAudioManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderMicrophoneAudioManager **************************************
struct Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics;
TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderMicrophoneAudioManager(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDERSOURCES_API UClass* ::Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderMicrophoneAudioManager, UTakeRecorderAudioInputSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeRecorderSources"), Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderMicrophoneAudioManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderMicrophoneAudioManager(UTakeRecorderMicrophoneAudioManager&&) = delete; \
	UTakeRecorderMicrophoneAudioManager(const UTakeRecorderMicrophoneAudioManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDERSOURCES_API, UTakeRecorderMicrophoneAudioManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderMicrophoneAudioManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderMicrophoneAudioManager) \
	TAKERECORDERSOURCES_API virtual ~UTakeRecorderMicrophoneAudioManager();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderMicrophoneAudioManager;

// ********** End Class UTakeRecorderMicrophoneAudioManager ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderMicrophoneAudioManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
