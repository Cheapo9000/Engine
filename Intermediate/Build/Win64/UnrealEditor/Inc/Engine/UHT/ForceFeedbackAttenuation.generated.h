// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ForceFeedbackAttenuation.h"

#ifdef ENGINE_ForceFeedbackAttenuation_generated_h
#error "ForceFeedbackAttenuation.generated.h already included, missing '#pragma once' in ForceFeedbackAttenuation.h"
#endif
#define ENGINE_ForceFeedbackAttenuation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FForceFeedbackAttenuationSettings *********************************
struct Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_10_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseAttenuationSettings Super;


struct FForceFeedbackAttenuationSettings;
// ********** End ScriptStruct FForceFeedbackAttenuationSettings ***********************************

// ********** Begin Class UForceFeedbackAttenuation ************************************************
struct Z_Construct_UClass_UForceFeedbackAttenuation_Statics;
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceFeedbackAttenuation(); \
	friend struct ::Z_Construct_UClass_UForceFeedbackAttenuation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister(); \
public: \
	DECLARE_CLASS2(UForceFeedbackAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister) \
	DECLARE_SERIALIZER(UForceFeedbackAttenuation)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UForceFeedbackAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UForceFeedbackAttenuation(UForceFeedbackAttenuation&&) = delete; \
	UForceFeedbackAttenuation(const UForceFeedbackAttenuation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackAttenuation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackAttenuation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackAttenuation) \
	ENGINE_API virtual ~UForceFeedbackAttenuation();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UForceFeedbackAttenuation;

// ********** End Class UForceFeedbackAttenuation **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
