// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlockingVolume.h"

#ifdef ENGINE_BlockingVolume_generated_h
#error "BlockingVolume.generated.h already included, missing '#pragma once' in BlockingVolume.h"
#endif
#define ENGINE_BlockingVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABlockingVolume **********************************************************
struct Z_Construct_UClass_ABlockingVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_ABlockingVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlockingVolume(); \
	friend struct ::Z_Construct_UClass_ABlockingVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ABlockingVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlockingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ABlockingVolume_NoRegister) \
	DECLARE_SERIALIZER(ABlockingVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABlockingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABlockingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockingVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlockingVolume(ABlockingVolume&&) = delete; \
	ABlockingVolume(const ABlockingVolume&) = delete; \
	ENGINE_API virtual ~ABlockingVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlockingVolume;

// ********** End Class ABlockingVolume ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
