// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphCrowdLaneAnnotations.h"

#ifdef MASSCROWD_ZoneGraphCrowdLaneAnnotations_generated_h
#error "ZoneGraphCrowdLaneAnnotations.generated.h already included, missing '#pragma once' in ZoneGraphCrowdLaneAnnotations.h"
#endif
#define MASSCROWD_ZoneGraphCrowdLaneAnnotations_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FZoneGraphCrowdLaneStateChangeEvent *******************************
struct Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct(); \
	typedef FZoneGraphAnnotationEventBase Super;


struct FZoneGraphCrowdLaneStateChangeEvent;
// ********** End ScriptStruct FZoneGraphCrowdLaneStateChangeEvent *********************************

// ********** Begin Class UZoneGraphCrowdLaneAnnotations *******************************************
struct Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphCrowdLaneAnnotations(); \
	friend struct ::Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphCrowdLaneAnnotations, UZoneGraphAnnotationComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphCrowdLaneAnnotations)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UZoneGraphCrowdLaneAnnotations(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphCrowdLaneAnnotations(UZoneGraphCrowdLaneAnnotations&&) = delete; \
	UZoneGraphCrowdLaneAnnotations(const UZoneGraphCrowdLaneAnnotations&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UZoneGraphCrowdLaneAnnotations); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphCrowdLaneAnnotations); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphCrowdLaneAnnotations) \
	MASSCROWD_API virtual ~UZoneGraphCrowdLaneAnnotations();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_35_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphCrowdLaneAnnotations;

// ********** End Class UZoneGraphCrowdLaneAnnotations *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
