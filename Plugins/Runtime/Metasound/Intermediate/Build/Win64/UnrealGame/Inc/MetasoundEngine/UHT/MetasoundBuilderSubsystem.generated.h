// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundBuilderSubsystem.h"

#ifdef METASOUNDENGINE_MetasoundBuilderSubsystem_generated_h
#error "MetasoundBuilderSubsystem.generated.h already included, missing '#pragma once' in MetasoundBuilderSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundBuilderSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UAudioComponent;
class UMetaSoundBuilderBase;
class UMetasoundGeneratorHandle;
class UMetaSoundPatchBuilder;
class UMetaSoundSourceBuilder;
class UObject;
enum class EMetaSoundBuilderResult : uint8;
enum class EMetaSoundOutputAudioFormat : uint8;
struct FAudioParameter;
struct FMetaSoundBuilderNodeInputHandle;
struct FMetaSoundBuilderNodeOutputHandle;
struct FMetasoundFrontendLiteral;

// ********** Begin Delegate FOnCreateAuditionGeneratorHandleDelegate ******************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_49_DELEGATE \
METASOUNDENGINE_API void FOnCreateAuditionGeneratorHandleDelegate_DelegateWrapper(const FScriptDelegate& OnCreateAuditionGeneratorHandleDelegate, UMetasoundGeneratorHandle* GeneratorHandle);


// ********** End Delegate FOnCreateAuditionGeneratorHandleDelegate ********************************

// ********** Begin Class UMetaSoundPatchBuilder ***************************************************
struct Z_Construct_UClass_UMetaSoundPatchBuilder_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundPatchBuilder(); \
	friend struct ::Z_Construct_UClass_UMetaSoundPatchBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundPatchBuilder, UMetaSoundBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundPatchBuilder)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundPatchBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundPatchBuilder(UMetaSoundPatchBuilder&&) = delete; \
	UMetaSoundPatchBuilder(const UMetaSoundPatchBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundPatchBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundPatchBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundPatchBuilder) \
	METASOUNDENGINE_API virtual ~UMetaSoundPatchBuilder();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundPatchBuilder;

// ********** End Class UMetaSoundPatchBuilder *****************************************************

// ********** Begin Class UMetaSoundSourceBuilder **************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQuality); \
	DECLARE_FUNCTION(execSetSampleRateOverride); \
	DECLARE_FUNCTION(execSetFormat); \
	DECLARE_FUNCTION(execSetBlockRateOverride); \
	DECLARE_FUNCTION(execGetLiveUpdatesEnabled); \
	DECLARE_FUNCTION(execAudition);


struct Z_Construct_UClass_UMetaSoundSourceBuilder_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSourceBuilder(); \
	friend struct ::Z_Construct_UClass_UMetaSoundSourceBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundSourceBuilder, UMetaSoundBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundSourceBuilder)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundSourceBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundSourceBuilder(UMetaSoundSourceBuilder&&) = delete; \
	UMetaSoundSourceBuilder(const UMetaSoundSourceBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundSourceBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSourceBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSourceBuilder) \
	METASOUNDENGINE_API virtual ~UMetaSoundSourceBuilder();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_70_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundSourceBuilder;

// ********** End Class UMetaSoundSourceBuilder ****************************************************

// ********** Begin Class UMetaSoundBuilderSubsystem ***********************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterSourceBuilder); \
	DECLARE_FUNCTION(execUnregisterPatchBuilder); \
	DECLARE_FUNCTION(execUnregisterBuilder); \
	DECLARE_FUNCTION(execSetTargetPage); \
	DECLARE_FUNCTION(execRegisterSourceBuilder); \
	DECLARE_FUNCTION(execRegisterPatchBuilder); \
	DECLARE_FUNCTION(execRegisterBuilder); \
	DECLARE_FUNCTION(execIsInterfaceRegistered); \
	DECLARE_FUNCTION(execFindSourceBuilder); \
	DECLARE_FUNCTION(execFindPatchBuilder); \
	DECLARE_FUNCTION(execFindParentBuilderOfPreset); \
	DECLARE_FUNCTION(execFindBuilderOfDocument); \
	DECLARE_FUNCTION(execFindBuilder); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromParam); \
	DECLARE_FUNCTION(execCreateStringArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateStringMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateSourcePresetBuilder); \
	DECLARE_FUNCTION(execCreatePatchPresetBuilder); \
	DECLARE_FUNCTION(execCreateSourceBuilder); \
	DECLARE_FUNCTION(execCreatePatchBuilder);


struct Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderSubsystem(); \
	friend struct ::Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundBuilderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundBuilderSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundBuilderSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundBuilderSubsystem(UMetaSoundBuilderSubsystem&&) = delete; \
	UMetaSoundBuilderSubsystem(const UMetaSoundBuilderSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundBuilderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundBuilderSubsystem) \
	METASOUNDENGINE_API virtual ~UMetaSoundBuilderSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_159_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundBuilderSubsystem;

// ********** End Class UMetaSoundBuilderSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
