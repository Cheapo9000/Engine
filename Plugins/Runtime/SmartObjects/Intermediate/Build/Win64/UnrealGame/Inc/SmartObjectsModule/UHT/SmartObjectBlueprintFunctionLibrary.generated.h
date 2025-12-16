// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectBlueprintFunctionLibrary.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectBlueprintFunctionLibrary_generated_h
#error "SmartObjectBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SmartObjectBlueprintFunctionLibrary.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBlackboardComponent;
class UBTNode;
class UClass;
class UObject;
class USmartObjectBehaviorDefinition;
class USmartObjectComponent;
class USmartObjectDefinition;
enum class ESmartObjectClaimPriority : uint8;
struct FBlackboardKeySelector;
struct FSmartObjectClaimHandle;
struct FSmartObjectHandle;
struct FSmartObjectRequestFilter;
struct FSmartObjectRequestResult;
struct FSmartObjectSlotHandle;
struct FTargetingRequestHandle;

// ********** Begin Class USmartObjectBlueprintFunctionLibrary *************************************
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlackboardValueAsSOClaimHandle); \
	DECLARE_FUNCTION(execSetBlackboardValueAsSOClaimHandle); \
	DECLARE_FUNCTION(execSetMultipleSmartObjectsEnabled); \
	DECLARE_FUNCTION(execIsValidSmartObjectSlotHandle); \
	DECLARE_FUNCTION(execNotEqual_SmartObjectSlotHandleSmartObjectSlotHandle); \
	DECLARE_FUNCTION(execEqual_SmartObjectSlotHandleSmartObjectSlotHandle); \
	DECLARE_FUNCTION(execConv_SmartObjectSlotHandleToString); \
	DECLARE_FUNCTION(execIsValidSmartObjectHandle); \
	DECLARE_FUNCTION(execEqual_SmartObjectHandleSmartObjectHandle); \
	DECLARE_FUNCTION(execNotEqual_SmartObjectHandleSmartObjectHandle); \
	DECLARE_FUNCTION(execConv_SmartObjectHandleToString); \
	DECLARE_FUNCTION(execConv_SmartObjectDefinitionToString); \
	DECLARE_FUNCTION(execConv_SmartObjectRequestResultToString); \
	DECLARE_FUNCTION(execConv_SmartObjectClaimHandleToString); \
	DECLARE_FUNCTION(execFindSmartObjectsInList); \
	DECLARE_FUNCTION(execFindSmartObjectsInTargetingRequest); \
	DECLARE_FUNCTION(execFindSmartObjectsInActor); \
	DECLARE_FUNCTION(execFindSmartObjectsInComponent); \
	DECLARE_FUNCTION(execMarkSmartObjectSlotAsFree); \
	DECLARE_FUNCTION(execMarkSmartObjectSlotAsOccupied); \
	DECLARE_FUNCTION(execMarkSmartObjectSlotAsClaimed); \
	DECLARE_FUNCTION(execSetSmartObjectEnabled); \
	DECLARE_FUNCTION(execRemoveMultipleSmartObjects); \
	DECLARE_FUNCTION(execRemoveSmartObject); \
	DECLARE_FUNCTION(execAddMultipleSmartObjects); \
	DECLARE_FUNCTION(execAddSmartObject); \
	DECLARE_FUNCTION(execAddOrRemoveMultipleSmartObjects); \
	DECLARE_FUNCTION(execAddOrRemoveSmartObject); \
	DECLARE_FUNCTION(execSmartObjectClaimHandle_Invalid); \
	DECLARE_FUNCTION(execIsValidSmartObjectClaimHandle); \
	DECLARE_FUNCTION(execSetValueAsSOClaimHandle); \
	DECLARE_FUNCTION(execGetValueAsSOClaimHandle);


struct Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectBlueprintFunctionLibrary(USmartObjectBlueprintFunctionLibrary&&) = delete; \
	USmartObjectBlueprintFunctionLibrary(const USmartObjectBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectBlueprintFunctionLibrary) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectBlueprintFunctionLibrary;

// ********** End Class USmartObjectBlueprintFunctionLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
