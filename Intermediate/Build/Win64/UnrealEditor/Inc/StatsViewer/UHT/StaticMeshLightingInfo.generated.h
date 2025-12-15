// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshLightingInfo.h"

#ifdef STATSVIEWER_StaticMeshLightingInfo_generated_h
#error "StaticMeshLightingInfo.generated.h already included, missing '#pragma once' in StaticMeshLightingInfo.h"
#endif
#define STATSVIEWER_StaticMeshLightingInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshLightingInfo **************************************************
struct Z_Construct_UClass_UStaticMeshLightingInfo_Statics;
STATSVIEWER_API UClass* Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister();

#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshLightingInfo(); \
	friend struct ::Z_Construct_UClass_UStaticMeshLightingInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATSVIEWER_API UClass* ::Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshLightingInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshLightingInfo)


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshLightingInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UStaticMeshLightingInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshLightingInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshLightingInfo(UStaticMeshLightingInfo&&) = delete; \
	UStaticMeshLightingInfo(const UStaticMeshLightingInfo&) = delete; \
	STATSVIEWER_API virtual ~UStaticMeshLightingInfo();


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_25_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshLightingInfo;

// ********** End Class UStaticMeshLightingInfo ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h

// ********** Begin Enum EStaticMeshLightingInfoObjectSets *****************************************
#define FOREACH_ENUM_ESTATICMESHLIGHTINGINFOOBJECTSETS(op) \
	op(StaticMeshLightingInfoObjectSets_CurrentLevel) \
	op(StaticMeshLightingInfoObjectSets_SelectedLevels) \
	op(StaticMeshLightingInfoObjectSets_AllLevels) 

enum EStaticMeshLightingInfoObjectSets : int;
template<> STATSVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<EStaticMeshLightingInfoObjectSets>();
// ********** End Enum EStaticMeshLightingInfoObjectSets *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
