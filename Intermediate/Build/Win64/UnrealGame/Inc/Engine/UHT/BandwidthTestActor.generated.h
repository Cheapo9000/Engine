// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/BandwidthTestActor.h"

#ifdef ENGINE_BandwidthTestActor_generated_h
#error "BandwidthTestActor.generated.h already included, missing '#pragma once' in BandwidthTestActor.h"
#endif
#define ENGINE_BandwidthTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBandwidthTestItem ************************************************
struct Z_Construct_UScriptStruct_FBandwidthTestItem_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBandwidthTestItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBandwidthTestItem;
// ********** End ScriptStruct FBandwidthTestItem **************************************************

// ********** Begin ScriptStruct FBandwidthTestGenerator *******************************************
struct Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBandwidthTestGenerator;
// ********** End ScriptStruct FBandwidthTestGenerator *********************************************

// ********** Begin Class ABandwidthTestActor ******************************************************
struct Z_Construct_UClass_ABandwidthTestActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ABandwidthTestActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABandwidthTestActor(); \
	friend struct ::Z_Construct_UClass_ABandwidthTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ABandwidthTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ABandwidthTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ABandwidthTestActor_NoRegister) \
	DECLARE_SERIALIZER(ABandwidthTestActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BandwidthGenerator=NETFIELD_REP_START, \
		NETFIELD_REP_END=BandwidthGenerator	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABandwidthTestActor(ABandwidthTestActor&&) = delete; \
	ABandwidthTestActor(const ABandwidthTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABandwidthTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABandwidthTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABandwidthTestActor) \
	NO_API virtual ~ABandwidthTestActor();


#define FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABandwidthTestActor;

// ********** End Class ABandwidthTestActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
