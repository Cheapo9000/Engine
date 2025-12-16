// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsManager.h"

#ifdef INSTANCEDACTORS_InstancedActorsManager_generated_h
#error "InstancedActorsManager.generated.h already included, missing '#pragma once' in InstancedActorsManager.h"
#endif
#define INSTANCEDACTORS_InstancedActorsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInstancedActorsManager **************************************************
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(AInstancedActorsManager, INSTANCEDACTORS_API)


struct Z_Construct_UClass_AInstancedActorsManager_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_AInstancedActorsManager_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInstancedActorsManager(); \
	friend struct ::Z_Construct_UClass_AInstancedActorsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_AInstancedActorsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AInstancedActorsManager, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_AInstancedActorsManager_NoRegister) \
	DECLARE_SERIALIZER(AInstancedActorsManager) \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AInstancedActorsManager*>(this); }


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInstancedActorsManager(AInstancedActorsManager&&) = delete; \
	AInstancedActorsManager(const AInstancedActorsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, AInstancedActorsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedActorsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInstancedActorsManager) \
	INSTANCEDACTORS_API virtual ~AInstancedActorsManager();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_69_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInstancedActorsManager;

// ********** End Class AInstancedActorsManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
