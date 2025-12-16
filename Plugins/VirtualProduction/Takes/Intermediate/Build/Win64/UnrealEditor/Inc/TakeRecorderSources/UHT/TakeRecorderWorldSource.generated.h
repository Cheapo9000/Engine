// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderWorldSource.h"

#ifdef TAKERECORDERSOURCES_TakeRecorderWorldSource_generated_h
#error "TakeRecorderWorldSource.generated.h already included, missing '#pragma once' in TakeRecorderWorldSource.h"
#endif
#define TAKERECORDERSOURCES_TakeRecorderWorldSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderWorldSourceSettings *****************************************
struct Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics;
TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderWorldSourceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderWorldSourceSettings(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDERSOURCES_API UClass* ::Z_Construct_UClass_UTakeRecorderWorldSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderWorldSourceSettings, UTakeRecorderSource, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeRecorderSources"), Z_Construct_UClass_UTakeRecorderWorldSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderWorldSourceSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderWorldSourceSettings(UTakeRecorderWorldSourceSettings&&) = delete; \
	UTakeRecorderWorldSourceSettings(const UTakeRecorderWorldSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDERSOURCES_API, UTakeRecorderWorldSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderWorldSourceSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderWorldSourceSettings) \
	TAKERECORDERSOURCES_API virtual ~UTakeRecorderWorldSourceSettings();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderWorldSourceSettings;

// ********** End Class UTakeRecorderWorldSourceSettings *******************************************

// ********** Begin Class UTakeRecorderWorldSource *************************************************
struct Z_Construct_UClass_UTakeRecorderWorldSource_Statics;
TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderWorldSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderWorldSource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderWorldSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDERSOURCES_API UClass* ::Z_Construct_UClass_UTakeRecorderWorldSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderWorldSource, UTakeRecorderWorldSourceSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeRecorderSources"), Z_Construct_UClass_UTakeRecorderWorldSource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderWorldSource)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderWorldSource(UTakeRecorderWorldSource&&) = delete; \
	UTakeRecorderWorldSource(const UTakeRecorderWorldSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDERSOURCES_API, UTakeRecorderWorldSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderWorldSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderWorldSource) \
	TAKERECORDERSOURCES_API virtual ~UTakeRecorderWorldSource();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_39_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h_43_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderWorldSource;

// ********** End Class UTakeRecorderWorldSource ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderWorldSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
