// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DecalActor.h"

#ifdef ENGINE_DecalActor_generated_h
#error "DecalActor.generated.h already included, missing '#pragma once' in DecalActor.h"
#endif
#define ENGINE_DecalActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;

// ********** Begin Class ADecalActor **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ADecalActor, ENGINE_API)


struct Z_Construct_UClass_ADecalActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ADecalActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesADecalActor(); \
	friend struct ::Z_Construct_UClass_ADecalActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ADecalActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADecalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ADecalActor_NoRegister) \
	DECLARE_SERIALIZER(ADecalActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADecalActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecalActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADecalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecalActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADecalActor(ADecalActor&&) = delete; \
	ADecalActor(const ADecalActor&) = delete; \
	ENGINE_API virtual ~ADecalActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADecalActor;

// ********** End Class ADecalActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
