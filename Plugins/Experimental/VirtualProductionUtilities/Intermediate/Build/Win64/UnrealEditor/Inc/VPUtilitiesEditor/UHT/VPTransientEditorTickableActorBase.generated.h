// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPTransientEditorTickableActorBase.h"

#ifdef VPUTILITIESEDITOR_VPTransientEditorTickableActorBase_generated_h
#error "VPTransientEditorTickableActorBase.generated.h already included, missing '#pragma once' in VPTransientEditorTickableActorBase.h"
#endif
#define VPUTILITIESEDITOR_VPTransientEditorTickableActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVPTransientEditorTickableActorBase **************************************
struct Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPTransientEditorTickableActorBase(); \
	friend struct ::Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AVPTransientEditorTickableActorBase, AVPEditorTickableActorBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister) \
	DECLARE_SERIALIZER(AVPTransientEditorTickableActorBase)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPTransientEditorTickableActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVPTransientEditorTickableActorBase(AVPTransientEditorTickableActorBase&&) = delete; \
	AVPTransientEditorTickableActorBase(const AVPTransientEditorTickableActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPTransientEditorTickableActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPTransientEditorTickableActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPTransientEditorTickableActorBase) \
	NO_API virtual ~AVPTransientEditorTickableActorBase();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVPTransientEditorTickableActorBase;

// ********** End Class AVPTransientEditorTickableActorBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
