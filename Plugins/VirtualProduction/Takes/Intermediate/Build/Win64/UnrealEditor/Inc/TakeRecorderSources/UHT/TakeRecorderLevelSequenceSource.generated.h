// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderLevelSequenceSource.h"

#ifdef TAKERECORDERSOURCES_TakeRecorderLevelSequenceSource_generated_h
#error "TakeRecorderLevelSequenceSource.generated.h already included, missing '#pragma once' in TakeRecorderLevelSequenceSource.h"
#endif
#define TAKERECORDERSOURCES_TakeRecorderLevelSequenceSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderLevelSequenceSource *****************************************
struct Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics;
TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelSequenceSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderLevelSequenceSource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDERSOURCES_API UClass* ::Z_Construct_UClass_UTakeRecorderLevelSequenceSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderLevelSequenceSource, UTakeRecorderSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorderSources"), Z_Construct_UClass_UTakeRecorderLevelSequenceSource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderLevelSequenceSource)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderLevelSequenceSource(UTakeRecorderLevelSequenceSource&&) = delete; \
	UTakeRecorderLevelSequenceSource(const UTakeRecorderLevelSequenceSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDERSOURCES_API, UTakeRecorderLevelSequenceSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderLevelSequenceSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderLevelSequenceSource) \
	TAKERECORDERSOURCES_API virtual ~UTakeRecorderLevelSequenceSource();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderLevelSequenceSource;

// ********** End Class UTakeRecorderLevelSequenceSource *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderLevelSequenceSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
