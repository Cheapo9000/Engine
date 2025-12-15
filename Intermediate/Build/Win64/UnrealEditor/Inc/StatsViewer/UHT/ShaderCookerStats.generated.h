// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShaderCookerStats.h"

#ifdef STATSVIEWER_ShaderCookerStats_generated_h
#error "ShaderCookerStats.generated.h already included, missing '#pragma once' in ShaderCookerStats.h"
#endif
#define STATSVIEWER_ShaderCookerStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShaderCookerStats *******************************************************
struct Z_Construct_UClass_UShaderCookerStats_Statics;
STATSVIEWER_API UClass* Z_Construct_UClass_UShaderCookerStats_NoRegister();

#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUShaderCookerStats(); \
	friend struct ::Z_Construct_UClass_UShaderCookerStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATSVIEWER_API UClass* ::Z_Construct_UClass_UShaderCookerStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UShaderCookerStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), Z_Construct_UClass_UShaderCookerStats_NoRegister) \
	DECLARE_SERIALIZER(UShaderCookerStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UShaderCookerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderCookerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UShaderCookerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderCookerStats); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShaderCookerStats(UShaderCookerStats&&) = delete; \
	UShaderCookerStats(const UShaderCookerStats&) = delete; \
	STATSVIEWER_API virtual ~UShaderCookerStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_19_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShaderCookerStats;

// ********** End Class UShaderCookerStats *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h

// ********** Begin Enum EShaderCookerStatsSets ****************************************************
#define FOREACH_ENUM_ESHADERCOOKERSTATSSETS(op) \
	op(EShaderCookerStatsSets_Default) 

enum EShaderCookerStatsSets : int;
template<> STATSVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderCookerStatsSets>();
// ********** End Enum EShaderCookerStatsSets ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
