// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureStats.h"

#ifdef STATSVIEWER_TextureStats_generated_h
#error "TextureStats.generated.h already included, missing '#pragma once' in TextureStats.h"
#endif
#define STATSVIEWER_TextureStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureStats ************************************************************
struct Z_Construct_UClass_UTextureStats_Statics;
STATSVIEWER_API UClass* Z_Construct_UClass_UTextureStats_NoRegister();

#define FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTextureStats(); \
	friend struct ::Z_Construct_UClass_UTextureStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATSVIEWER_API UClass* ::Z_Construct_UClass_UTextureStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), Z_Construct_UClass_UTextureStats_NoRegister) \
	DECLARE_SERIALIZER(UTextureStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UTextureStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UTextureStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureStats); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureStats(UTextureStats&&) = delete; \
	UTextureStats(const UTextureStats&) = delete; \
	STATSVIEWER_API virtual ~UTextureStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_33_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureStats;

// ********** End Class UTextureStats **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h

// ********** Begin Enum ETextureObjectSets ********************************************************
#define FOREACH_ENUM_ETEXTUREOBJECTSETS(op) \
	op(TextureObjectSet_CurrentStreamingLevel) \
	op(TextureObjectSet_AllStreamingLevels) \
	op(TextureObjectSet_SelectedActors) \
	op(TextureObjectSet_SelectedMaterials) 

enum ETextureObjectSets : int;
template<> STATSVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureObjectSets>();
// ********** End Enum ETextureObjectSets **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
