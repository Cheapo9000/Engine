// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassAgentComponent.h"

#ifdef MASSACTORS_MassAgentComponent_generated_h
#error "MassAgentComponent.generated.h already included, missing '#pragma once' in MassAgentComponent.h"
#endif
#define MASSACTORS_MassAgentComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassAgentComponent ******************************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_NetID); \
	DECLARE_FUNCTION(execKillEntity); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable);


struct Z_Construct_UClass_UMassAgentComponent_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassAgentComponent(); \
	friend struct ::Z_Construct_UClass_UMassAgentComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassAgentComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassAgentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassAgentComponent_NoRegister) \
	DECLARE_SERIALIZER(UMassAgentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NetID	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(MASSACTORS_API)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassAgentComponent(UMassAgentComponent&&) = delete; \
	UMassAgentComponent(const UMassAgentComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassAgentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassAgentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassAgentComponent) \
	MASSACTORS_API virtual ~UMassAgentComponent();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassAgentComponent;

// ********** End Class UMassAgentComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h

// ********** Begin Enum EAgentComponentState ******************************************************
#define FOREACH_ENUM_EAGENTCOMPONENTSTATE(op) \
	op(EAgentComponentState::None) \
	op(EAgentComponentState::EntityPendingCreation) \
	op(EAgentComponentState::EntityCreated) \
	op(EAgentComponentState::PuppetPendingInitialization) \
	op(EAgentComponentState::PuppetInitialized) \
	op(EAgentComponentState::PuppetPaused) \
	op(EAgentComponentState::PuppetPendingReplication) \
	op(EAgentComponentState::PuppetReplicatedOrphan) 

enum class EAgentComponentState : uint8;
template<> struct TIsUEnumClass<EAgentComponentState> { enum { Value = true }; };
template<> MASSACTORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAgentComponentState>();
// ********** End Enum EAgentComponentState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
