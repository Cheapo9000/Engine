// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectTypes.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectTypes_generated_h
#error "SmartObjectTypes.generated.h already included, missing '#pragma once' in SmartObjectTypes.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectUserHandle ********************************************
struct Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectUserHandle;
// ********** End ScriptStruct FSmartObjectUserHandle **********************************************

// ********** Begin ScriptStruct FSmartObjectHandle ************************************************
struct Z_Construct_UScriptStruct_FSmartObjectHandle_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectHandle_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectHandle;
// ********** End ScriptStruct FSmartObjectHandle **************************************************

// ********** Begin ScriptStruct FSmartObjectSlotHandle ********************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotHandle;
// ********** End ScriptStruct FSmartObjectSlotHandle **********************************************

// ********** Begin ScriptStruct FSmartObjectDefinitionData ****************************************
struct Z_Construct_UScriptStruct_FSmartObjectDefinitionData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectDefinitionData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectDefinitionData;
// ********** End ScriptStruct FSmartObjectDefinitionData ******************************************

// ********** Begin ScriptStruct FSmartObjectSlotStateData *****************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_314_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotStateData;
// ********** End ScriptStruct FSmartObjectSlotStateData *******************************************

// ********** Begin ScriptStruct FSmartObjectSpatialEntryData **************************************
struct Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_323_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSpatialEntryData;
// ********** End ScriptStruct FSmartObjectSpatialEntryData ****************************************

// ********** Begin Class USmartObjectSpacePartition ***********************************************
struct Z_Construct_UClass_USmartObjectSpacePartition_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_332_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectSpacePartition(); \
	friend struct ::Z_Construct_UClass_USmartObjectSpacePartition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectSpacePartition_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectSpacePartition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectSpacePartition_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectSpacePartition)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_332_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectSpacePartition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectSpacePartition(USmartObjectSpacePartition&&) = delete; \
	USmartObjectSpacePartition(const USmartObjectSpacePartition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectSpacePartition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSpacePartition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectSpacePartition) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectSpacePartition();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_329_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_332_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_332_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_332_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectSpacePartition;

// ********** End Class USmartObjectSpacePartition *************************************************

// ********** Begin ScriptStruct FSmartObjectSlotIndex *********************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotIndex;
// ********** End ScriptStruct FSmartObjectSlotIndex ***********************************************

// ********** Begin ScriptStruct FSmartObjectSlotReference *****************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_408_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotReference;
// ********** End ScriptStruct FSmartObjectSlotReference *******************************************

// ********** Begin ScriptStruct FSmartObjectTraceParams *******************************************
struct Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_468_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectTraceParams;
// ********** End ScriptStruct FSmartObjectTraceParams *********************************************

// ********** Begin ScriptStruct FSmartObjectUserCapsuleParams *************************************
struct Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_531_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectUserCapsuleParams;
// ********** End ScriptStruct FSmartObjectUserCapsuleParams ***************************************

// ********** Begin ScriptStruct FSmartObjectSlotValidationParams **********************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_577_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotValidationParams;
// ********** End ScriptStruct FSmartObjectSlotValidationParams ************************************

// ********** Begin Class USmartObjectSlotValidationFilter *****************************************
struct Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_672_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectSlotValidationFilter(); \
	friend struct ::Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectSlotValidationFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectSlotValidationFilter)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_672_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectSlotValidationFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectSlotValidationFilter(USmartObjectSlotValidationFilter&&) = delete; \
	USmartObjectSlotValidationFilter(const USmartObjectSlotValidationFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectSlotValidationFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSlotValidationFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectSlotValidationFilter) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectSlotValidationFilter();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_669_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_672_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_672_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_672_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectSlotValidationFilter;

// ********** End Class USmartObjectSlotValidationFilter *******************************************

// ********** Begin ScriptStruct FSmartObjectEventData *********************************************
struct Z_Construct_UScriptStruct_FSmartObjectEventData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_748_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectEventData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectEventData;
// ********** End ScriptStruct FSmartObjectEventData ***********************************************

// ********** Begin ScriptStruct FSmartObjectActorUserData *****************************************
struct Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_809_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectActorUserData;
// ********** End ScriptStruct FSmartObjectActorUserData *******************************************

// ********** Begin ScriptStruct FSmartObjectActorOwnerData ****************************************
struct Z_Construct_UScriptStruct_FSmartObjectActorOwnerData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_825_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectActorOwnerData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectActorOwnerData;
// ********** End ScriptStruct FSmartObjectActorOwnerData ******************************************

