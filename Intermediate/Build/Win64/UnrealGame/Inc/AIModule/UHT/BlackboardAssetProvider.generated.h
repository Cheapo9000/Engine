// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BlackboardAssetProvider.h"

#ifdef AIMODULE_BlackboardAssetProvider_generated_h
#error "BlackboardAssetProvider.generated.h already included, missing '#pragma once' in BlackboardAssetProvider.h"
#endif
#define AIMODULE_BlackboardAssetProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlackboardData;

// ********** Begin Interface UBlackboardAssetProvider *********************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBlackboardAsset);


struct Z_Construct_UClass_UBlackboardAssetProvider_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardAssetProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardAssetProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardAssetProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardAssetProvider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardAssetProvider(UBlackboardAssetProvider&&) = delete; \
	UBlackboardAssetProvider(const UBlackboardAssetProvider&) = delete; \
	virtual ~UBlackboardAssetProvider() = default;


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlackboardAssetProvider(); \
	friend struct ::Z_Construct_UClass_UBlackboardAssetProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBlackboardAssetProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardAssetProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBlackboardAssetProvider_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardAssetProvider)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IBlackboardAssetProvider() {} \
public: \
	typedef UBlackboardAssetProvider UClassType; \
	typedef IBlackboardAssetProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_15_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardAssetProvider;

// ********** End Interface UBlackboardAssetProvider ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
