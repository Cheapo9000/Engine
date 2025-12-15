// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ExponentialHeightFog.h"

#ifdef ENGINE_ExponentialHeightFog_generated_h
#error "ExponentialHeightFog.generated.h already included, missing '#pragma once' in ExponentialHeightFog.h"
#endif
#define ENGINE_ExponentialHeightFog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AExponentialHeightFog ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_bEnabled);


struct Z_Construct_UClass_AExponentialHeightFog_Statics;
ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAExponentialHeightFog(); \
	friend struct ::Z_Construct_UClass_AExponentialHeightFog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AExponentialHeightFog_NoRegister(); \
public: \
	DECLARE_CLASS2(AExponentialHeightFog, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AExponentialHeightFog_NoRegister) \
	DECLARE_SERIALIZER(AExponentialHeightFog) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AExponentialHeightFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExponentialHeightFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AExponentialHeightFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExponentialHeightFog); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExponentialHeightFog(AExponentialHeightFog&&) = delete; \
	AExponentialHeightFog(const AExponentialHeightFog&) = delete; \
	ENGINE_API virtual ~AExponentialHeightFog();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExponentialHeightFog;

// ********** End Class AExponentialHeightFog ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
