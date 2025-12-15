// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ClusterUnionActor.h"

#ifdef ENGINE_ClusterUnionActor_generated_h
#error "ClusterUnionActor.generated.h already included, missing '#pragma once' in ClusterUnionActor.h"
#endif
#define ENGINE_ClusterUnionActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClusterUnionComponent;

// ********** Begin Class AClusterUnionActor *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetClusterUnionComponent);


struct Z_Construct_UClass_AClusterUnionActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_AClusterUnionActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClusterUnionActor(); \
	friend struct ::Z_Construct_UClass_AClusterUnionActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AClusterUnionActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AClusterUnionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AClusterUnionActor_NoRegister) \
	DECLARE_SERIALIZER(AClusterUnionActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AClusterUnionActor(AClusterUnionActor&&) = delete; \
	AClusterUnionActor(const AClusterUnionActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AClusterUnionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClusterUnionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClusterUnionActor) \
	ENGINE_API virtual ~AClusterUnionActor();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AClusterUnionActor;

// ********** End Class AClusterUnionActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
