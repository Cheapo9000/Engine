// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableInterfaceLibrary.h"

#ifdef INTERACTABLEINTERFACE_InteractableInterfaceLibrary_generated_h
#error "InteractableInterfaceLibrary.generated.h already included, missing '#pragma once' in InteractableInterfaceLibrary.h"
#endif
#define INTERACTABLEINTERFACE_InteractableInterfaceLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IInteractionTarget;
struct FInteractionContext;
struct FInteractionQueryResults;

// ********** Begin Class UInteractableInterfaceLibrary ********************************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetQueryResults); \
	DECLARE_FUNCTION(execBeginInteractionOnTarget); \
	DECLARE_FUNCTION(execAppendTargetConfiguration); \
	DECLARE_FUNCTION(execGetInteractableTargetsFromActor);


struct Z_Construct_UClass_UInteractableInterfaceLibrary_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UInteractableInterfaceLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractableInterfaceLibrary(); \
	friend struct ::Z_Construct_UClass_UInteractableInterfaceLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UInteractableInterfaceLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractableInterfaceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UInteractableInterfaceLibrary_NoRegister) \
	DECLARE_SERIALIZER(UInteractableInterfaceLibrary)


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableInterfaceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractableInterfaceLibrary(UInteractableInterfaceLibrary&&) = delete; \
	UInteractableInterfaceLibrary(const UInteractableInterfaceLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableInterfaceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterfaceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterfaceLibrary) \
	NO_API virtual ~UInteractableInterfaceLibrary();


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractableInterfaceLibrary;

// ********** End Class UInteractableInterfaceLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractableInterfaceLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
