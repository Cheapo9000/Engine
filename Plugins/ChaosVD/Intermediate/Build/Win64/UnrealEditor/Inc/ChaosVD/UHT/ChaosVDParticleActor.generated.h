// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDParticleActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDParticleActor_generated_h
#error "ChaosVDParticleActor.generated.h already included, missing '#pragma once' in ChaosVDParticleActor.h"
#endif
#define CHAOSVD_ChaosVDParticleActor_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosVDParticleActor(); \
	friend struct Z_Construct_UClass_AChaosVDParticleActor_Statics; \
public: \
	DECLARE_CLASS(AChaosVDParticleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(AChaosVDParticleActor) \
	virtual UObject* _getUObject() const override { return const_cast<AChaosVDParticleActor*>(this); }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaosVDParticleActor(AChaosVDParticleActor&&); \
	AChaosVDParticleActor(const AChaosVDParticleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChaosVDParticleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosVDParticleActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChaosVDParticleActor) \
	NO_API virtual ~AChaosVDParticleActor();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h_56_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class AChaosVDParticleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDParticleActor_h


#define FOREACH_ENUM_ECHAOSVDACTORGEOMETRYUPDATEFLAGS(op) \
	op(EChaosVDActorGeometryUpdateFlags::None) \
	op(EChaosVDActorGeometryUpdateFlags::ForceUpdate) 

enum class EChaosVDActorGeometryUpdateFlags : int32;
template<> struct TIsUEnumClass<EChaosVDActorGeometryUpdateFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDActorGeometryUpdateFlags>();

#define FOREACH_ENUM_ECHAOSVDHIDEPARTICLEFLAGS(op) \
	op(EChaosVDHideParticleFlags::None) \
	op(EChaosVDHideParticleFlags::HiddenByVisualizationFlags) \
	op(EChaosVDHideParticleFlags::HiddenBySceneOutliner) \
	op(EChaosVDHideParticleFlags::HiddenByActiveState) \
	op(EChaosVDHideParticleFlags::HiddenBySolverVisibility) 

enum class EChaosVDHideParticleFlags;
template<> struct TIsUEnumClass<EChaosVDHideParticleFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDHideParticleFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
