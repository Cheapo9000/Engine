// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeEditorUtilityToolActor.h"

#ifdef XRCREATIVEEDITOR_XRCreativeEditorUtilityToolActor_generated_h
#error "XRCreativeEditorUtilityToolActor.generated.h already included, missing '#pragma once' in XRCreativeEditorUtilityToolActor.h"
#endif
#define XRCREATIVEEDITOR_XRCreativeEditorUtilityToolActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;

// ********** Begin Class AXRCreativeEditorUtilityToolActor ****************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AXRCreativeEditorUtilityToolActor_Statics;
XRCREATIVEEDITOR_API UClass* Z_Construct_UClass_AXRCreativeEditorUtilityToolActor_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAXRCreativeEditorUtilityToolActor(); \
	friend struct ::Z_Construct_UClass_AXRCreativeEditorUtilityToolActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVEEDITOR_API UClass* ::Z_Construct_UClass_AXRCreativeEditorUtilityToolActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AXRCreativeEditorUtilityToolActor, AXRCreativeToolActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreativeEditor"), Z_Construct_UClass_AXRCreativeEditorUtilityToolActor_NoRegister) \
	DECLARE_SERIALIZER(AXRCreativeEditorUtilityToolActor)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXRCreativeEditorUtilityToolActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRCreativeEditorUtilityToolActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeEditorUtilityToolActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeEditorUtilityToolActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AXRCreativeEditorUtilityToolActor(AXRCreativeEditorUtilityToolActor&&) = delete; \
	AXRCreativeEditorUtilityToolActor(const AXRCreativeEditorUtilityToolActor&) = delete; \
	NO_API virtual ~AXRCreativeEditorUtilityToolActor();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AXRCreativeEditorUtilityToolActor;

// ********** End Class AXRCreativeEditorUtilityToolActor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Public_XRCreativeEditorUtilityToolActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
