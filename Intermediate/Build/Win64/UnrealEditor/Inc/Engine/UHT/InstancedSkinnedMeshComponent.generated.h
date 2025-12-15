// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InstancedSkinnedMeshComponent.h"

#ifdef ENGINE_InstancedSkinnedMeshComponent_generated_h
#error "InstancedSkinnedMeshComponent.generated.h already included, missing '#pragma once' in InstancedSkinnedMeshComponent.h"
#endif
#define ENGINE_InstancedSkinnedMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTransformProviderData;
struct FPrimitiveInstanceId;

// ********** Begin ScriptStruct FSkinnedMeshInstanceData ******************************************
struct Z_Construct_UScriptStruct_FSkinnedMeshInstanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkinnedMeshInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkinnedMeshInstanceData;
// ********** End ScriptStruct FSkinnedMeshInstanceData ********************************************

// ********** Begin Class UInstancedSkinnedMeshComponent *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOptimizeInstanceData); \
	DECLARE_FUNCTION(execSetTransformProvider); \
	DECLARE_FUNCTION(execGetTransformProvider); \
	DECLARE_FUNCTION(execClearInstances); \
	DECLARE_FUNCTION(execRemoveInstances); \
	DECLARE_FUNCTION(execRemoveInstance); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execSetNumCustomDataFloats); \
	DECLARE_FUNCTION(execSetCustomDataValue); \
	DECLARE_FUNCTION(execAddInstances); \
	DECLARE_FUNCTION(execAddInstance);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedSkinnedMeshComponent, ENGINE_API)


struct Z_Construct_UClass_UInstancedSkinnedMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUInstancedSkinnedMeshComponent(); \
	friend struct ::Z_Construct_UClass_UInstancedSkinnedMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedSkinnedMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UInstancedSkinnedMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInstancedSkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedSkinnedMeshComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedSkinnedMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedSkinnedMeshComponent(UInstancedSkinnedMeshComponent&&) = delete; \
	UInstancedSkinnedMeshComponent(const UInstancedSkinnedMeshComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_53_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedSkinnedMeshComponent;

// ********** End Class UInstancedSkinnedMeshComponent *********************************************

// ********** Begin ScriptStruct FInstancedSkinnedMeshComponentInstanceData ************************
struct Z_Construct_UScriptStruct_FInstancedSkinnedMeshComponentInstanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedSkinnedMeshComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


struct FInstancedSkinnedMeshComponentInstanceData;
// ********** End ScriptStruct FInstancedSkinnedMeshComponentInstanceData **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedSkinnedMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
