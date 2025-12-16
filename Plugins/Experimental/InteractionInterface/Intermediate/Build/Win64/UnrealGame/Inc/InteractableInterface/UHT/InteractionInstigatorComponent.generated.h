// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionInstigatorComponent.h"

#ifdef INTERACTABLEINTERFACE_InteractionInstigatorComponent_generated_h
#error "InteractionInstigatorComponent.generated.h already included, missing '#pragma once' in InteractionInstigatorComponent.h"
#endif
#define INTERACTABLEINTERFACE_InteractionInstigatorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IInteractionTarget;

// ********** Begin Class UInteractionInstigatorComponent ******************************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttemptToBeginInteractions);


struct Z_Construct_UClass_UInteractionInstigatorComponent_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UInteractionInstigatorComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionInstigatorComponent(); \
	friend struct ::Z_Construct_UClass_UInteractionInstigatorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UInteractionInstigatorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionInstigatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UInteractionInstigatorComponent_NoRegister) \
	DECLARE_SERIALIZER(UInteractionInstigatorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractionInstigatorComponent*>(this); }


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionInstigatorComponent(UInteractionInstigatorComponent&&) = delete; \
	UInteractionInstigatorComponent(const UInteractionInstigatorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionInstigatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInstigatorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInstigatorComponent) \
	NO_API virtual ~UInteractionInstigatorComponent();


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionInstigatorComponent;

// ********** End Class UInteractionInstigatorComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionInstigatorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
