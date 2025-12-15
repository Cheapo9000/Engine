// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseEvent.h"

#ifdef AIMODULE_AISenseEvent_generated_h
#error "AISenseEvent.generated.h already included, missing '#pragma once' in AISenseEvent.h"
#endif
#define AIMODULE_AISenseEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseEvent ************************************************************
struct Z_Construct_UClass_UAISenseEvent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseEvent(); \
	friend struct ::Z_Construct_UClass_UAISenseEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseEvent_NoRegister) \
	DECLARE_SERIALIZER(UAISenseEvent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseEvent(UAISenseEvent&&) = delete; \
	UAISenseEvent(const UAISenseEvent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseEvent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseEvent) \
	AIMODULE_API virtual ~UAISenseEvent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseEvent;

// ********** End Class UAISenseEvent **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
