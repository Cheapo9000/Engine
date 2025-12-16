// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Translators/MassTranslators_BehaviorTree.h"

#ifdef MASSACTORS_MassTranslators_BehaviorTree_generated_h
#error "MassTranslators_BehaviorTree.generated.h already included, missing '#pragma once' in MassTranslators_BehaviorTree.h"
#endif
#define MASSACTORS_MassTranslators_BehaviorTree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataFragment_BehaviorTreeComponentWrapper ************************
struct Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FDataFragment_BehaviorTreeComponentWrapper;
// ********** End ScriptStruct FDataFragment_BehaviorTreeComponentWrapper **************************

// ********** Begin Class UMassTranslator_BehaviorTree *********************************************
struct Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassTranslator_BehaviorTree_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTranslator_BehaviorTree(); \
	friend struct ::Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassTranslator_BehaviorTree_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTranslator_BehaviorTree, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassTranslator_BehaviorTree_NoRegister) \
	DECLARE_SERIALIZER(UMassTranslator_BehaviorTree)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTranslator_BehaviorTree(UMassTranslator_BehaviorTree&&) = delete; \
	UMassTranslator_BehaviorTree(const UMassTranslator_BehaviorTree&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassTranslator_BehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTranslator_BehaviorTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTranslator_BehaviorTree) \
	MASSACTORS_API virtual ~UMassTranslator_BehaviorTree();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTranslator_BehaviorTree;

// ********** End Class UMassTranslator_BehaviorTree ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
