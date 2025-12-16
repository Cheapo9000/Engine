// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfacePhysicsAsset.h"

#ifdef NIAGARA_NiagaraDataInterfacePhysicsAsset_generated_h
#error "NiagaraDataInterfacePhysicsAsset.generated.h already included, missing '#pragma once' in NiagaraDataInterfacePhysicsAsset.h"
#endif
#define NIAGARA_NiagaraDataInterfacePhysicsAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfacePhysicsAsset ****************************************
struct Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfacePhysicsAsset, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfacePhysicsAsset)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfacePhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfacePhysicsAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfacePhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfacePhysicsAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfacePhysicsAsset(UNiagaraDataInterfacePhysicsAsset&&) = delete; \
	UNiagaraDataInterfacePhysicsAsset(const UNiagaraDataInterfacePhysicsAsset&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfacePhysicsAsset();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_103_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_106_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfacePhysicsAsset;

// ********** End Class UNiagaraDataInterfacePhysicsAsset ******************************************

// ********** Begin Interface UNiagaraPhysicsAssetDICollectorInterface *****************************
struct Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraPhysicsAssetDICollectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPhysicsAssetDICollectorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraPhysicsAssetDICollectorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPhysicsAssetDICollectorInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPhysicsAssetDICollectorInterface(UNiagaraPhysicsAssetDICollectorInterface&&) = delete; \
	UNiagaraPhysicsAssetDICollectorInterface(const UNiagaraPhysicsAssetDICollectorInterface&) = delete; \
	virtual ~UNiagaraPhysicsAssetDICollectorInterface() = default;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface(); \
	friend struct ::Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPhysicsAssetDICollectorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPhysicsAssetDICollectorInterface)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_INCLASS_IINTERFACE \
protected: \
	virtual ~INiagaraPhysicsAssetDICollectorInterface() {} \
public: \
	typedef UNiagaraPhysicsAssetDICollectorInterface UClassType; \
	typedef INiagaraPhysicsAssetDICollectorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_223_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_231_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_226_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPhysicsAssetDICollectorInterface;

// ********** End Interface UNiagaraPhysicsAssetDICollectorInterface *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
