// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense.h"

#ifdef AIMODULE_AISense_generated_h
#error "AISense.generated.h already included, missing '#pragma once' in AISense.h"
#endif
#define AIMODULE_AISense_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISense *****************************************************************
struct Z_Construct_UClass_UAISense_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAISense(); \
	friend struct ::Z_Construct_UClass_UAISense_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISense_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISense, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISense_NoRegister) \
	DECLARE_SERIALIZER(UAISense)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISense(UAISense&&) = delete; \
	UAISense(const UAISense&) = delete; \
	AIMODULE_API virtual ~UAISense();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_19_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISense;

// ********** End Class UAISense *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
