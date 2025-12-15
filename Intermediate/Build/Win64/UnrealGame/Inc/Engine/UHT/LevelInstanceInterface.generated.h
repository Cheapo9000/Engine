// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceInterface.h"

#ifdef ENGINE_LevelInstanceInterface_generated_h
#error "LevelInstanceInterface.generated.h already included, missing '#pragma once' in LevelInstanceInterface.h"
#endif
#define ENGINE_LevelInstanceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UWorld;

// ********** Begin Interface ULevelInstanceInterface **********************************************
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetWorldAsset); \
	DECLARE_FUNCTION(execGetLoadedLevel); \
	DECLARE_FUNCTION(execUnloadLevelInstance); \
	DECLARE_FUNCTION(execLoadLevelInstance); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetWorldAsset);


struct Z_Construct_UClass_ULevelInstanceInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceInterface(ULevelInstanceInterface&&) = delete; \
	ULevelInstanceInterface(const ULevelInstanceInterface&) = delete; \
	virtual ~ULevelInstanceInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULevelInstanceInterface(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelInstanceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelInstanceInterface_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceInterface)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~ILevelInstanceInterface() {} \
public: \
	typedef ULevelInstanceInterface UClassType; \
	typedef ILevelInstanceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceInterface;

// ********** End Interface ULevelInstanceInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
