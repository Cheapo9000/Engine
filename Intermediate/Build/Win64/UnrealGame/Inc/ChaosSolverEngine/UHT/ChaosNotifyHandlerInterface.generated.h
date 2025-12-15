// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosNotifyHandlerInterface.h"

#ifdef CHAOSSOLVERENGINE_ChaosNotifyHandlerInterface_generated_h
#error "ChaosNotifyHandlerInterface.generated.h already included, missing '#pragma once' in ChaosNotifyHandlerInterface.h"
#endif
#define CHAOSSOLVERENGINE_ChaosNotifyHandlerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosPhysicsCollisionInfo;
struct FHitResult;

// ********** Begin ScriptStruct FChaosPhysicsCollisionInfo ****************************************
struct Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosPhysicsCollisionInfo;
// ********** End ScriptStruct FChaosPhysicsCollisionInfo ******************************************

// ********** Begin Delegate FOnChaosPhysicsCollision **********************************************
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_58_DELEGATE \
CHAOSSOLVERENGINE_API void FOnChaosPhysicsCollision_DelegateWrapper(const FMulticastScriptDelegate& OnChaosPhysicsCollision, FChaosPhysicsCollisionInfo const& CollisionInfo);


// ********** End Delegate FOnChaosPhysicsCollision ************************************************

// ********** Begin Interface UChaosNotifyHandlerInterface *****************************************
struct Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSSOLVERENGINE_API UChaosNotifyHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosNotifyHandlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosNotifyHandlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosNotifyHandlerInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosNotifyHandlerInterface(UChaosNotifyHandlerInterface&&) = delete; \
	UChaosNotifyHandlerInterface(const UChaosNotifyHandlerInterface&) = delete; \
	virtual ~UChaosNotifyHandlerInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosNotifyHandlerInterface(); \
	friend struct ::Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosNotifyHandlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister) \
	DECLARE_SERIALIZER(UChaosNotifyHandlerInterface)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_INCLASS_IINTERFACE \
protected: \
	virtual ~IChaosNotifyHandlerInterface() {} \
public: \
	typedef UChaosNotifyHandlerInterface UClassType; \
	typedef IChaosNotifyHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_61_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_64_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosNotifyHandlerInterface;

// ********** End Interface UChaosNotifyHandlerInterface *******************************************

// ********** Begin Class UChaosSolverEngineBlueprintLibrary ***************************************
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertPhysicsCollisionToHitResult);


struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosSolverEngineBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosSolverEngineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UChaosSolverEngineBlueprintLibrary)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSSOLVERENGINE_API UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosSolverEngineBlueprintLibrary(UChaosSolverEngineBlueprintLibrary&&) = delete; \
	UChaosSolverEngineBlueprintLibrary(const UChaosSolverEngineBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosSolverEngineBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverEngineBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverEngineBlueprintLibrary) \
	CHAOSSOLVERENGINE_API virtual ~UChaosSolverEngineBlueprintLibrary();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_88_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosSolverEngineBlueprintLibrary;

// ********** End Class UChaosSolverEngineBlueprintLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
