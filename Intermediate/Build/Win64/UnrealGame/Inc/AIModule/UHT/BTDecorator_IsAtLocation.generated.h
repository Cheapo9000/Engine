// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_IsAtLocation.h"

#ifdef AIMODULE_BTDecorator_IsAtLocation_generated_h
#error "BTDecorator_IsAtLocation.generated.h already included, missing '#pragma once' in BTDecorator_IsAtLocation.h"
#endif
#define AIMODULE_BTDecorator_IsAtLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTDecorator_IsAtLocation ************************************************
struct Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_IsAtLocation(); \
	friend struct ::Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTDecorator_IsAtLocation, UBTDecorator_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister) \
	DECLARE_SERIALIZER(UBTDecorator_IsAtLocation)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_IsAtLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_IsAtLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_IsAtLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_IsAtLocation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTDecorator_IsAtLocation(UBTDecorator_IsAtLocation&&) = delete; \
	UBTDecorator_IsAtLocation(const UBTDecorator_IsAtLocation&) = delete; \
	AIMODULE_API virtual ~UBTDecorator_IsAtLocation();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTDecorator_IsAtLocation;

// ********** End Class UBTDecorator_IsAtLocation **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsAtLocation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
