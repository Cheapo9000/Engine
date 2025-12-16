// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectDefinition.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectDefinition_generated_h
#error "SmartObjectDefinition.generated.h already included, missing '#pragma once' in SmartObjectDefinition.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESmartObjectTagFilteringPolicy : uint8;
struct FGameplayTagContainer;
struct FGameplayTagQuery;
struct FSmartObjectSlotDefinition;

// ********** Begin Class USmartObjectBehaviorDefinition *******************************************
struct Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectBehaviorDefinition(); \
	friend struct ::Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectBehaviorDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectBehaviorDefinition)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectBehaviorDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectBehaviorDefinition(USmartObjectBehaviorDefinition&&) = delete; \
	USmartObjectBehaviorDefinition(const USmartObjectBehaviorDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectBehaviorDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectBehaviorDefinition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectBehaviorDefinition) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectBehaviorDefinition();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_65_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectBehaviorDefinition;

// ********** End Class USmartObjectBehaviorDefinition *********************************************

// ********** Begin ScriptStruct FSmartObjectDefinitionDataProxy ***********************************
struct Z_Construct_UScriptStruct_FSmartObjectDefinitionDataProxy_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectDefinitionDataProxy_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectDefinitionDataProxy;
// ********** End ScriptStruct FSmartObjectDefinitionDataProxy *************************************

// ********** Begin ScriptStruct FSmartObjectSlotDefinition ****************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectSlotDefinition;
// ********** End ScriptStruct FSmartObjectSlotDefinition ******************************************

// ********** Begin ScriptStruct FSmartObjectDefinitionPreviewData *********************************
struct Z_Construct_UScriptStruct_FSmartObjectDefinitionPreviewData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_237_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectDefinitionPreviewData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectDefinitionPreviewData;
// ********** End ScriptStruct FSmartObjectDefinitionPreviewData ***********************************

// ********** Begin Class USmartObjectDefinition ***************************************************
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUserTagsFilteringPolicy); \
	DECLARE_FUNCTION(execGetActivityTags); \
	DECLARE_FUNCTION(execSetUserTagFilter); \
	DECLARE_FUNCTION(execGetUserTagFilter); \
	DECLARE_FUNCTION(execGetSlotActivityTags); \
	DECLARE_FUNCTION(execGetSlotWorldTransform); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execK2_GetSlots); \
	DECLARE_FUNCTION(execIsValidSlotIndex); \
	DECLARE_FUNCTION(execGetMutableSlot);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USmartObjectDefinition, SMARTOBJECTSMODULE_API)


struct Z_Construct_UClass_USmartObjectDefinition_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectDefinition(); \
	friend struct ::Z_Construct_UClass_USmartObjectDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectDefinition, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectDefinition_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectDefinition) \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USmartObjectDefinition*>(this); }


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectDefinition(USmartObjectDefinition&&) = delete; \
	USmartObjectDefinition(const USmartObjectDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectDefinition) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectDefinition();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_259_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_262_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectDefinition;

// ********** End Class USmartObjectDefinition *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h

// ********** Begin Enum ESmartObjectSlotShape *****************************************************
#define FOREACH_ENUM_ESMARTOBJECTSLOTSHAPE(op) \
	op(ESmartObjectSlotShape::Circle) \
	op(ESmartObjectSlotShape::Rectangle) 

enum class ESmartObjectSlotShape : uint8;
template<> struct TIsUEnumClass<ESmartObjectSlotShape> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectSlotShape>();
// ********** End Enum ESmartObjectSlotShape *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
