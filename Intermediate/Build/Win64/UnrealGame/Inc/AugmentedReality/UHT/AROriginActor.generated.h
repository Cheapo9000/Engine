// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AROriginActor.h"

#ifdef AUGMENTEDREALITY_AROriginActor_generated_h
#error "AROriginActor.generated.h already included, missing '#pragma once' in AROriginActor.h"
#endif
#define AUGMENTEDREALITY_AROriginActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAROriginActor ***********************************************************
struct Z_Construct_UClass_AAROriginActor_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AAROriginActor_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAROriginActor(); \
	friend struct ::Z_Construct_UClass_AAROriginActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_AAROriginActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAROriginActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_AAROriginActor_NoRegister) \
	DECLARE_SERIALIZER(AAROriginActor)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API AAROriginActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAROriginActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, AAROriginActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAROriginActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAROriginActor(AAROriginActor&&) = delete; \
	AAROriginActor(const AAROriginActor&) = delete; \
	AUGMENTEDREALITY_API virtual ~AAROriginActor();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_19_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAROriginActor;

// ********** End Class AAROriginActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
