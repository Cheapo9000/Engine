// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlActor.h"

#ifdef PHYSICSCONTROL_PhysicsControlActor_generated_h
#error "PhysicsControlActor.generated.h already included, missing '#pragma once' in PhysicsControlActor.h"
#endif
#define PHYSICSCONTROL_PhysicsControlActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsControlComponent;

// ********** Begin ScriptStruct FInitialPhysicsControl ********************************************
struct Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics;
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics; \
	PHYSICSCONTROL_API static class UScriptStruct* StaticStruct();


struct FInitialPhysicsControl;
// ********** End ScriptStruct FInitialPhysicsControl **********************************************

// ********** Begin ScriptStruct FInitialBodyModifier **********************************************
struct Z_Construct_UScriptStruct_FInitialBodyModifier_Statics;
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInitialBodyModifier_Statics; \
	PHYSICSCONTROL_API static class UScriptStruct* StaticStruct();


struct FInitialBodyModifier;
// ********** End ScriptStruct FInitialBodyModifier ************************************************

// ********** Begin ScriptStruct FInitialCharacterControls *****************************************
struct Z_Construct_UScriptStruct_FInitialCharacterControls_Statics;
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInitialCharacterControls_Statics; \
	PHYSICSCONTROL_API static class UScriptStruct* StaticStruct();


struct FInitialCharacterControls;
// ********** End ScriptStruct FInitialCharacterControls *******************************************

// ********** Begin Class UPhysicsControlInitializerComponent **************************************
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateControls);


struct Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics;
PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsControlInitializerComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROL_API UClass* ::Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsControlInitializerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsControlInitializerComponent)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsControlInitializerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlInitializerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlInitializerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlInitializerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsControlInitializerComponent(UPhysicsControlInitializerComponent&&) = delete; \
	UPhysicsControlInitializerComponent(const UPhysicsControlInitializerComponent&) = delete; \
	NO_API virtual ~UPhysicsControlInitializerComponent();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_166_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsControlInitializerComponent;

// ********** End Class UPhysicsControlInitializerComponent ****************************************

// ********** Begin Class APhysicsControlActor *****************************************************
struct Z_Construct_UClass_APhysicsControlActor_Statics;
PHYSICSCONTROL_API UClass* Z_Construct_UClass_APhysicsControlActor_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_224_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsControlActor(); \
	friend struct ::Z_Construct_UClass_APhysicsControlActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROL_API UClass* ::Z_Construct_UClass_APhysicsControlActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APhysicsControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), Z_Construct_UClass_APhysicsControlActor_NoRegister) \
	DECLARE_SERIALIZER(APhysicsControlActor)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_224_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCONTROL_API APhysicsControlActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsControlActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROL_API, APhysicsControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsControlActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhysicsControlActor(APhysicsControlActor&&) = delete; \
	APhysicsControlActor(const APhysicsControlActor&) = delete; \
	PHYSICSCONTROL_API virtual ~APhysicsControlActor();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_221_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_224_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_224_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_224_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhysicsControlActor;

// ********** End Class APhysicsControlActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
