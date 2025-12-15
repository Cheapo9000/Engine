// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODInstancedStaticMeshComponent.h"

#ifdef ENGINE_HLODInstancedStaticMeshComponent_generated_h
#error "HLODInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in HLODInstancedStaticMeshComponent.h"
#endif
#define ENGINE_HLODInstancedStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHLODInstancedStaticMeshComponent ****************************************
struct Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHLODInstancedStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UHLODInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODInstancedStaticMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODInstancedStaticMeshComponent(UHLODInstancedStaticMeshComponent&&) = delete; \
	UHLODInstancedStaticMeshComponent(const UHLODInstancedStaticMeshComponent&) = delete; \
	ENGINE_API virtual ~UHLODInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODInstancedStaticMeshComponent;

// ********** End Class UHLODInstancedStaticMeshComponent ******************************************

// ********** Begin ScriptStruct FHLODISMComponentDescriptor ***************************************
struct Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FISMComponentDescriptor Super;


struct FHLODISMComponentDescriptor;
// ********** End ScriptStruct FHLODISMComponentDescriptor *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
