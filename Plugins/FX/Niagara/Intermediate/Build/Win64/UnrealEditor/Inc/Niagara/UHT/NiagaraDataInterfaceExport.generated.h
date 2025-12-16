// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceExport.h"

#ifdef NIAGARA_NiagaraDataInterfaceExport_generated_h
#error "NiagaraDataInterfaceExport.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceExport.h"
#endif
#define NIAGARA_NiagaraDataInterfaceExport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
struct FBasicParticleData;

// ********** Begin ScriptStruct FBasicParticleData ************************************************
struct Z_Construct_UScriptStruct_FBasicParticleData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBasicParticleData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FBasicParticleData;
// ********** End ScriptStruct FBasicParticleData **************************************************

// ********** Begin Interface UNiagaraParticleCallbackHandler **************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveParticleData_Implementation(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset) {}; \
	DECLARE_FUNCTION(execReceiveParticleData);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParticleCallbackHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraParticleCallbackHandler(UNiagaraParticleCallbackHandler&&) = delete; \
	UNiagaraParticleCallbackHandler(const UNiagaraParticleCallbackHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParticleCallbackHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParticleCallbackHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParticleCallbackHandler) \
	virtual ~UNiagaraParticleCallbackHandler() = default;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraParticleCallbackHandler(); \
	friend struct ::Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraParticleCallbackHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraParticleCallbackHandler)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraParticleCallbackHandler() {} \
public: \
	typedef UNiagaraParticleCallbackHandler UClassType; \
	typedef INiagaraParticleCallbackHandler ThisClass; \
	static void Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_25_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraParticleCallbackHandler;

// ********** End Interface UNiagaraParticleCallbackHandler ****************************************

// ********** Begin Class UNiagaraDataInterfaceExport **********************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceExport(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceExport, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceExport)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceExport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceExport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceExport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceExport); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceExport(UNiagaraDataInterfaceExport&&) = delete; \
	UNiagaraDataInterfaceExport(const UNiagaraDataInterfaceExport&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceExport();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_52_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceExport;

// ********** End Class UNiagaraDataInterfaceExport ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h

// ********** Begin Enum ENDIExport_GPUAllocationMode **********************************************
#define FOREACH_ENUM_ENDIEXPORT_GPUALLOCATIONMODE(op) \
	op(ENDIExport_GPUAllocationMode::FixedSize) \
	op(ENDIExport_GPUAllocationMode::PerParticle) 

enum class ENDIExport_GPUAllocationMode : uint8;
template<> struct TIsUEnumClass<ENDIExport_GPUAllocationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIExport_GPUAllocationMode>();
// ********** End Enum ENDIExport_GPUAllocationMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
