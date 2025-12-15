// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODInstancedSkinnedMeshComponent.h"

#ifdef ENGINE_HLODInstancedSkinnedMeshComponent_generated_h
#error "HLODInstancedSkinnedMeshComponent.generated.h already included, missing '#pragma once' in HLODInstancedSkinnedMeshComponent.h"
#endif
#define ENGINE_HLODInstancedSkinnedMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHLODInstancedSkinnedMeshComponent ***************************************
struct Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHLODInstancedSkinnedMeshComponent(); \
	friend struct ::Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODInstancedSkinnedMeshComponent, UInstancedSkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UHLODInstancedSkinnedMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODInstancedSkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODInstancedSkinnedMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODInstancedSkinnedMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODInstancedSkinnedMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODInstancedSkinnedMeshComponent(UHLODInstancedSkinnedMeshComponent&&) = delete; \
	UHLODInstancedSkinnedMeshComponent(const UHLODInstancedSkinnedMeshComponent&) = delete; \
	ENGINE_API virtual ~UHLODInstancedSkinnedMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODInstancedSkinnedMeshComponent;

// ********** End Class UHLODInstancedSkinnedMeshComponent *****************************************

// ********** Begin ScriptStruct FHLODSkinnedMeshComponentDescriptor *******************************
struct Z_Construct_UScriptStruct_FHLODSkinnedMeshComponentDescriptor_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODSkinnedMeshComponentDescriptor_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSkinnedMeshComponentDescriptor Super;


struct FHLODSkinnedMeshComponentDescriptor;
// ********** End ScriptStruct FHLODSkinnedMeshComponentDescriptor *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
