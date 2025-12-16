// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreComponent.h"

#ifdef ACTORMODIFIERCORE_ActorModifierCoreComponent_generated_h
#error "ActorModifierCoreComponent.generated.h already included, missing '#pragma once' in ActorModifierCoreComponent.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorModifierCoreStack;

// ********** Begin Class UActorModifierCoreComponent **********************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModifierStack);


struct Z_Construct_UClass_UActorModifierCoreComponent_Statics;
ACTORMODIFIERCORE_API UClass* Z_Construct_UClass_UActorModifierCoreComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreComponent(); \
	friend struct ::Z_Construct_UClass_UActorModifierCoreComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERCORE_API UClass* ::Z_Construct_UClass_UActorModifierCoreComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), Z_Construct_UClass_UActorModifierCoreComponent_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierCoreComponent)


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierCoreComponent(UActorModifierCoreComponent&&) = delete; \
	UActorModifierCoreComponent(const UActorModifierCoreComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERCORE_API, UActorModifierCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierCoreComponent) \
	ACTORMODIFIERCORE_API virtual ~UActorModifierCoreComponent();


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierCoreComponent;

// ********** End Class UActorModifierCoreComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
