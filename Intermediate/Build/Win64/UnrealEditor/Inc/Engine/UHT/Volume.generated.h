// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Volume.h"

#ifdef ENGINE_Volume_generated_h
#error "Volume.generated.h already included, missing '#pragma once' in Volume.h"
#endif
#define ENGINE_Volume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVolume ******************************************************************
struct Z_Construct_UClass_AVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVolume(); \
	friend struct ::Z_Construct_UClass_AVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AVolume, ABrush, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AVolume_NoRegister) \
	DECLARE_SERIALIZER(AVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVolume(AVolume&&) = delete; \
	AVolume(const AVolume&) = delete; \
	ENGINE_API virtual ~AVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVolume;

// ********** End Class AVolume ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
