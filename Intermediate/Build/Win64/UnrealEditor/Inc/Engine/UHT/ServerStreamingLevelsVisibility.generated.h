// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Streaming/ServerStreamingLevelsVisibility.h"

#ifdef ENGINE_ServerStreamingLevelsVisibility_generated_h
#error "ServerStreamingLevelsVisibility.generated.h already included, missing '#pragma once' in ServerStreamingLevelsVisibility.h"
#endif
#define ENGINE_ServerStreamingLevelsVisibility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AServerStreamingLevelsVisibility *****************************************
struct Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics;
ENGINE_API UClass* Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAServerStreamingLevelsVisibility(); \
	friend struct ::Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister(); \
public: \
	DECLARE_CLASS2(AServerStreamingLevelsVisibility, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister) \
	DECLARE_SERIALIZER(AServerStreamingLevelsVisibility)


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AServerStreamingLevelsVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerStreamingLevelsVisibility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AServerStreamingLevelsVisibility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerStreamingLevelsVisibility); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AServerStreamingLevelsVisibility(AServerStreamingLevelsVisibility&&) = delete; \
	AServerStreamingLevelsVisibility(const AServerStreamingLevelsVisibility&) = delete; \
	ENGINE_API virtual ~AServerStreamingLevelsVisibility();


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AServerStreamingLevelsVisibility;

// ********** End Class AServerStreamingLevelsVisibility *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
