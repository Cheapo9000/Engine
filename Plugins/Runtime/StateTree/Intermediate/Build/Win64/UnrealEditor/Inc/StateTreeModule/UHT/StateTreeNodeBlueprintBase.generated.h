// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeNodeBlueprintBase.h"

#ifdef STATETREEMODULE_StateTreeNodeBlueprintBase_generated_h
#error "StateTreeNodeBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeNodeBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeNodeBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateTreeNodeFormatting : uint8;
enum class EStateTreeTransitionPriority : uint8;
struct FStateTreeBlueprintPropertyRef;
struct FStateTreeEvent;
struct FStateTreeStateLink;

// ********** Begin Class UStateTreeNodeBlueprintBase **********************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPropertyDescriptionByPropertyName); \
	DECLARE_FUNCTION(execIsPropertyRefValid); \
	DECLARE_FUNCTION(execRequestTransition); \
	DECLARE_FUNCTION(execSendEvent);


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics;
	struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics; \
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeNodeBlueprintBase(); \
	friend struct ::Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics; \
	friend struct ::Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeNodeBlueprintBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeNodeBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEMODULE_API UStateTreeNodeBlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeNodeBlueprintBase(UStateTreeNodeBlueprintBase&&) = delete; \
	UStateTreeNodeBlueprintBase(const UStateTreeNodeBlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeNodeBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeNodeBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeNodeBlueprintBase) \
	STATETREEMODULE_API virtual ~UStateTreeNodeBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeNodeBlueprintBase;

// ********** End Class UStateTreeNodeBlueprintBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h

// ********** Begin Enum EStateTreeBlueprintPropertyCategory ***************************************
#define FOREACH_ENUM_ESTATETREEBLUEPRINTPROPERTYCATEGORY(op) \
	op(EStateTreeBlueprintPropertyCategory::NotSet) \
	op(EStateTreeBlueprintPropertyCategory::Input) \
	op(EStateTreeBlueprintPropertyCategory::Parameter) \
	op(EStateTreeBlueprintPropertyCategory::Output) \
	op(EStateTreeBlueprintPropertyCategory::ContextObject) 

enum class EStateTreeBlueprintPropertyCategory : uint8;
template<> struct TIsUEnumClass<EStateTreeBlueprintPropertyCategory> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeBlueprintPropertyCategory>();
// ********** End Enum EStateTreeBlueprintPropertyCategory *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
