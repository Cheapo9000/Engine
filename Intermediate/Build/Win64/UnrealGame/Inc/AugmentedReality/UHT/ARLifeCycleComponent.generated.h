// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARLifeCycleComponent.h"

#ifdef AUGMENTEDREALITY_ARLifeCycleComponent_generated_h
#error "ARLifeCycleComponent.generated.h already included, missing '#pragma once' in ARLifeCycleComponent.h"
#endif
#define AUGMENTEDREALITY_ARLifeCycleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AARActor;
class UClass;
class UObject;
struct FGuid;

// ********** Begin Delegate FInstanceARActorSpawnedDelegate ***************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_35_DELEGATE \
static AUGMENTEDREALITY_API void FInstanceARActorSpawnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorSpawnedDelegate, UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor);


// ********** End Delegate FInstanceARActorSpawnedDelegate *****************************************

// ********** Begin Delegate FInstanceARActorToBeDestroyedDelegate *********************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_40_DELEGATE \
static AUGMENTEDREALITY_API void FInstanceARActorToBeDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorToBeDestroyedDelegate, AARActor* Actor);


// ********** End Delegate FInstanceARActorToBeDestroyedDelegate ***********************************

// ********** Begin Class UARLifeCycleComponent ****************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerDestroyARActor_Validate(AARActor* ); \
	AUGMENTEDREALITY_API virtual void ServerDestroyARActor_Implementation(AARActor* Actor); \
	AUGMENTEDREALITY_API virtual bool ServerSpawnARActor_Validate(UClass* , FGuid ); \
	AUGMENTEDREALITY_API virtual void ServerSpawnARActor_Implementation(UClass* ComponentClass, FGuid NativeID); \
	DECLARE_FUNCTION(execServerDestroyARActor); \
	DECLARE_FUNCTION(execServerSpawnARActor);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARLifeCycleComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLifeCycleComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLifeCycleComponent(); \
	friend struct ::Z_Construct_UClass_UARLifeCycleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARLifeCycleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARLifeCycleComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARLifeCycleComponent_NoRegister) \
	DECLARE_SERIALIZER(UARLifeCycleComponent)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARLifeCycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARLifeCycleComponent(UARLifeCycleComponent&&) = delete; \
	UARLifeCycleComponent(const UARLifeCycleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARLifeCycleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLifeCycleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLifeCycleComponent) \
	AUGMENTEDREALITY_API virtual ~UARLifeCycleComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARLifeCycleComponent;

// ********** End Class UARLifeCycleComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
