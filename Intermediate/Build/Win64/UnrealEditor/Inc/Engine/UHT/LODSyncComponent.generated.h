// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LODSyncComponent.h"

#ifdef ENGINE_LODSyncComponent_generated_h
#error "LODSyncComponent.generated.h already included, missing '#pragma once' in LODSyncComponent.h"
#endif
#define ENGINE_LODSyncComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLODMappingData ***************************************************
struct Z_Construct_UScriptStruct_FLODMappingData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLODMappingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLODMappingData;
// ********** End ScriptStruct FLODMappingData *****************************************************

// ********** Begin ScriptStruct FComponentSync ****************************************************
struct Z_Construct_UScriptStruct_FComponentSync_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComponentSync_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FComponentSync;
// ********** End ScriptStruct FComponentSync ******************************************************

// ********** Begin Class ULODSyncComponent ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLODSyncDebugText);


struct Z_Construct_UClass_ULODSyncComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_INCLASS \
private: \
	static void StaticRegisterNativesULODSyncComponent(); \
	friend struct ::Z_Construct_UClass_ULODSyncComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULODSyncComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODSyncComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULODSyncComponent_NoRegister) \
	DECLARE_SERIALIZER(ULODSyncComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULODSyncComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODSyncComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULODSyncComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODSyncComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODSyncComponent(ULODSyncComponent&&) = delete; \
	ULODSyncComponent(const ULODSyncComponent&) = delete; \
	ENGINE_API virtual ~ULODSyncComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_62_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODSyncComponent;

// ********** End Class ULODSyncComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h

// ********** Begin Enum ESyncOption ***************************************************************
#define FOREACH_ENUM_ESYNCOPTION(op) \
	op(ESyncOption::Drive) \
	op(ESyncOption::Passive) \
	op(ESyncOption::Disabled) 

enum class ESyncOption : uint8;
template<> struct TIsUEnumClass<ESyncOption> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESyncOption>();
// ********** End Enum ESyncOption *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
