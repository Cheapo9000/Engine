// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/SpectatorPawnMovement.h"

#ifdef ENGINE_SpectatorPawnMovement_generated_h
#error "SpectatorPawnMovement.generated.h already included, missing '#pragma once' in SpectatorPawnMovement.h"
#endif
#define ENGINE_SpectatorPawnMovement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpectatorPawnMovement ***************************************************
struct Z_Construct_UClass_USpectatorPawnMovement_Statics;
ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSpectatorPawnMovement(); \
	friend struct ::Z_Construct_UClass_USpectatorPawnMovement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USpectatorPawnMovement_NoRegister(); \
public: \
	DECLARE_CLASS2(USpectatorPawnMovement, UFloatingPawnMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USpectatorPawnMovement_NoRegister) \
	DECLARE_SERIALIZER(USpectatorPawnMovement)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USpectatorPawnMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectatorPawnMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USpectatorPawnMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectatorPawnMovement); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpectatorPawnMovement(USpectatorPawnMovement&&) = delete; \
	USpectatorPawnMovement(const USpectatorPawnMovement&) = delete; \
	ENGINE_API virtual ~USpectatorPawnMovement();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpectatorPawnMovement;

// ********** End Class USpectatorPawnMovement *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
