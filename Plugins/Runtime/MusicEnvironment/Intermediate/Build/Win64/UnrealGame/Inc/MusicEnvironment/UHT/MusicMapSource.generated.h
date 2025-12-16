// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicTypes/MusicMapSource.h"

#ifdef MUSICENVIRONMENT_MusicMapSource_generated_h
#error "MusicMapSource.generated.h already included, missing '#pragma once' in MusicMapSource.h"
#endif
#define MUSICENVIRONMENT_MusicMapSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFrameBasedMusicMap;
struct FMarkerProviderResults;

// ********** Begin ScriptStruct FMarkerProviderResults ********************************************
struct Z_Construct_UScriptStruct_FMarkerProviderResults_Statics;
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMarkerProviderResults_Statics; \
	MUSICENVIRONMENT_API static class UScriptStruct* StaticStruct();


struct FMarkerProviderResults;
// ********** End ScriptStruct FMarkerProviderResults **********************************************

// ********** Begin Interface UMusicMapSource ******************************************************
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSongLengthSeconds); \
	DECLARE_FUNCTION(execGatherMarkers); \
	DECLARE_FUNCTION(execCreateFrameBasedMusicMap);


struct Z_Construct_UClass_UMusicMapSource_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicMapSource_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUSICENVIRONMENT_API UMusicMapSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicMapSource(UMusicMapSource&&) = delete; \
	UMusicMapSource(const UMusicMapSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UMusicMapSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicMapSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicMapSource) \
	virtual ~UMusicMapSource() = default;


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMusicMapSource(); \
	friend struct ::Z_Construct_UClass_UMusicMapSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicMapSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicMapSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicMapSource_NoRegister) \
	DECLARE_SERIALIZER(UMusicMapSource)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMusicMapSource() {} \
public: \
	typedef UMusicMapSource UClassType; \
	typedef IMusicMapSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_46_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h_49_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicMapSource;

// ********** End Interface UMusicMapSource ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicMapSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
