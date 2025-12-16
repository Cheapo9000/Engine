// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/ActorModifierRenderStateUpdateExtension.h"

#ifdef ACTORMODIFIER_ActorModifierRenderStateUpdateExtension_generated_h
#error "ActorModifierRenderStateUpdateExtension.generated.h already included, missing '#pragma once' in ActorModifierRenderStateUpdateExtension.h"
#endif
#define ACTORMODIFIER_ActorModifierRenderStateUpdateExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UActorModifierRenderStateUpdateHandler *******************************
struct Z_Construct_UClass_UActorModifierRenderStateUpdateHandler_Statics;
ACTORMODIFIER_API UClass* Z_Construct_UClass_UActorModifierRenderStateUpdateHandler_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIER_API UActorModifierRenderStateUpdateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierRenderStateUpdateHandler(UActorModifierRenderStateUpdateHandler&&) = delete; \
	UActorModifierRenderStateUpdateHandler(const UActorModifierRenderStateUpdateHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIER_API, UActorModifierRenderStateUpdateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierRenderStateUpdateHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorModifierRenderStateUpdateHandler) \
	virtual ~UActorModifierRenderStateUpdateHandler() = default;


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorModifierRenderStateUpdateHandler(); \
	friend struct ::Z_Construct_UClass_UActorModifierRenderStateUpdateHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIER_API UClass* ::Z_Construct_UClass_UActorModifierRenderStateUpdateHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierRenderStateUpdateHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActorModifier"), Z_Construct_UClass_UActorModifierRenderStateUpdateHandler_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierRenderStateUpdateHandler)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorModifierRenderStateUpdateHandler() {} \
public: \
	typedef UActorModifierRenderStateUpdateHandler UClassType; \
	typedef IActorModifierRenderStateUpdateHandler ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierRenderStateUpdateHandler;

// ********** End Interface UActorModifierRenderStateUpdateHandler *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierRenderStateUpdateExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
