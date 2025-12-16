// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/AnimNextComponent.h"

#ifdef UAF_AnimNextComponent_generated_h
#error "AnimNextComponent.generated.h already included, missing '#pragma once' in AnimNextComponent.h"
#endif
#define UAF_AnimNextComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class UAnimNextComponent;
struct FAnimNextModuleHandle;
struct FAnimNextVariableReference;

// ********** Begin Class UAnimNextComponent *******************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBlueprintGetModuleHandle); \
	DECLARE_FUNCTION(execRemoveModuleEventSubsequent); \
	DECLARE_FUNCTION(execRemoveModuleEventPrerequisite); \
	DECLARE_FUNCTION(execAddModuleEventSubsequent); \
	DECLARE_FUNCTION(execAddModuleEventPrerequisite); \
	DECLARE_FUNCTION(execRemoveComponentSubsequent); \
	DECLARE_FUNCTION(execRemoveComponentPrerequisite); \
	DECLARE_FUNCTION(execAddComponentSubsequent); \
	DECLARE_FUNCTION(execAddComponentPrerequisite); \
	DECLARE_FUNCTION(execShowDebugDrawing); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_UAnimNextComponent_Statics;
	struct Z_Construct_UFunction_UAnimNextComponent_BlueprintSetVariable_Statics; \
	struct Z_Construct_UFunction_UAnimNextComponent_BlueprintSetVariableReference_Statics; \
UAF_API UClass* Z_Construct_UClass_UAnimNextComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextComponent(); \
	friend struct ::Z_Construct_UClass_UAnimNextComponent_Statics; \
	friend struct ::Z_Construct_UFunction_UAnimNextComponent_BlueprintSetVariable_Statics; \
	friend struct ::Z_Construct_UFunction_UAnimNextComponent_BlueprintSetVariableReference_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAnimNextComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAnimNextComponent_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextComponent)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAF_API UAnimNextComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextComponent(UAnimNextComponent&&) = delete; \
	UAnimNextComponent(const UAnimNextComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAF_API, UAnimNextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextComponent) \
	UAF_API virtual ~UAnimNextComponent();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextComponent;

// ********** End Class UAnimNextComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Component_AnimNextComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
