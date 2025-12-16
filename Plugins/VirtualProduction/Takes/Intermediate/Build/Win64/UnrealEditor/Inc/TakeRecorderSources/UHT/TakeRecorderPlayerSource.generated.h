// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderPlayerSource.h"

#ifdef TAKERECORDERSOURCES_TakeRecorderPlayerSource_generated_h
#error "TakeRecorderPlayerSource.generated.h already included, missing '#pragma once' in TakeRecorderPlayerSource.h"
#endif
#define TAKERECORDERSOURCES_TakeRecorderPlayerSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderPlayerSource ************************************************
struct Z_Construct_UClass_UTakeRecorderPlayerSource_Statics;
TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderPlayerSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderPlayerSource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderPlayerSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDERSOURCES_API UClass* ::Z_Construct_UClass_UTakeRecorderPlayerSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderPlayerSource, UTakeRecorderSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorderSources"), Z_Construct_UClass_UTakeRecorderPlayerSource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderPlayerSource)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderPlayerSource(UTakeRecorderPlayerSource&&) = delete; \
	UTakeRecorderPlayerSource(const UTakeRecorderPlayerSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDERSOURCES_API, UTakeRecorderPlayerSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderPlayerSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderPlayerSource) \
	TAKERECORDERSOURCES_API virtual ~UTakeRecorderPlayerSource();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderPlayerSource;

// ********** End Class UTakeRecorderPlayerSource **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderPlayerSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
