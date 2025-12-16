// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPEditorTickableActorBase.h"

#ifdef VPUTILITIESEDITOR_VPEditorTickableActorBase_generated_h
#error "VPEditorTickableActorBase.generated.h already included, missing '#pragma once' in VPEditorTickableActorBase.h"
#endif
#define VPUTILITIESEDITOR_VPEditorTickableActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVPEditorTickableActorBase ***********************************************
struct Z_Construct_UClass_AVPEditorTickableActorBase_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPEditorTickableActorBase(); \
	friend struct ::Z_Construct_UClass_AVPEditorTickableActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AVPEditorTickableActorBase, AVPViewportTickableActorBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister) \
	DECLARE_SERIALIZER(AVPEditorTickableActorBase)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPEditorTickableActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVPEditorTickableActorBase(AVPEditorTickableActorBase&&) = delete; \
	AVPEditorTickableActorBase(const AVPEditorTickableActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPEditorTickableActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPEditorTickableActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPEditorTickableActorBase) \
	NO_API virtual ~AVPEditorTickableActorBase();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVPEditorTickableActorBase;

// ********** End Class AVPEditorTickableActorBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
