// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationTestingActor.h"

#ifdef NAVIGATIONSYSTEM_NavigationTestingActor_generated_h
#error "NavigationTestingActor.generated.h already included, missing '#pragma once' in NavigationTestingActor.h"
#endif
#define NAVIGATIONSYSTEM_NavigationTestingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANavigationTestingActor **************************************************
struct Z_Construct_UClass_ANavigationTestingActor_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_INCLASS \
private: \
	static void StaticRegisterNativesANavigationTestingActor(); \
	friend struct ::Z_Construct_UClass_ANavigationTestingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ANavigationTestingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavigationTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ANavigationTestingActor_NoRegister) \
	DECLARE_SERIALIZER(ANavigationTestingActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationTestingActor*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationTestingActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationTestingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationTestingActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavigationTestingActor(ANavigationTestingActor&&) = delete; \
	ANavigationTestingActor(const ANavigationTestingActor&) = delete;


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_45_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavigationTestingActor;

// ********** End Class ANavigationTestingActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h

// ********** Begin Enum ENavCostDisplay ***********************************************************
#define FOREACH_ENUM_ENAVCOSTDISPLAY(op) \
	op(ENavCostDisplay::TotalCost) \
	op(ENavCostDisplay::HeuristicOnly) \
	op(ENavCostDisplay::RealCostOnly) 

namespace ENavCostDisplay { enum Type : int; }
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavCostDisplay::Type>();
// ********** End Enum ENavCostDisplay *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
