// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTDecorator.h"

#ifdef AIMODULE_BTDecorator_generated_h
#error "BTDecorator.generated.h already included, missing '#pragma once' in BTDecorator.h"
#endif
#define AIMODULE_BTDecorator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTDecorator *************************************************************
struct Z_Construct_UClass_UBTDecorator_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator(); \
	friend struct ::Z_Construct_UClass_UBTDecorator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTDecorator_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTDecorator, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTDecorator_NoRegister) \
	DECLARE_SERIALIZER(UBTDecorator)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTDecorator(UBTDecorator&&) = delete; \
	UBTDecorator(const UBTDecorator&) = delete; \
	AIMODULE_API virtual ~UBTDecorator();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_36_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTDecorator;

// ********** End Class UBTDecorator ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
