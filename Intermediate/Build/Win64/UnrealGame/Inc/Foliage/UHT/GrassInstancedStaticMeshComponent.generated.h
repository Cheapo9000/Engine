// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GrassInstancedStaticMeshComponent.h"

#ifdef FOLIAGE_GrassInstancedStaticMeshComponent_generated_h
#error "GrassInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in GrassInstancedStaticMeshComponent.h"
#endif
#define FOLIAGE_GrassInstancedStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGrassInstancedStaticMeshComponent ***************************************
struct Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGrassInstancedStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGrassInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UGrassInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UGrassInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrassInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UGrassInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrassInstancedStaticMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGrassInstancedStaticMeshComponent(UGrassInstancedStaticMeshComponent&&) = delete; \
	UGrassInstancedStaticMeshComponent(const UGrassInstancedStaticMeshComponent&) = delete; \
	FOLIAGE_API virtual ~UGrassInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_9_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGrassInstancedStaticMeshComponent;

// ********** End Class UGrassInstancedStaticMeshComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
