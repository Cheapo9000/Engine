// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraRenderableMeshInterface.h"

#ifdef NIAGARA_NiagaraRenderableMeshInterface_generated_h
#error "NiagaraRenderableMeshInterface.generated.h already included, missing '#pragma once' in NiagaraRenderableMeshInterface.h"
#endif
#define NIAGARA_NiagaraRenderableMeshInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNiagaraRenderableMeshInterface **************************************
struct Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraRenderableMeshInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraRenderableMeshInterface(UNiagaraRenderableMeshInterface&&) = delete; \
	UNiagaraRenderableMeshInterface(const UNiagaraRenderableMeshInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraRenderableMeshInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraRenderableMeshInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraRenderableMeshInterface) \
	virtual ~UNiagaraRenderableMeshInterface() = default;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraRenderableMeshInterface(); \
	friend struct ::Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraRenderableMeshInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraRenderableMeshInterface)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraRenderableMeshInterface() {} \
public: \
	typedef UNiagaraRenderableMeshInterface UClassType; \
	typedef INiagaraRenderableMeshInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_71_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_74_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraRenderableMeshInterface;

// ********** End Interface UNiagaraRenderableMeshInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
