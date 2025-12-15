// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PainCausingVolume.h"

#ifdef ENGINE_PainCausingVolume_generated_h
#error "PainCausingVolume.generated.h already included, missing '#pragma once' in PainCausingVolume.h"
#endif
#define ENGINE_PainCausingVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APainCausingVolume *******************************************************
struct Z_Construct_UClass_APainCausingVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPainCausingVolume(); \
	friend struct ::Z_Construct_UClass_APainCausingVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APainCausingVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(APainCausingVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APainCausingVolume_NoRegister) \
	DECLARE_SERIALIZER(APainCausingVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APainCausingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APainCausingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APainCausingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APainCausingVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APainCausingVolume(APainCausingVolume&&) = delete; \
	APainCausingVolume(const APainCausingVolume&) = delete; \
	ENGINE_API virtual ~APainCausingVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APainCausingVolume;

// ********** End Class APainCausingVolume *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
