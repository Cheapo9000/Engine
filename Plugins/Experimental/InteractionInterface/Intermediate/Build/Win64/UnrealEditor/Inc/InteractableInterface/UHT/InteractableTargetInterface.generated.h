// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableTargetInterface.h"

#ifdef INTERACTABLEINTERFACE_InteractableTargetInterface_generated_h
#error "InteractableTargetInterface.generated.h already included, missing '#pragma once' in InteractableTargetInterface.h"
#endif
#define INTERACTABLEINTERFACE_InteractableTargetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInteractionTarget ***************************************************
struct Z_Construct_UClass_UInteractionTarget_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UInteractionTarget_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionTarget(UInteractionTarget&&) = delete; \
	UInteractionTarget(const UInteractionTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionTarget) \
	virtual ~UInteractionTarget() = default;


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionTarget(); \
	friend struct ::Z_Construct_UClass_UInteractionTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UInteractionTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UInteractionTarget_NoRegister) \
	DECLARE_SERIALIZER(UInteractionTarget)


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionTarget() {} \
public: \
	typedef UInteractionTarget UClassType; \
	typedef IInteractionTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionTarget;

// ********** End Interface UInteractionTarget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableTargetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
