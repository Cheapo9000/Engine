// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/AsyncPhysicsInputComponent.h"

#ifdef ENGINE_AsyncPhysicsInputComponent_generated_h
#error "AsyncPhysicsInputComponent.generated.h already included, missing '#pragma once' in AsyncPhysicsInputComponent.h"
#endif
#define ENGINE_AsyncPhysicsInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncPhysicsData;

// ********** Begin Class UAsyncPhysicsInputComponent **********************************************
#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ENGINE_API virtual void ServerRPCBufferInput_Implementation(UAsyncPhysicsData* AsyncPhysicsData); \
	DECLARE_FUNCTION(execGetDataToConsume); \
	DECLARE_FUNCTION(execGetDataToWrite); \
	DECLARE_FUNCTION(execServerRPCBufferInput);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncPhysicsInputComponent(); \
	friend struct ::Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncPhysicsInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UAsyncPhysicsInputComponent)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncPhysicsInputComponent(UAsyncPhysicsInputComponent&&) = delete; \
	UAsyncPhysicsInputComponent(const UAsyncPhysicsInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAsyncPhysicsInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncPhysicsInputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncPhysicsInputComponent) \
	ENGINE_API virtual ~UAsyncPhysicsInputComponent();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncPhysicsInputComponent;

// ********** End Class UAsyncPhysicsInputComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
