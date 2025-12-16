// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderSource.h"

#ifdef TAKESCORE_TakeRecorderSource_generated_h
#error "TakeRecorderSource.generated.h already included, missing '#pragma once' in TakeRecorderSource.h"
#endif
#define TAKESCORE_TakeRecorderSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderSource ******************************************************
struct Z_Construct_UClass_UTakeRecorderSource_Statics;
TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderSource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKESCORE_API UClass* ::Z_Construct_UClass_UTakeRecorderSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TakesCore"), Z_Construct_UClass_UTakeRecorderSource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderSource)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderSource(UTakeRecorderSource&&) = delete; \
	UTakeRecorderSource(const UTakeRecorderSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKESCORE_API, UTakeRecorderSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderSource) \
	TAKESCORE_API virtual ~UTakeRecorderSource();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderSource;

// ********** End Class UTakeRecorderSource ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
