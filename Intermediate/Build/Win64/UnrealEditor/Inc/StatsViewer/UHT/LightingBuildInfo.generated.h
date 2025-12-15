// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightingBuildInfo.h"

#ifdef STATSVIEWER_LightingBuildInfo_generated_h
#error "LightingBuildInfo.generated.h already included, missing '#pragma once' in LightingBuildInfo.h"
#endif
#define STATSVIEWER_LightingBuildInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightingBuildInfo *******************************************************
struct Z_Construct_UClass_ULightingBuildInfo_Statics;
STATSVIEWER_API UClass* Z_Construct_UClass_ULightingBuildInfo_NoRegister();

#define FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULightingBuildInfo(); \
	friend struct ::Z_Construct_UClass_ULightingBuildInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATSVIEWER_API UClass* ::Z_Construct_UClass_ULightingBuildInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightingBuildInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), Z_Construct_UClass_ULightingBuildInfo_NoRegister) \
	DECLARE_SERIALIZER(ULightingBuildInfo)


#define FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API ULightingBuildInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightingBuildInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, ULightingBuildInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingBuildInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightingBuildInfo(ULightingBuildInfo&&) = delete; \
	ULightingBuildInfo(const ULightingBuildInfo&) = delete; \
	STATSVIEWER_API virtual ~ULightingBuildInfo();


#define FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_19_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightingBuildInfo;

// ********** End Class ULightingBuildInfo *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h

// ********** Begin Enum ELightingBuildInfoObjectSets **********************************************
#define FOREACH_ENUM_ELIGHTINGBUILDINFOOBJECTSETS(op) \
	op(LightingBuildInfoObjectSets_Default) 

enum ELightingBuildInfoObjectSets : int;
template<> STATSVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<ELightingBuildInfoObjectSets>();
// ********** End Enum ELightingBuildInfoObjectSets ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
