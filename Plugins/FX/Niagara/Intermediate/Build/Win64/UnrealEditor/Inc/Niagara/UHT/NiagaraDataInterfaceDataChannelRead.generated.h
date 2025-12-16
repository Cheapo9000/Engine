// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataChannelRead.h"

#ifdef NIAGARA_NiagaraDataInterfaceDataChannelRead_generated_h
#error "NiagaraDataInterfaceDataChannelRead.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataChannelRead.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataChannelRead_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceDataChannelRead *************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceDataChannelRead, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceDataChannelRead, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDataChannelRead) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDataChannelRead(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDataChannelRead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDataChannelRead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDataChannelRead); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDataChannelRead(UNiagaraDataInterfaceDataChannelRead&&) = delete; \
	UNiagaraDataInterfaceDataChannelRead(const UNiagaraDataInterfaceDataChannelRead&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDataChannelRead();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_63_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceDataChannelRead;

// ********** End Class UNiagaraDataInterfaceDataChannelRead ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h

// ********** Begin Enum ENDIDataChannelSpawnMode **************************************************
#define FOREACH_ENUM_ENDIDATACHANNELSPAWNMODE(op) \
	op(ENDIDataChannelSpawnMode::Override) \
	op(ENDIDataChannelSpawnMode::Accumulate) \
	op(ENDIDataChannelSpawnMode::None) \
	op(ENDIDataChannelSpawnMode::Max) 

enum class ENDIDataChannelSpawnMode;
template<> struct TIsUEnumClass<ENDIDataChannelSpawnMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIDataChannelSpawnMode>();
// ********** End Enum ENDIDataChannelSpawnMode ****************************************************

// ********** Begin Enum ENDIDataChannelSpawnScaleMode *********************************************
#define FOREACH_ENUM_ENDIDATACHANNELSPAWNSCALEMODE(op) \
	op(ENDIDataChannelSpawnScaleMode::Override) \
	op(ENDIDataChannelSpawnScaleMode::Scale) \
	op(ENDIDataChannelSpawnScaleMode::Max) 

enum class ENDIDataChannelSpawnScaleMode;
template<> struct TIsUEnumClass<ENDIDataChannelSpawnScaleMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIDataChannelSpawnScaleMode>();
// ********** End Enum ENDIDataChannelSpawnScaleMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
