// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImgMediaSource.h"

#ifdef IMGMEDIA_ImgMediaSource_generated_h
#error "ImgMediaSource.generated.h already included, missing '#pragma once' in ImgMediaSource.h"
#endif
#define IMGMEDIA_ImgMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin ScriptStruct FImgMediaSourceCustomizationSequenceProxy *************************
struct Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics;
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics; \
	IMGMEDIA_API static class UScriptStruct* StaticStruct();


struct FImgMediaSourceCustomizationSequenceProxy;
// ********** End ScriptStruct FImgMediaSourceCustomizationSequenceProxy ***************************

// ********** Begin Class UImgMediaSource **********************************************************
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveTargetObject); \
	DECLARE_FUNCTION(execAddTargetObject); \
	DECLARE_FUNCTION(execSetTokenizedSequencePath); \
	DECLARE_FUNCTION(execSetSequencePath); \
	DECLARE_FUNCTION(execGetSequencePath); \
	DECLARE_FUNCTION(execGetProxies);


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UImgMediaSource, IMGMEDIA_API)


struct Z_Construct_UClass_UImgMediaSource_Statics;
IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource_NoRegister();

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImgMediaSource(); \
	friend struct ::Z_Construct_UClass_UImgMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMGMEDIA_API UClass* ::Z_Construct_UClass_UImgMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UImgMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImgMedia"), Z_Construct_UClass_UImgMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UImgMediaSource) \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImgMediaSource(UImgMediaSource&&) = delete; \
	UImgMediaSource(const UImgMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMGMEDIA_API, UImgMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImgMediaSource) \
	IMGMEDIA_API virtual ~UImgMediaSource();


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_46_PROLOG
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImgMediaSource;

// ********** End Class UImgMediaSource ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
