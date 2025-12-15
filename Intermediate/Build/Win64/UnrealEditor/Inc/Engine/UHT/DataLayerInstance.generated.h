// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerInstance.h"

#ifdef ENGINE_DataLayerInstance_generated_h
#error "DataLayerInstance.generated.h already included, missing '#pragma once' in DataLayerInstance.h"
#endif
#define ENGINE_DataLayerInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLayerAsset;
enum class EDataLayerRuntimeState : uint8;
enum class EDataLayerType : uint8;
struct FColor;

// ********** Begin Class UDataLayerInstance *******************************************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetDataLayerFullName); \
	DECLARE_FUNCTION(execGetDataLayerShortName); \
	DECLARE_FUNCTION(execGetInitialRuntimeState); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsServerOnly); \
	DECLARE_FUNCTION(execIsClientOnly); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execIsEffectiveVisible); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsInitiallyVisible); \
	DECLARE_FUNCTION(execGetType);


struct Z_Construct_UClass_UDataLayerInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerInstance(); \
	friend struct ::Z_Construct_UClass_UDataLayerInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataLayerInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataLayerInstance_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerInstance)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataLayerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerInstance(UDataLayerInstance&&) = delete; \
	UDataLayerInstance(const UDataLayerInstance&) = delete; \
	ENGINE_API virtual ~UDataLayerInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_60_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerInstance;

// ********** End Class UDataLayerInstance *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h

// ********** Begin Enum EDataLayerRuntimeState ****************************************************
#define FOREACH_ENUM_EDATALAYERRUNTIMESTATE(op) \
	op(EDataLayerRuntimeState::Unloaded) \
	op(EDataLayerRuntimeState::Loaded) \
	op(EDataLayerRuntimeState::Activated) 

enum class EDataLayerRuntimeState : uint8;
template<> struct TIsUEnumClass<EDataLayerRuntimeState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataLayerRuntimeState>();
// ********** End Enum EDataLayerRuntimeState ******************************************************

// ********** Begin Enum EOverrideBlockOnSlowStreaming *********************************************
#define FOREACH_ENUM_EOVERRIDEBLOCKONSLOWSTREAMING(op) \
	op(EOverrideBlockOnSlowStreaming::NoOverride) \
	op(EOverrideBlockOnSlowStreaming::Blocking) \
	op(EOverrideBlockOnSlowStreaming::NotBlocking) 

enum class EOverrideBlockOnSlowStreaming : uint8;
template<> struct TIsUEnumClass<EOverrideBlockOnSlowStreaming> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOverrideBlockOnSlowStreaming>();
// ********** End Enum EOverrideBlockOnSlowStreaming ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
