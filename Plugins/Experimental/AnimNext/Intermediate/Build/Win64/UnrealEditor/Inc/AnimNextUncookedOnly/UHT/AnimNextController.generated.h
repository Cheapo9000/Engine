// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_AnimNextController_generated_h
#error "AnimNextController.generated.h already included, missing '#pragma once' in AnimNextController.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_AnimNextController_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTraitPinIndex); \
	DECLARE_FUNCTION(execSwapTraitByName); \
	DECLARE_FUNCTION(execRemoveTraitByName); \
	DECLARE_FUNCTION(execAddTraitByName);


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextController(); \
	friend struct Z_Construct_UClass_UAnimNextController_Statics; \
public: \
	DECLARE_CLASS(UAnimNextController, URigVMController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), ANIMNEXTUNCOOKEDONLY_API) \
	DECLARE_SERIALIZER(UAnimNextController)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMNEXTUNCOOKEDONLY_API UAnimNextController(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextController(UAnimNextController&&); \
	UAnimNextController(const UAnimNextController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMNEXTUNCOOKEDONLY_API, UAnimNextController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNextController) \
	ANIMNEXTUNCOOKEDONLY_API virtual ~UAnimNextController();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
