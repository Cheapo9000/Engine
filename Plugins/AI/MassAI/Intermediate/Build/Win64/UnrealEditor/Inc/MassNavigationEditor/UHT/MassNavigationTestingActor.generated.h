// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassNavigationTestingActor.h"

#ifdef MASSNAVIGATIONEDITOR_MassNavigationTestingActor_generated_h
#error "MassNavigationTestingActor.generated.h already included, missing '#pragma once' in MassNavigationTestingActor.h"
#endif
#define MASSNAVIGATIONEDITOR_MassNavigationTestingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassNavigationTestingComponent ******************************************
struct Z_Construct_UClass_UMassNavigationTestingComponent_Statics;
MASSNAVIGATIONEDITOR_API UClass* Z_Construct_UClass_UMassNavigationTestingComponent_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavigationTestingComponent(); \
	friend struct ::Z_Construct_UClass_UMassNavigationTestingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATIONEDITOR_API UClass* ::Z_Construct_UClass_UMassNavigationTestingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassNavigationTestingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassNavigationEditor"), Z_Construct_UClass_UMassNavigationTestingComponent_NoRegister) \
	DECLARE_SERIALIZER(UMassNavigationTestingComponent)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassNavigationTestingComponent(UMassNavigationTestingComponent&&) = delete; \
	UMassNavigationTestingComponent(const UMassNavigationTestingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATIONEDITOR_API, UMassNavigationTestingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavigationTestingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassNavigationTestingComponent) \
	MASSNAVIGATIONEDITOR_API virtual ~UMassNavigationTestingComponent();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_32_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassNavigationTestingComponent;

// ********** End Class UMassNavigationTestingComponent ********************************************

// ********** Begin Class AMassNavigationTestingActor **********************************************
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearPinnedLane); \
	DECLARE_FUNCTION(execPinLane);


struct Z_Construct_UClass_AMassNavigationTestingActor_Statics;
MASSNAVIGATIONEDITOR_API UClass* Z_Construct_UClass_AMassNavigationTestingActor_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassNavigationTestingActor(); \
	friend struct ::Z_Construct_UClass_AMassNavigationTestingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATIONEDITOR_API UClass* ::Z_Construct_UClass_AMassNavigationTestingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassNavigationTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassNavigationEditor"), Z_Construct_UClass_AMassNavigationTestingActor_NoRegister) \
	DECLARE_SERIALIZER(AMassNavigationTestingActor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassNavigationTestingActor(AMassNavigationTestingActor&&) = delete; \
	AMassNavigationTestingActor(const AMassNavigationTestingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATIONEDITOR_API, AMassNavigationTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassNavigationTestingActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassNavigationTestingActor) \
	MASSNAVIGATIONEDITOR_API virtual ~AMassNavigationTestingActor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_103_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassNavigationTestingActor;

// ********** End Class AMassNavigationTestingActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
