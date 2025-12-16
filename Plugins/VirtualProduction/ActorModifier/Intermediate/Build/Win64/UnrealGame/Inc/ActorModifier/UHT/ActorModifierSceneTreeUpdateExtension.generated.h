// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/ActorModifierSceneTreeUpdateExtension.h"

#ifdef ACTORMODIFIER_ActorModifierSceneTreeUpdateExtension_generated_h
#error "ActorModifierSceneTreeUpdateExtension.generated.h already included, missing '#pragma once' in ActorModifierSceneTreeUpdateExtension.h"
#endif
#define ACTORMODIFIER_ActorModifierSceneTreeUpdateExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorModifierSceneTreeActor **************************************
struct Z_Construct_UScriptStruct_FActorModifierSceneTreeActor_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierSceneTreeActor_Statics; \
	ACTORMODIFIER_API static class UScriptStruct* StaticStruct();


struct FActorModifierSceneTreeActor;
// ********** End ScriptStruct FActorModifierSceneTreeActor ****************************************

// ********** Begin Interface UActorModifierSceneTreeUpdateHandler *********************************
struct Z_Construct_UClass_UActorModifierSceneTreeUpdateHandler_Statics;
ACTORMODIFIER_API UClass* Z_Construct_UClass_UActorModifierSceneTreeUpdateHandler_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIER_API UActorModifierSceneTreeUpdateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierSceneTreeUpdateHandler(UActorModifierSceneTreeUpdateHandler&&) = delete; \
	UActorModifierSceneTreeUpdateHandler(const UActorModifierSceneTreeUpdateHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIER_API, UActorModifierSceneTreeUpdateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierSceneTreeUpdateHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorModifierSceneTreeUpdateHandler) \
	virtual ~UActorModifierSceneTreeUpdateHandler() = default;


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorModifierSceneTreeUpdateHandler(); \
	friend struct ::Z_Construct_UClass_UActorModifierSceneTreeUpdateHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIER_API UClass* ::Z_Construct_UClass_UActorModifierSceneTreeUpdateHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierSceneTreeUpdateHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActorModifier"), Z_Construct_UClass_UActorModifierSceneTreeUpdateHandler_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierSceneTreeUpdateHandler)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorModifierSceneTreeUpdateHandler() {} \
public: \
	typedef UActorModifierSceneTreeUpdateHandler UClassType; \
	typedef IActorModifierSceneTreeUpdateHandler ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_88_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h_91_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierSceneTreeUpdateHandler;

// ********** End Interface UActorModifierSceneTreeUpdateHandler ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Extensions_ActorModifierSceneTreeUpdateExtension_h

// ********** Begin Enum EActorModifierReferenceContainer ******************************************
#define FOREACH_ENUM_EACTORMODIFIERREFERENCECONTAINER(op) \
	op(EActorModifierReferenceContainer::Previous) \
	op(EActorModifierReferenceContainer::Next) \
	op(EActorModifierReferenceContainer::First) \
	op(EActorModifierReferenceContainer::Last) \
	op(EActorModifierReferenceContainer::Other) 

enum class EActorModifierReferenceContainer : uint8;
template<> struct TIsUEnumClass<EActorModifierReferenceContainer> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierReferenceContainer>();
// ********** End Enum EActorModifierReferenceContainer ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
