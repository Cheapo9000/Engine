// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakePreset.h"

#ifdef TAKESCORE_TakePreset_generated_h
#error "TakePreset.generated.h already included, missing '#pragma once' in TakePreset.h"
#endif
#define TAKESCORE_TakePreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakePreset **************************************************************
struct Z_Construct_UClass_UTakePreset_Statics;
TAKESCORE_API UClass* Z_Construct_UClass_UTakePreset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakePreset(); \
	friend struct ::Z_Construct_UClass_UTakePreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKESCORE_API UClass* ::Z_Construct_UClass_UTakePreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakePreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), Z_Construct_UClass_UTakePreset_NoRegister) \
	DECLARE_SERIALIZER(UTakePreset)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakePreset(UTakePreset&&) = delete; \
	UTakePreset(const UTakePreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKESCORE_API, UTakePreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakePreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakePreset) \
	TAKESCORE_API virtual ~UTakePreset();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakePreset;

// ********** End Class UTakePreset ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
