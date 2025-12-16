// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleActor.h"

#ifdef APEXDESTRUCTION_DestructibleActor_generated_h
#error "DestructibleActor.generated.h already included, missing '#pragma once' in DestructibleActor.h"
#endif
#define APEXDESTRUCTION_DestructibleActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FActorFractureSignature ***********************************************
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_15_DELEGATE \
APEXDESTRUCTION_API void FActorFractureSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorFractureSignature, FVector const& HitPoint, FVector const& HitDirection);


// ********** End Delegate FActorFractureSignature *************************************************

// ********** Begin Class ADestructibleActor *******************************************************
struct Z_Construct_UClass_ADestructibleActor_Statics;
APEXDESTRUCTION_API UClass* Z_Construct_UClass_ADestructibleActor_NoRegister();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesADestructibleActor(); \
	friend struct ::Z_Construct_UClass_ADestructibleActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APEXDESTRUCTION_API UClass* ::Z_Construct_UClass_ADestructibleActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADestructibleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestruction"), Z_Construct_UClass_ADestructibleActor_NoRegister) \
	DECLARE_SERIALIZER(ADestructibleActor)


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestructibleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestructibleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADestructibleActor(ADestructibleActor&&) = delete; \
	ADestructibleActor(const ADestructibleActor&) = delete; \
	NO_API virtual ~ADestructibleActor();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADestructibleActor;

// ********** End Class ADestructibleActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