// ********** Begin ScriptStruct FSmartObjectDefinitionDataHandle **********************************
struct Z_Construct_UScriptStruct_FSmartObjectDefinitionDataHandle_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_875_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectDefinitionDataHandle_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectDefinitionDataHandle;
// ********** End ScriptStruct FSmartObjectDefinitionDataHandle ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h

// ********** Begin Enum ESmartObjectTagMergingPolicy **********************************************
#define FOREACH_ENUM_ESMARTOBJECTTAGMERGINGPOLICY(op) \
	op(ESmartObjectTagMergingPolicy::Combine) \
	op(ESmartObjectTagMergingPolicy::Override) 

enum class ESmartObjectTagMergingPolicy : uint8;
template<> struct TIsUEnumClass<ESmartObjectTagMergingPolicy> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectTagMergingPolicy>();
// ********** End Enum ESmartObjectTagMergingPolicy ************************************************

// ********** Begin Enum ESmartObjectTagFilteringPolicy ********************************************
#define FOREACH_ENUM_ESMARTOBJECTTAGFILTERINGPOLICY(op) \
	op(ESmartObjectTagFilteringPolicy::NoFilter) \
	op(ESmartObjectTagFilteringPolicy::Combine) \
	op(ESmartObjectTagFilteringPolicy::Override) 

enum class ESmartObjectTagFilteringPolicy : uint8;
template<> struct TIsUEnumClass<ESmartObjectTagFilteringPolicy> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectTagFilteringPolicy>();
// ********** End Enum ESmartObjectTagFilteringPolicy **********************************************

// ********** Begin Enum ESmartObjectSlotNavigationLocationType ************************************
#define FOREACH_ENUM_ESMARTOBJECTSLOTNAVIGATIONLOCATIONTYPE(op) \
	op(ESmartObjectSlotNavigationLocationType::Entry) \
	op(ESmartObjectSlotNavigationLocationType::Exit) 

enum class ESmartObjectSlotNavigationLocationType : uint8;
template<> struct TIsUEnumClass<ESmartObjectSlotNavigationLocationType> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectSlotNavigationLocationType>();
// ********** End Enum ESmartObjectSlotNavigationLocationType **************************************

// ********** Begin Enum ESmartObjectClaimPriority *************************************************
#define FOREACH_ENUM_ESMARTOBJECTCLAIMPRIORITY(op) \
	op(ESmartObjectClaimPriority::None) \
	op(ESmartObjectClaimPriority::Low) \
	op(ESmartObjectClaimPriority::BelowNormal) \
	op(ESmartObjectClaimPriority::Normal) \
	op(ESmartObjectClaimPriority::AboveNormal) \
	op(ESmartObjectClaimPriority::MIN) \
	op(ESmartObjectClaimPriority::MAX) 

enum class ESmartObjectClaimPriority : uint8;
template<> struct TIsUEnumClass<ESmartObjectClaimPriority> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectClaimPriority>();
// ********** End Enum ESmartObjectClaimPriority ***************************************************

// ********** Begin Enum ESmartObjectTraceType *****************************************************
#define FOREACH_ENUM_ESMARTOBJECTTRACETYPE(op) \
	op(ESmartObjectTraceType::ByChannel) \
	op(ESmartObjectTraceType::ByProfile) \
	op(ESmartObjectTraceType::ByObjectTypes) 

enum class ESmartObjectTraceType : uint8;
template<> struct TIsUEnumClass<ESmartObjectTraceType> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectTraceType>();
// ********** End Enum ESmartObjectTraceType *******************************************************

// ********** Begin Enum ESmartObjectChangeReason **************************************************
#define FOREACH_ENUM_ESMARTOBJECTCHANGEREASON(op) \
	op(ESmartObjectChangeReason::None) \
	op(ESmartObjectChangeReason::OnEvent) \
	op(ESmartObjectChangeReason::OnTagAdded) \
	op(ESmartObjectChangeReason::OnTagRemoved) \
	op(ESmartObjectChangeReason::OnClaimed) \
	op(ESmartObjectChangeReason::OnOccupied) \
	op(ESmartObjectChangeReason::OnReleased) \
	op(ESmartObjectChangeReason::OnSlotEnabled) \
	op(ESmartObjectChangeReason::OnSlotDisabled) \
	op(ESmartObjectChangeReason::OnObjectEnabled) \
	op(ESmartObjectChangeReason::OnObjectDisabled) \
	op(ESmartObjectChangeReason::OnComponentBound) \
	op(ESmartObjectChangeReason::OnComponentUnbound) 

enum class ESmartObjectChangeReason : uint8;
template<> struct TIsUEnumClass<ESmartObjectChangeReason> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectChangeReason>();
// ********** End Enum ESmartObjectChangeReason ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
