// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverNetworkPhysicsLiaison.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;
#ifdef MOVER_MoverNetworkPhysicsLiaison_generated_h
#error "MoverNetworkPhysicsLiaison.generated.h already included, missing '#pragma once' in MoverNetworkPhysicsLiaison.h"
#endif
#define MOVER_MoverNetworkPhysicsLiaison_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FNetworkPhysicsMoverInputs>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FNetworkPhysicsMoverState>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentPhysicsStateChanged);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverNetworkPhysicsLiaisonComponent(); \
	friend struct Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics; \
public: \
	DECLARE_CLASS(UMoverNetworkPhysicsLiaisonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverNetworkPhysicsLiaisonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverNetworkPhysicsLiaisonComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverNetworkPhysicsLiaisonComponent(UMoverNetworkPhysicsLiaisonComponent&&); \
	UMoverNetworkPhysicsLiaisonComponent(const UMoverNetworkPhysicsLiaisonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverNetworkPhysicsLiaisonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverNetworkPhysicsLiaisonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverNetworkPhysicsLiaisonComponent) \
	NO_API virtual ~UMoverNetworkPhysicsLiaisonComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_104_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverNetworkPhysicsLiaisonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
