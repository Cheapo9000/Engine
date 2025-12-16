// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/VPViewportTickableActorBase.h"

#ifdef VPUTILITIES_VPViewportTickableActorBase_generated_h
#error "VPViewportTickableActorBase.generated.h already included, missing '#pragma once' in VPViewportTickableActorBase.h"
#endif
#define VPUTILITIES_VPViewportTickableActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVPViewportTickableActorBase *********************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EditorDestroyed_Implementation(); \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
	DECLARE_FUNCTION(execEditorLockLocation); \
	DECLARE_FUNCTION(execEditorDestroyed); \
	DECLARE_FUNCTION(execEditorTick);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AVPViewportTickableActorBase_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPViewportTickableActorBase(); \
	friend struct ::Z_Construct_UClass_AVPViewportTickableActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AVPViewportTickableActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister) \
	DECLARE_SERIALIZER(AVPViewportTickableActorBase)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVPViewportTickableActorBase(AVPViewportTickableActorBase&&) = delete; \
	AVPViewportTickableActorBase(const AVPViewportTickableActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPViewportTickableActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPViewportTickableActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPViewportTickableActorBase) \
	NO_API virtual ~AVPViewportTickableActorBase();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVPViewportTickableActorBase;

// ********** End Class AVPViewportTickableActorBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPViewportTickableActorBase_h

// ********** Begin Enum EVPViewportTickableFlags **************************************************
#define FOREACH_ENUM_EVPVIEWPORTTICKABLEFLAGS(op) \
	op(EVPViewportTickableFlags::Editor) \
	op(EVPViewportTickableFlags::Game) \
	op(EVPViewportTickableFlags::EditorPreview) \
	op(EVPViewportTickableFlags::GamePreview) 

enum class EVPViewportTickableFlags : uint8;
template<> struct TIsUEnumClass<EVPViewportTickableFlags> { enum { Value = true }; };
template<> VPUTILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVPViewportTickableFlags>();
// ********** End Enum EVPViewportTickableFlags ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
