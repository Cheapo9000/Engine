// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsData.h"

#ifdef INSTANCEDACTORS_InstancedActorsData_generated_h
#error "InstancedActorsData.generated.h already included, missing '#pragma once' in InstancedActorsData.h"
#endif
#define INSTANCEDACTORS_InstancedActorsData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInstancedActorsManager;

// ********** Begin Class UInstancedActorsData *****************************************************
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetManager);


struct Z_Construct_UClass_UInstancedActorsData_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsData_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsData(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsData_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsData_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsData) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InstanceDeltas=NETFIELD_REP_START, \
		NETFIELD_REP_END=InstanceDeltas	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(INSTANCEDACTORS_API) \
private: \
	REPLICATED_BASE_CLASS(UInstancedActorsData) \
public:


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INSTANCEDACTORS_API UInstancedActorsData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsData(UInstancedActorsData&&) = delete; \
	UInstancedActorsData(const UInstancedActorsData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UInstancedActorsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedActorsData) \
	INSTANCEDACTORS_API virtual ~UInstancedActorsData();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_53_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsData;

// ********** End Class UInstancedActorsData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
