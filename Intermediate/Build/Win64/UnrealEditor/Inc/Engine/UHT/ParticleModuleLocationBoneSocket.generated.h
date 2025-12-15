// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationBoneSocket.h"

#ifdef ENGINE_ParticleModuleLocationBoneSocket_generated_h
#error "ParticleModuleLocationBoneSocket.generated.h already included, missing '#pragma once' in ParticleModuleLocationBoneSocket.h"
#endif
#define ENGINE_ParticleModuleLocationBoneSocket_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLocationBoneSocketInfo *******************************************
struct Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLocationBoneSocketInfo;
// ********** End ScriptStruct FLocationBoneSocketInfo *********************************************

// ********** Begin Class UParticleModuleLocationBoneSocket ****************************************
struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationBoneSocket(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationBoneSocket, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationBoneSocket)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationBoneSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBoneSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationBoneSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBoneSocket); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationBoneSocket(UParticleModuleLocationBoneSocket&&) = delete; \
	UParticleModuleLocationBoneSocket(const UParticleModuleLocationBoneSocket&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationBoneSocket();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_63_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationBoneSocket;

// ********** End Class UParticleModuleLocationBoneSocket ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h

// ********** Begin Enum ELocationBoneSocketSource *************************************************
#define FOREACH_ENUM_ELOCATIONBONESOCKETSOURCE(op) \
	op(BONESOCKETSOURCE_Bones) \
	op(BONESOCKETSOURCE_Sockets) 

enum ELocationBoneSocketSource : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocationBoneSocketSource>();
// ********** End Enum ELocationBoneSocketSource ***************************************************

// ********** Begin Enum ELocationBoneSocketSelectionMethod ****************************************
#define FOREACH_ENUM_ELOCATIONBONESOCKETSELECTIONMETHOD(op) \
	op(BONESOCKETSEL_Sequential) \
	op(BONESOCKETSEL_Random) 

enum ELocationBoneSocketSelectionMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocationBoneSocketSelectionMethod>();
// ********** End Enum ELocationBoneSocketSelectionMethod ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
