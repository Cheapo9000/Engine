// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseEvent_Hearing.h"

#ifdef AIMODULE_AISenseEvent_Hearing_generated_h
#error "AISenseEvent_Hearing.generated.h already included, missing '#pragma once' in AISenseEvent_Hearing.h"
#endif
#define AIMODULE_AISenseEvent_Hearing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseEvent_Hearing ****************************************************
struct Z_Construct_UClass_UAISenseEvent_Hearing_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseEvent_Hearing(); \
	friend struct ::Z_Construct_UClass_UAISenseEvent_Hearing_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseEvent_Hearing, UAISenseEvent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister) \
	DECLARE_SERIALIZER(UAISenseEvent_Hearing)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseEvent_Hearing(UAISenseEvent_Hearing&&) = delete; \
	UAISenseEvent_Hearing(const UAISenseEvent_Hearing&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseEvent_Hearing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseEvent_Hearing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseEvent_Hearing) \
	AIMODULE_API virtual ~UAISenseEvent_Hearing();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseEvent_Hearing;

// ********** End Class UAISenseEvent_Hearing ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
