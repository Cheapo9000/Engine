// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Movement/MassMovementTrait.h"

#ifdef MASSMOVEMENT_MassMovementTrait_generated_h
#error "MassMovementTrait.generated.h already included, missing '#pragma once' in MassMovementTrait.h"
#endif
#define MASSMOVEMENT_MassMovementTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassMovementTrait *******************************************************
struct Z_Construct_UClass_UMassMovementTrait_Statics;
MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassMovementTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassMovementTrait(); \
	friend struct ::Z_Construct_UClass_UMassMovementTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSMOVEMENT_API UClass* ::Z_Construct_UClass_UMassMovementTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassMovementTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassMovement"), Z_Construct_UClass_UMassMovementTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassMovementTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSMOVEMENT_API UMassMovementTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassMovementTrait(UMassMovementTrait&&) = delete; \
	UMassMovementTrait(const UMassMovementTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSMOVEMENT_API, UMassMovementTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassMovementTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassMovementTrait) \
	MASSMOVEMENT_API virtual ~UMassMovementTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassMovementTrait;

// ********** End Class UMassMovementTrait *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
