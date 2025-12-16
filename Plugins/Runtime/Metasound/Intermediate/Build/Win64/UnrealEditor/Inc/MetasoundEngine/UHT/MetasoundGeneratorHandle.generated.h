// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundGeneratorHandle.h"

#ifdef METASOUNDENGINE_MetasoundGeneratorHandle_generated_h
#error "MetasoundGeneratorHandle.generated.h already included, missing '#pragma once' in MetasoundGeneratorHandle.h"
#endif
#define METASOUNDENGINE_MetasoundGeneratorHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UMetasoundGeneratorHandle;
class UMetasoundParameterPack;
struct FMetaSoundOutput;

// ********** Begin Delegate FOnMetasoundOutputValueChanged ****************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_28_DELEGATE \
METASOUNDENGINE_API void FOnMetasoundOutputValueChanged_DelegateWrapper(const FScriptDelegate& OnMetasoundOutputValueChanged, FName OutputName, FMetaSoundOutput const& Output);


// ********** End Delegate FOnMetasoundOutputValueChanged ******************************************

// ********** Begin Delegate FOnMetasoundOutputValueChangedMulticast *******************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_31_DELEGATE \
METASOUNDENGINE_API void FOnMetasoundOutputValueChangedMulticast_DelegateWrapper(const FMulticastScriptDelegate& OnMetasoundOutputValueChangedMulticast, FName Name, FMetaSoundOutput const& Output);


// ********** End Delegate FOnMetasoundOutputValueChangedMulticast *********************************

// ********** Begin Class UMetasoundGeneratorHandle ************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCPUCoreUtilization); \
	DECLARE_FUNCTION(execEnableRuntimeRenderTiming); \
	DECLARE_FUNCTION(execUpdateWatchers); \
	DECLARE_FUNCTION(execWatchOutput); \
	DECLARE_FUNCTION(execApplyParameterPack); \
	DECLARE_FUNCTION(execCreateMetaSoundGeneratorHandle);


struct Z_Construct_UClass_UMetasoundGeneratorHandle_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundGeneratorHandle(); \
	friend struct ::Z_Construct_UClass_UMetasoundGeneratorHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundGeneratorHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundGeneratorHandle)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetasoundGeneratorHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundGeneratorHandle(UMetasoundGeneratorHandle&&) = delete; \
	UMetasoundGeneratorHandle(const UMetasoundGeneratorHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetasoundGeneratorHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundGeneratorHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundGeneratorHandle) \
	METASOUNDENGINE_API virtual ~UMetasoundGeneratorHandle();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_419_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_422_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundGeneratorHandle;

// ********** End Class UMetasoundGeneratorHandle **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
