// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraRenderableMeshArrayInterface.h"

#ifdef NIAGARA_NiagaraRenderableMeshArrayInterface_generated_h
#error "NiagaraRenderableMeshArrayInterface.generated.h already included, missing '#pragma once' in NiagaraRenderableMeshArrayInterface.h"
#endif
#define NIAGARA_NiagaraRenderableMeshArrayInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNiagaraRenderableMeshArrayInterface *********************************
struct Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraRenderableMeshArrayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraRenderableMeshArrayInterface(UNiagaraRenderableMeshArrayInterface&&) = delete; \
	UNiagaraRenderableMeshArrayInterface(const UNiagaraRenderableMeshArrayInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraRenderableMeshArrayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraRenderableMeshArrayInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraRenderableMeshArrayInterface) \
	virtual ~UNiagaraRenderableMeshArrayInterface() = default;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraRenderableMeshArrayInterface(); \
	friend struct ::Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraRenderableMeshArrayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraRenderableMeshArrayInterface)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraRenderableMeshArrayInterface() {} \
public: \
	typedef UNiagaraRenderableMeshArrayInterface UClassType; \
	typedef INiagaraRenderableMeshArrayInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraRenderableMeshArrayInterface;

// ********** End Interface UNiagaraRenderableMeshArrayInterface ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
