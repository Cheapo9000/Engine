// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PawnNoiseEmitterComponent.h"

#ifdef ENGINE_PawnNoiseEmitterComponent_generated_h
#error "PawnNoiseEmitterComponent.generated.h already included, missing '#pragma once' in PawnNoiseEmitterComponent.h"
#endif
#define ENGINE_PawnNoiseEmitterComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UPawnNoiseEmitterComponent ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeNoise);


struct Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPawnNoiseEmitterComponent(); \
	friend struct ::Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnNoiseEmitterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister) \
	DECLARE_SERIALIZER(UPawnNoiseEmitterComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPawnNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnNoiseEmitterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPawnNoiseEmitterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnNoiseEmitterComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnNoiseEmitterComponent(UPawnNoiseEmitterComponent&&) = delete; \
	UPawnNoiseEmitterComponent(const UPawnNoiseEmitterComponent&) = delete; \
	ENGINE_API virtual ~UPawnNoiseEmitterComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnNoiseEmitterComponent;

// ********** End Class UPawnNoiseEmitterComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
