// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionTargetComponent.h"

#ifdef INTERACTABLEINTERFACE_InteractionTargetComponent_generated_h
#error "InteractionTargetComponent.generated.h already included, missing '#pragma once' in InteractionTargetComponent.h"
#endif
#define INTERACTABLEINTERFACE_InteractionTargetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionContext;
struct FInteractionQueryResults;

// ********** Begin Delegate FBeginInteractionCallback *********************************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_12_DELEGATE \
INTERACTABLEINTERFACE_API void FBeginInteractionCallback_DelegateWrapper(const FMulticastScriptDelegate& BeginInteractionCallback, FInteractionContext const& Context);


// ********** End Delegate FBeginInteractionCallback ***********************************************

// ********** Begin Class UInteractionTargetComponent **********************************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_BeginInteraction); \
	DECLARE_FUNCTION(execBP_AppendTargetConfiguration);


struct Z_Construct_UClass_UInteractionTargetComponent_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UInteractionTargetComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionTargetComponent(); \
	friend struct ::Z_Construct_UClass_UInteractionTargetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UInteractionTargetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionTargetComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UInteractionTargetComponent_NoRegister) \
	DECLARE_SERIALIZER(UInteractionTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractionTargetComponent*>(this); }


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionTargetComponent(UInteractionTargetComponent&&) = delete; \
	UInteractionTargetComponent(const UInteractionTargetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionTargetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionTargetComponent) \
	NO_API virtual ~UInteractionTargetComponent();


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionTargetComponent;

// ********** End Class UInteractionTargetComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTargetComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
