// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Renderer/NiagaraStaticMeshComponent.h"

#ifdef NIAGARANANITE_NiagaraStaticMeshComponent_generated_h
#error "NiagaraStaticMeshComponent.generated.h already included, missing '#pragma once' in NiagaraStaticMeshComponent.h"
#endif
#define NIAGARANANITE_NiagaraStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStaticMeshComponent **********************************************
struct Z_Construct_UClass_UNiagaraStaticMeshComponent_Statics;
NIAGARANANITE_API UClass* Z_Construct_UClass_UNiagaraStaticMeshComponent_NoRegister();

#define FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UNiagaraStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARANANITE_API UClass* ::Z_Construct_UClass_UNiagaraStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraNanite"), Z_Construct_UClass_UNiagaraStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStaticMeshComponent)


#define FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStaticMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStaticMeshComponent(UNiagaraStaticMeshComponent&&) = delete; \
	UNiagaraStaticMeshComponent(const UNiagaraStaticMeshComponent&) = delete; \
	NO_API virtual ~UNiagaraStaticMeshComponent();


#define FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h_15_PROLOG
#define FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h_18_INCLASS \
	FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStaticMeshComponent;

// ********** End Class UNiagaraStaticMeshComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
