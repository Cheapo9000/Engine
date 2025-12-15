// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeInfo.h"

#ifdef LANDSCAPE_LandscapeInfo_generated_h
#error "LandscapeInfo.generated.h already included, missing '#pragma once' in LandscapeInfo.h"
#endif
#define LANDSCAPE_LandscapeInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeInfoLayerSettings ***************************************
struct Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeInfoLayerSettings;
// ********** End ScriptStruct FLandscapeInfoLayerSettings *****************************************

// ********** Begin Class ULandscapeInfo ***********************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfo, NO_API)


struct Z_Construct_UClass_ULandscapeInfo_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend struct ::Z_Construct_UClass_ULandscapeInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeInfo_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeInfo(ULandscapeInfo&&) = delete; \
	ULandscapeInfo(const ULandscapeInfo&) = delete; \
	NO_API virtual ~ULandscapeInfo();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_107_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeInfo;

// ********** End Class ULandscapeInfo *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
