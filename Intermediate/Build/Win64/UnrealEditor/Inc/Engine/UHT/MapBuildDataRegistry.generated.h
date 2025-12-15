// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MapBuildDataRegistry.h"

#ifdef ENGINE_MapBuildDataRegistry_generated_h
#error "MapBuildDataRegistry.generated.h already included, missing '#pragma once' in MapBuildDataRegistry.h"
#endif
#define ENGINE_MapBuildDataRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMapBuildDataRegistry ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMapBuildDataRegistry, ENGINE_API)


struct Z_Construct_UClass_UMapBuildDataRegistry_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_INCLASS \
private: \
	static void StaticRegisterNativesUMapBuildDataRegistry(); \
	friend struct ::Z_Construct_UClass_UMapBuildDataRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMapBuildDataRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UMapBuildDataRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMapBuildDataRegistry_NoRegister) \
	DECLARE_SERIALIZER(UMapBuildDataRegistry) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMapBuildDataRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapBuildDataRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMapBuildDataRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapBuildDataRegistry); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMapBuildDataRegistry(UMapBuildDataRegistry&&) = delete; \
	UMapBuildDataRegistry(const UMapBuildDataRegistry&) = delete; \
	ENGINE_API virtual ~UMapBuildDataRegistry();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_293_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_296_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMapBuildDataRegistry;

// ********** End Class UMapBuildDataRegistry ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
