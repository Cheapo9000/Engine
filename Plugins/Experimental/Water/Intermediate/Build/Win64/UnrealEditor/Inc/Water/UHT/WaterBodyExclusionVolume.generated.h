// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyExclusionVolume.h"

#ifdef WATER_WaterBodyExclusionVolume_generated_h
#error "WaterBodyExclusionVolume.generated.h already included, missing '#pragma once' in WaterBodyExclusionVolume.h"
#endif
#define WATER_WaterBodyExclusionVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWaterBodyExclusionVolume ************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBodyExclusionVolume, WATER_API)


struct Z_Construct_UClass_AWaterBodyExclusionVolume_Statics;
WATER_API UClass* Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyExclusionVolume(); \
	friend struct ::Z_Construct_UClass_AWaterBodyExclusionVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterBodyExclusionVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister) \
	DECLARE_SERIALIZER(AWaterBodyExclusionVolume) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API AWaterBodyExclusionVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyExclusionVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, AWaterBodyExclusionVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyExclusionVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterBodyExclusionVolume(AWaterBodyExclusionVolume&&) = delete; \
	AWaterBodyExclusionVolume(const AWaterBodyExclusionVolume&) = delete; \
	WATER_API virtual ~AWaterBodyExclusionVolume();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterBodyExclusionVolume;

// ********** End Class AWaterBodyExclusionVolume **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h

// ********** Begin Enum EWaterExclusionMode *******************************************************
#define FOREACH_ENUM_EWATEREXCLUSIONMODE(op) \
	op(EWaterExclusionMode::AddWaterBodiesListToExclusion) \
	op(EWaterExclusionMode::RemoveWaterBodiesListFromExclusion) 

enum class EWaterExclusionMode;
template<> struct TIsUEnumClass<EWaterExclusionMode> { enum { Value = true }; };
template<> WATER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaterExclusionMode>();
// ********** End Enum EWaterExclusionMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
