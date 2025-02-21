// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/AnimNextComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_AnimNextComponent_generated_h
#error "AnimNextComponent.generated.h already included, missing '#pragma once' in AnimNextComponent.h"
#endif
#define ANIMNEXT_AnimNextComponent_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextComponent(); \
	friend struct Z_Construct_UClass_UAnimNextComponent_Statics; \
public: \
	DECLARE_CLASS(UAnimNextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimNext"), ANIMNEXT_API) \
	DECLARE_SERIALIZER(UAnimNextComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimNextComponent*>(this); }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMNEXT_API UAnimNextComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextComponent(UAnimNextComponent&&); \
	UAnimNextComponent(const UAnimNextComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMNEXT_API, UAnimNextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextComponent) \
	ANIMNEXT_API virtual ~UAnimNextComponent();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXT_API UClass* StaticClass<class UAnimNextComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Component_AnimNextComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
