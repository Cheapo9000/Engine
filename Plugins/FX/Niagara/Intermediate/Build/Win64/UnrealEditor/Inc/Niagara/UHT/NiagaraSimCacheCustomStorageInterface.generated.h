// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCacheCustomStorageInterface.h"

#ifdef NIAGARA_NiagaraSimCacheCustomStorageInterface_generated_h
#error "NiagaraSimCacheCustomStorageInterface.generated.h already included, missing '#pragma once' in NiagaraSimCacheCustomStorageInterface.h"
#endif
#define NIAGARA_NiagaraSimCacheCustomStorageInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNiagaraSimCacheCustomStorageInterface *******************************
struct Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimCacheCustomStorageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimCacheCustomStorageInterface(UNiagaraSimCacheCustomStorageInterface&&) = delete; \
	UNiagaraSimCacheCustomStorageInterface(const UNiagaraSimCacheCustomStorageInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimCacheCustomStorageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheCustomStorageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheCustomStorageInterface) \
	virtual ~UNiagaraSimCacheCustomStorageInterface() = default;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimCacheCustomStorageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimCacheCustomStorageInterface)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraSimCacheCustomStorageInterface() {} \
public: \
	typedef UNiagaraSimCacheCustomStorageInterface UClassType; \
	typedef INiagaraSimCacheCustomStorageInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_72_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_75_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimCacheCustomStorageInterface;

// ********** End Interface UNiagaraSimCacheCustomStorageInterface *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
