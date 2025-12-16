// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceActorComponent.h"

#ifdef NIAGARA_NiagaraDataInterfaceActorComponent_generated_h
#error "NiagaraDataInterfaceActorComponent.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceActorComponent.h"
#endif
#define NIAGARA_NiagaraDataInterfaceActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceActorComponent **************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceActorComponent(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceActorComponent, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceActorComponent)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceActorComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceActorComponent(UNiagaraDataInterfaceActorComponent&&) = delete; \
	UNiagaraDataInterfaceActorComponent(const UNiagaraDataInterfaceActorComponent&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceActorComponent();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_34_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_37_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceActorComponent;

// ********** End Class UNiagaraDataInterfaceActorComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h

// ********** Begin Enum ENDIActorComponentSourceMode **********************************************
#define FOREACH_ENUM_ENDIACTORCOMPONENTSOURCEMODE(op) \
	op(ENDIActorComponentSourceMode::Default) \
	op(ENDIActorComponentSourceMode::AttachParent) \
	op(ENDIActorComponentSourceMode::LocalPlayer) 

enum class ENDIActorComponentSourceMode : uint8;
template<> struct TIsUEnumClass<ENDIActorComponentSourceMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIActorComponentSourceMode>();
// ********** End Enum ENDIActorComponentSourceMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
