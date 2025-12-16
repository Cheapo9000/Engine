// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsComponent.h"

#ifdef INSTANCEDACTORS_InstancedActorsComponent_generated_h
#error "InstancedActorsComponent.generated.h already included, missing '#pragma once' in InstancedActorsComponent.h"
#endif
#define INSTANCEDACTORS_InstancedActorsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInstancedActorsComponent ************************************************
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_InstanceHandle); \
	DECLARE_FUNCTION(execHasMassEntity);


struct Z_Construct_UClass_UInstancedActorsComponent_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsComponent(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsComponent_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InstanceHandle=NETFIELD_REP_START, \
		NETFIELD_REP_END=InstanceHandle	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(INSTANCEDACTORS_API)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsComponent(UInstancedActorsComponent&&) = delete; \
	UInstancedActorsComponent(const UInstancedActorsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UInstancedActorsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstancedActorsComponent) \
	INSTANCEDACTORS_API virtual ~UInstancedActorsComponent();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsComponent;

// ********** End Class UInstancedActorsComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
