// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ActorComponent.h"

#ifdef ENGINE_ActorComponent_generated_h
#error "ActorComponent.generated.h already included, missing '#pragma once' in ActorComponent.h"
#endif
#define ENGINE_ActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;

// ********** Begin SparseDelegate FActorComponentActivatedSignature *******************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_136_DELEGATE \
ENGINE_API void FActorComponentActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentActivatedSignature, UActorComponent* Component, bool bReset);


// ********** End SparseDelegate FActorComponentActivatedSignature *********************************

// ********** Begin SparseDelegate FActorComponentDeactivateSignature ******************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_137_DELEGATE \
ENGINE_API void FActorComponentDeactivateSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentDeactivateSignature, UActorComponent* Component);


// ********** End SparseDelegate FActorComponentDeactivateSignature ********************************

// ********** Begin Class UActorComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execK2_DestroyComponent); \
	DECLARE_FUNCTION(execGetComponentTickInterval); \
	DECLARE_FUNCTION(execSetComponentTickIntervalAndCooldown); \
	DECLARE_FUNCTION(execSetComponentTickInterval); \
	DECLARE_FUNCTION(execIsComponentTickEnabled); \
	DECLARE_FUNCTION(execSetComponentTickEnabled); \
	DECLARE_FUNCTION(execSetIsReplicated); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execSetAutoActivate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execComponentHasTag); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execIsBeingDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorComponent, ENGINE_API)


struct Z_Construct_UClass_UActorComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponent(); \
	friend struct ::Z_Construct_UClass_UActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UActorComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicates=NETFIELD_REP_START, \
		bIsActive, \
		NETFIELD_REP_END=bIsActive	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API) \
private: \
	REPLICATED_BASE_CLASS(UActorComponent) \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorComponent(UActorComponent&&) = delete; \
	UActorComponent(const UActorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponent) \
	ENGINE_API virtual ~UActorComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_150_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorComponent;

// ********** End Class UActorComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
