// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderSources.h"

#ifdef TAKESCORE_TakeRecorderSources_generated_h
#error "TakeRecorderSources.generated.h already included, missing '#pragma once' in TakeRecorderSources.h"
#endif
#define TAKESCORE_TakeRecorderSources_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UTakeRecorderSource;
struct FQualifiedFrameTime;

// ********** Begin Class UTakeRecorderSources *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartRecordingSource); \
	DECLARE_FUNCTION(execGetSourcesCopy); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execAddSource);


struct Z_Construct_UClass_UTakeRecorderSources_Statics;
TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSources_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderSources(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderSources_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKESCORE_API UClass* ::Z_Construct_UClass_UTakeRecorderSources_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderSources, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), Z_Construct_UClass_UTakeRecorderSources_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderSources)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderSources(UTakeRecorderSources&&) = delete; \
	UTakeRecorderSources(const UTakeRecorderSources&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKESCORE_API, UTakeRecorderSources); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSources); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderSources) \
	TAKESCORE_API virtual ~UTakeRecorderSources();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_40_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderSources;

// ********** End Class UTakeRecorderSources *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
