// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HierarchicalInstancedStaticMeshComponent.h"

#ifdef ENGINE_HierarchicalInstancedStaticMeshComponent_generated_h
#error "HierarchicalInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in HierarchicalInstancedStaticMeshComponent.h"
#endif
#define ENGINE_HierarchicalInstancedStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FClusterNode_DEPRECATED *******************************************
struct Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FClusterNode_DEPRECATED;
// ********** End ScriptStruct FClusterNode_DEPRECATED *********************************************

// ********** Begin ScriptStruct FClusterNode ******************************************************
struct Z_Construct_UScriptStruct_FClusterNode_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FClusterNode;
// ********** End ScriptStruct FClusterNode ********************************************************

// ********** Begin Class UHierarchicalInstancedStaticMeshComponent ********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent, ENGINE_API)


struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHierarchicalInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHierarchicalInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalInstancedStaticMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHierarchicalInstancedStaticMeshComponent(UHierarchicalInstancedStaticMeshComponent&&) = delete; \
	UHierarchicalInstancedStaticMeshComponent(const UHierarchicalInstancedStaticMeshComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_134_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHierarchicalInstancedStaticMeshComponent;

// ********** End Class UHierarchicalInstancedStaticMeshComponent **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h

// ********** Begin Enum EHISMViewRelevanceType ****************************************************
#define FOREACH_ENUM_EHISMVIEWRELEVANCETYPE(op) \
	op(EHISMViewRelevanceType::Grass) \
	op(EHISMViewRelevanceType::Foliage) \
	op(EHISMViewRelevanceType::HISM) 

enum class EHISMViewRelevanceType : uint8;
template<> struct TIsUEnumClass<EHISMViewRelevanceType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHISMViewRelevanceType>();
// ********** End Enum EHISMViewRelevanceType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
