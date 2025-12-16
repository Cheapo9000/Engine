// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableInstigator.h"

#ifdef INTERACTABLEINTERFACE_InteractableInstigator_generated_h
#error "InteractableInstigator.generated.h already included, missing '#pragma once' in InteractableInstigator.h"
#endif
#define INTERACTABLEINTERFACE_InteractableInstigator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInteractableInstigator **********************************************
struct Z_Construct_UClass_UInteractableInstigator_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UInteractableInstigator_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableInstigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractableInstigator(UInteractableInstigator&&) = delete; \
	UInteractableInstigator(const UInteractableInstigator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableInstigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInstigator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInstigator) \
	virtual ~UInteractableInstigator() = default;


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInstigator(); \
	friend struct ::Z_Construct_UClass_UInteractableInstigator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UInteractableInstigator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractableInstigator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UInteractableInstigator_NoRegister) \
	DECLARE_SERIALIZER(UInteractableInstigator)


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInstigator() {} \
public: \
	typedef UInteractableInstigator UClassType; \
	typedef IInteractableInstigator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractableInstigator;

// ********** End Interface UInteractableInstigator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInstigator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
