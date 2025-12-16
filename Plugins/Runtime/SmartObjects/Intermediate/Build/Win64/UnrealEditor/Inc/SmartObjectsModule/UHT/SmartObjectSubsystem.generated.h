// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectSubsystem.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectSubsystem_generated_h
#error "SmartObjectSubsystem.generated.h already included, missing '#pragma once' in SmartObjectSubsystem.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class USmartObjectBehaviorDefinition;
class USmartObjectComponent;
enum class ESmartObjectSlotState : uint8;
enum class ETrySpawnActorIfDehydrated : uint8;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FSmartObjectClaimHandle;
struct FSmartObjectHandle;
struct FSmartObjectRequest;
struct FSmartObjectRequestResult;
struct FSmartObjectSlotHandle;

// ********** Begin ScriptStruct FSmartObjectSlotEntranceHandle ************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceHandle_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotEntranceHandle_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotEntranceHandle;
// ********** End ScriptStruct FSmartObjectSlotEntranceHandle **************************************

// ********** Begin ScriptStruct FSmartObjectSlotEntranceLocationRequest ***************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceLocationRequest_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotEntranceLocationRequest_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotEntranceLocationRequest;
// ********** End ScriptStruct FSmartObjectSlotEntranceLocationRequest *****************************

// ********** Begin ScriptStruct FSmartObjectSlotEntranceLocationResult ****************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceLocationResult_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_210_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotEntranceLocationResult_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotEntranceLocationResult;
// ********** End ScriptStruct FSmartObjectSlotEntranceLocationResult ******************************

// ********** Begin Class USmartObjectSubsystem ****************************************************
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execFindSmartObjects); \
	DECLARE_FUNCTION(execSetSlotEnabled); \
	DECLARE_FUNCTION(execRemoveTagFromSlot); \
	DECLARE_FUNCTION(execAddTagToSlot); \
	DECLARE_FUNCTION(execGetSlotTags); \
	DECLARE_FUNCTION(execRemoveTagFromInstance); \
	DECLARE_FUNCTION(execAddTagToInstance); \
	DECLARE_FUNCTION(execGetInstanceTags); \
	DECLARE_FUNCTION(execGetSlotTransformFromRequestResult); \
	DECLARE_FUNCTION(execGetSlotTransform); \
	DECLARE_FUNCTION(execGetSlotLocation); \
	DECLARE_FUNCTION(execGetSlotState); \
	DECLARE_FUNCTION(execGetBehaviorDefinitionByRequestResult); \
	DECLARE_FUNCTION(execGetBehaviorDefinition); \
	DECLARE_FUNCTION(execGetAllSlots); \
	DECLARE_FUNCTION(execFindSmartObjects_BP); \
	DECLARE_FUNCTION(execFindSmartObject); \
	DECLARE_FUNCTION(execGetSmartObjectComponentByRequestResult); \
	DECLARE_FUNCTION(execGetSmartObjectComponent); \
	DECLARE_FUNCTION(execIsEnabledForReason); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabledForReason); \
	DECLARE_FUNCTION(execSetEnabled);


struct Z_Construct_UClass_USmartObjectSubsystem_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectSubsystem(); \
	friend struct ::Z_Construct_UClass_USmartObjectSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("SmartObjects");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectSubsystem(USmartObjectSubsystem&&) = delete; \
	USmartObjectSubsystem(const USmartObjectSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmartObjectSubsystem) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectSubsystem();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_297_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_300_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectSubsystem;

// ********** End Class USmartObjectSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h

// ********** Begin Enum FSmartObjectSlotEntrySelectionMethod **************************************
#define FOREACH_ENUM_FSMARTOBJECTSLOTENTRYSELECTIONMETHOD(op) \
	op(FSmartObjectSlotEntrySelectionMethod::First) \
	op(FSmartObjectSlotEntrySelectionMethod::NearestToSearchLocation) 

enum class FSmartObjectSlotEntrySelectionMethod : uint8;
template<> struct TIsUEnumClass<FSmartObjectSlotEntrySelectionMethod> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<FSmartObjectSlotEntrySelectionMethod>();
// ********** End Enum FSmartObjectSlotEntrySelectionMethod ****************************************

// ********** Begin Enum ESmartObjectCollectionRegistrationResult **********************************
#define FOREACH_ENUM_ESMARTOBJECTCOLLECTIONREGISTRATIONRESULT(op) \
	op(ESmartObjectCollectionRegistrationResult::Failed_InvalidCollection) \
	op(ESmartObjectCollectionRegistrationResult::Failed_AlreadyRegistered) \
	op(ESmartObjectCollectionRegistrationResult::Failed_NotFromPersistentLevel) \
	op(ESmartObjectCollectionRegistrationResult::Succeeded) 

enum class ESmartObjectCollectionRegistrationResult : uint8;
template<> struct TIsUEnumClass<ESmartObjectCollectionRegistrationResult> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectCollectionRegistrationResult>();
// ********** End Enum ESmartObjectCollectionRegistrationResult ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
