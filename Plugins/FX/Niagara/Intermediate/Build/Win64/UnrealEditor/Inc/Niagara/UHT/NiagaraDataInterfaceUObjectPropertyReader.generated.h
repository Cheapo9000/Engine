// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h"

#ifdef NIAGARA_NiagaraDataInterfaceUObjectPropertyReader_generated_h
#error "NiagaraDataInterfaceUObjectPropertyReader.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceUObjectPropertyReader.h"
#endif
#define NIAGARA_NiagaraDataInterfaceUObjectPropertyReader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;

// ********** Begin ScriptStruct FNiagaraUObjectPropertyReaderRemap ********************************
struct Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraUObjectPropertyReaderRemap;
// ********** End ScriptStruct FNiagaraUObjectPropertyReaderRemap **********************************

// ********** Begin Class UNiagaraDataInterfaceUObjectPropertyReader *******************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetUObjectReaderPropertyRemap);


struct Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceUObjectPropertyReader, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceUObjectPropertyReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceUObjectPropertyReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceUObjectPropertyReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceUObjectPropertyReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceUObjectPropertyReader); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceUObjectPropertyReader(UNiagaraDataInterfaceUObjectPropertyReader&&) = delete; \
	UNiagaraDataInterfaceUObjectPropertyReader(const UNiagaraDataInterfaceUObjectPropertyReader&) = delete; \
	NO_API virtual ~UNiagaraDataInterfaceUObjectPropertyReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_48_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceUObjectPropertyReader;

// ********** End Class UNiagaraDataInterfaceUObjectPropertyReader *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h

// ********** Begin Enum ENDIObjectPropertyReaderSourceMode ****************************************
#define FOREACH_ENUM_ENDIOBJECTPROPERTYREADERSOURCEMODE(op) \
	op(ENDIObjectPropertyReaderSourceMode::Binding) \
	op(ENDIObjectPropertyReaderSourceMode::AttachParentActor) \
	op(ENDIObjectPropertyReaderSourceMode::BindingThenAttachParentActor) \
	op(ENDIObjectPropertyReaderSourceMode::AttachParent) \
	op(ENDIObjectPropertyReaderSourceMode::BindingThenAttachParent) 

enum class ENDIObjectPropertyReaderSourceMode : uint8;
template<> struct TIsUEnumClass<ENDIObjectPropertyReaderSourceMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIObjectPropertyReaderSourceMode>();
// ********** End Enum ENDIObjectPropertyReaderSourceMode ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
