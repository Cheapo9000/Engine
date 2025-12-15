// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceActor.h"

#ifdef ENGINE_LevelInstanceActor_generated_h
#error "LevelInstanceActor.generated.h already included, missing '#pragma once' in LevelInstanceActor.h"
#endif
#define ENGINE_LevelInstanceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALevelInstance ***********************************************************
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALevelInstance, ENGINE_API)


struct Z_Construct_UClass_ALevelInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_ALevelInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelInstance(); \
	friend struct ::Z_Construct_UClass_ALevelInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ALevelInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ALevelInstance_NoRegister) \
	DECLARE_SERIALIZER(ALevelInstance) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALevelInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CookedWorldAsset=NETFIELD_REP_START, \
		LevelInstanceSpawnGuid, \
		NETFIELD_REP_END=LevelInstanceSpawnGuid	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelInstance(ALevelInstance&&) = delete; \
	ALevelInstance(const ALevelInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelInstance) \
	ENGINE_API virtual ~ALevelInstance();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelInstance;

// ********** End Class ALevelInstance *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
